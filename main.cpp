#include <iostream>
#include <vector>
#include <set>
#include <fstream>
#include <algorithm>
#include "lex.h"
#include "cstring"

using namespace std;
#define EPSILON -1
#define DOLLAR -2
#define START 0

bool hasEpsilon(set<int> set){

	std::set<int>::iterator it;
	it = set.find(EPSILON);

	return (bool) (it != set.end());
}

class Rules
{
public:
	
	vector<vector<vector<int> > > rules;
	int len_terminals;

	Rules(vector<vector<vector<int> > > r, int lt){
		rules = r;	
		len_terminals = lt;
	}

	/*Return the first sets for the production rules*/
	vector<set<int> > first(){
		int lnt = rules.size(), i;
		vector<set<int> > first_sets(len_terminals + lnt);
		set<int> first_set;

		/*First sets of terminals are trivial*/
		for(i=lnt; i < first_sets.size()  ; i++){
			first_set.insert(i);
			first_sets[i] = first_set;
			first_set.clear();
		}

		/*For non terminals*/
		for(i=0;i<lnt;i++){
			first_set = calc_first_set( i, &first_sets );
			first_sets[i] = first_set;
			first_set.clear();
		}
		
		return first_sets;
	}

	/*Return the follow sets for the production rules*/
	vector<set<int> > follow(){

	}

	void pprint(){
		int i,j,k;

		cout << "\n\nThe Rules are\n\n";

		for(int i=0; i < rules.size(); i++ ){
			cout << i << " : " ;
			for (int j = 0; j < rules[i].size(); j++)
			{
				for (int k = 0; k < rules[i][j].size(); k++)
				{
					cout << rules[i][j][k] << " ";
				}

				cout << " | ";
			}

			cout << "\n";
		}
	}

private:
	set<int> calc_first_set(int index,  vector<set<int> > *first_sets ){
		set<int> first_set;
		int i,j;
		int lnt = rules.size();
		int current_symbol;
		set<int> temp;
		set<int>::iterator it;
		bool epsilon = true;


		//Already filled return that
		if( (*first_sets)[index].size() > 0  )
			return (*first_sets)[index];


		for (int i = 0; i < rules[index].size(); i++)
		{
			epsilon = true;
			for( j=0; j< rules[index][i].size(); j++ ){
				current_symbol = rules[index][i][j];
				if(current_symbol != EPSILON){
					epsilon = false;
					break;
				}
			}

			//Epsilon production ? 
			///If yes insert epsilon and skip production
			if(epsilon){
				first_set.insert(EPSILON);
				continue;
			}

			for (int j = 0; j < rules[index][i].size(); j++)
			{
				current_symbol = rules[index][i][j];

				if(current_symbol == EPSILON)
					continue;

				if( current_symbol >= lnt ){
					//terminal symbol
					first_set.insert(current_symbol);
					break;
				}
				else{
					if(  (*first_sets)[current_symbol].size() > 0  )
						temp = (*first_sets)[current_symbol];
					else{
						temp = calc_first_set(current_symbol, first_sets);
						(*first_sets)[current_symbol] = temp;
					}

					for( it = temp.begin() ; it != temp.end(); ++it )
						first_set.insert(*it);


					//If current symbol's first set does not have epsilon
					//Return
					//Otherwise move to the next symbol in the production
					if( !hasEpsilon(temp) ){
						temp.clear();
						break;
					}
					temp.clear();
				}
			}
		}

		return first_set;
	}


};

set<int> get_first( vector<set<int> > first_sets,  vector<int> symbols  ){
	set<int> first_set;
	int i,j;
	set<int>::iterator it;
	bool is_in;

	for(i=0; i < symbols.size() ; i++  ){
		if(symbols[i] == EPSILON)
			continue;

		for(it = first_sets[symbols[i]].begin() ; it != first_sets[symbols[i]].end() ; ++it  ){
			first_set.insert(*it);
		}
		is_in = (bool)(first_sets[symbols[symbols[i]]].find(EPSILON) != first_sets[symbols[i]].end());
		if(!is_in){
			break;
		}
	}

	if(first_set.empty()){
		first_set.insert(EPSILON);
	}

	return first_set;
}


/*Computes and returns the parse table*/
vector<vector<vector<int> > > 
compute_parse_table(vector<set<int> > first_sets, vector<set<int> > follow_sets, Rules rules ){
	int lnt = rules.rules.size();
	int lt = rules.len_terminals;
	vector<vector<vector<int> > > parse_table(lnt);
	vector<vector<int> > row(lt);
	int i,j,k;
	set<int> temp;
	set<int>::iterator it;

	for(i=0;i<lnt;i++){
		parse_table[i] = row;
	}

	/*
		for each production A → α {
			for each terminal ‘t’ in FIRST(α)
				M[A, t] = α;
		if ε is in FIRST(α) , then
			for each terminal ‘b’ (including ‘$’) in Follow (A)
				M[A, b] = α;
		}
	*/

	for(i=0;i<lnt;i++){
		for(j=0;j<rules.rules[i].size();j++){
			temp = get_first(first_sets, rules.rules[i][j]);
			//For each production
			//For each terminal in first_sets(RHS of production)
			//code here
			for(it = temp.begin() ; it != temp.end() ; ++it){
				if ( *it == EPSILON )
					continue;
				parse_table[i][*it-lnt] = rules.rules[i][j];
			}

			//If EPSILON is in first_sets(RHS of production)
			//for each terminal including $ in follow_sets[i]
			if( (bool)( temp.find(EPSILON) != temp.end() ) ){
				for(it = follow_sets[i].begin() ; it != follow_sets[i].end();  ++it){
					parse_table[i][*it - lnt] = rules.rules[i][j];
				}
			}
		}


	}


	return parse_table;



}



int getIndex(string value, vector<string> strings){
	int len = strings.size();
	for(int i=0; i < len; i++ ){
		if(strings[i].compare(value) == 0)
			return i;
	}

	return -1;
}



int main()
{
	char str_temp[1024];
	
	char* tok;
	string str_line, index;
	int i = 0;
	ifstream in ("inputcfg");
	vector<int> produc;

	vector<vector<vector<int> > > rules;
	vector<string> production;
	vector<vector<int> > row;
	

	/*Vectors for Terminals and non-terminals*/
	vector<string> nonTerminals;
	vector<string> terminals;

	/*Iterators*/
	vector<string>::iterator it;

	while (in.good())
	{
		char c_line[1024] = "";
		getline(in,str_line);
		strncpy(c_line, str_line.c_str(), str_line.length());
		c_line[sizeof(c_line) - 1] = '\0';
		//cout << c_line << endl;
		tok = strtok (c_line," :|");
		
		string temp(tok);
		//cout << temp << endl;

		/*If already in nonTerminals, dont add*/
		if(  (it = find(nonTerminals.begin(), nonTerminals.end(), temp)) == nonTerminals.end()   ){
			nonTerminals.push_back(temp);
		}
		
		//If in terminals remove from terminals
		if(  (it = find(terminals.begin(), terminals.end(), temp)) != terminals.end()   ){
			terminals.erase(it);
		}		

	    while (1)
		{

		   tok = strtok (NULL, " :|");
		   if(tok == NULL)
		   		break;
		   string temp(tok);

		   //cout << temp << endl;

		   if(temp.compare("E") == 0)
		   		continue;

		   /*If not in non-terminals*/
		   if( (it = find(nonTerminals.begin(), nonTerminals.end(), temp )) == nonTerminals.end() ){

		   		//If not in terminals
		   		if( (it = find(terminals.begin(), terminals.end(), temp)) == terminals.end()  ){
		   			terminals.push_back(temp);
		   		}
		   }

	    }

	}

	in.seekg(0, in.beg);



	while (in.good())
	{
		char c_line[1024] = "";
		getline(in,str_line);
		strncpy(c_line, str_line.c_str(), str_line.length());
		c_line[sizeof(c_line) - 1] = '\0';
		//cout << c_line << endl;
		tok = strtok (c_line,":");
		
		string lhs(tok);
		
		char *rhs = strtok(NULL,":");
		//cout<<"rhs:"<<rhs<<endl;
		
		tok = strtok(rhs ,"|");
		string prod(tok);
		production.push_back(prod);
		//cout<< "produtions:" << prod << endl;

		while(1){
		   
		   
		   
		   tok = strtok(NULL,"|");
		   if(tok==NULL)
		   break;
		   
		   string prod(tok);
		   production.push_back(prod);
		   //cout<< "produtions:" << prod << endl;
		}

		//cout<<"\n\n\n";
		for(int i=0;i<production.size();i++)
		{
			//cout<<"i"<<i<<endl;

			int ind;
			string symbol;
			char *tok,buf[1024];
			strcpy(buf,production[i].c_str());
			

			tok = strtok(buf," ");
			string temp(tok);
			ind = getIndex(temp,nonTerminals);
			if(ind==-1)
				ind= getIndex(temp,terminals) + nonTerminals.size();
				
			while(tok!=NULL)
			{

				if(temp.compare("E") == 0){
					ind = -1;
				}

				//cout << "Pushing " << temp << " with index " << ind << endl;

				produc.push_back(ind);
				
				tok = strtok(NULL," ");
				if(tok == NULL)
					break;
				string temp(tok);
				ind = getIndex(temp,nonTerminals);
				if(ind==-1)
					ind= getIndex(temp,terminals) + nonTerminals.size();


			}	
			row.push_back(produc);
			produc.clear();

		} 


		rules.push_back(row);
		row.clear();
		production.clear();
	}


	//CFG parsed and rules generated
	//Create the rules object

	cout << "\n\nNon Terminals\n";
	for(i=0;i<nonTerminals.size();i++)
		cout << i << " : " << nonTerminals[i] << endl;
	int j = nonTerminals.size();
	cout << "\n\nTerminals\n";
	for(i=0;i<terminals.size();i++)
		cout << i+j << " : " << terminals[i] << endl;	

	vector<set<int> > first_sets;

	Rules r = Rules(rules, terminals.size());
	r.pprint();

	first_sets = r.first();

	cout << "\n\nPrinting first sets \n\n";
	set<int>::iterator s;

	for(i=0;i < first_sets.size();i++){
		cout << i << " :\t";
		for( s = first_sets[i].begin(); s != first_sets[i].end() ; ++s )
			cout << *s <<" ";
		cout << endl;
	}

}


