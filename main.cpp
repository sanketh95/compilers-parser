#include <iostream>
#include <vector>
#include <set>
#include <fstream>
#include <algorithm>
#include "lex.h"
#include "cstring"
#include <stdlib.h>

using namespace std;
#define EPSILON -1
#define DOLLAR -2
#define START 0


bool hasEpsilon(set<int> set){

	std::set<int>::iterator it;
	it = set.find(EPSILON);

	return (bool) (it != set.end());
}

set<int> get_first( vector<set<int> > first_sets,  vector<int> symbols  ){
	set<int> first_set;
	int i,j;
	set<int>::iterator it;

	for(i=0; i < symbols.size() ; i++  ){
		if(symbols[i] == EPSILON)
			continue;
		for(it = first_sets[symbols[i]].begin() ; it != first_sets[symbols[i]].end() ; ++it  ){
			first_set.insert(*it);
		}
		if( !hasEpsilon( first_sets[symbols[i]] ) ){
			break;
		}
		
	}

	if(first_set.empty()){
		first_set.insert(EPSILON);
	}

	return first_set;
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
// 	To
// build FOLLOW(X)
// 1. Add $ to FOLLOW(S) [ If S is the start symbol]
// 2. If (A → αBβ), then
// 3. Add everything in FIRST(β) except ε to FOLLOW(B)
//     If ((A → αBβ and β →* ε) or (A → αB))
// Add everything in FOLLOW(A) to FOLLOW(B)

	vector<set<int> > follow(vector<set<int> > first_sets){
		
		int lnt = rules.size();
		vector<set<int> > follow_sets(lnt);
		set<int> follow_set;
		set<int> first_set;
	//	vector<int> subset;
		int i,j,k;
		int current_symbol;
		set<int>::iterator it;
		vector<set<int> > dependencies(lnt);
		bool flag=1;

		//Step 1
		follow_sets[0].insert(DOLLAR);

		//Step 2
		for( i=0; i< rules.size(); i++ ){
			for( j=0 ; j < rules[i].size(); j++ ){
				for( k = rules[i][j].size() - 1 ; k >= 0 ; k-- ){

					current_symbol = rules[i][j][k];

					

					//If current symbol is terminal, skip
					if( current_symbol >= lnt || current_symbol == EPSILON)
						continue;

					//Add last symbol in the production to dependency list of the lhs symbol
					if( k  == rules[i][j].size() -1 ){
						dependencies[i].insert(current_symbol);					
						continue;
					}						

					//Subset of production
					vector<int> subset(rules[i][j].begin() + k+1, rules[i][j].end() );
					first_set = get_first(first_sets, subset);

					//If first_set has EPSILON , add dependency 
					if( hasEpsilon(first_set) )
						dependencies[i].insert(current_symbol);

					//Insert first of subset into follow of current symbol except EPSILON
					for( it = first_set.begin(); it != first_set.end() ; ++it  ){
						if(*it == EPSILON)
							continue;
						follow_sets[current_symbol].insert(*it);
					}

				}
			}
		}

		cout<<"reached"<<endl;
		int count =0;
		//step3
		while(flag == 1){

			flag = 0;

			for(int i=0; i < dependencies.size(); i++){

				//cout<<"out"<<count<<endl;
				count++;

				for(it = dependencies[i].begin(); it != dependencies[i].end(); ++it){

					//Add follow_sets[i] to follow_sets[*it]

					//cout<<"in"<<count<<endl;
					count++;

					int  prevsize,cursize;
					prevsize = follow_sets[*it].size();
					
					for(set<int>::iterator it1 = follow_sets[i].begin(); it1 != follow_sets[i].end(); ++it1){


					//	cout<<"in in"<<count<<endl;
						count++;

						follow_sets[*it].insert(*it1);
					}
					cursize = follow_sets[*it].size();

					if(cursize != prevsize)
						flag = 1;

				}
			}	
			
		}
		

		cout << "Printing follow set" << endl;

		for( i=0; i < follow_sets.size(); i++ ){
			cout << i << " : ";
			for(it = follow_sets[i].begin(); it != follow_sets[i].end() ; ++it ){
				cout << *it << " " ;
			}
			cout << endl;
		}

		return follow_sets;
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



/*Computes and returns the parse table*/
vector<vector<vector<int> > > 
compute_parse_table(vector<set<int> > first_sets, vector<set<int> > follow_sets, Rules rules ){
	int lnt = rules.rules.size();
	int lt = rules.len_terminals;
	vector<vector<vector<int> > > parse_table(lnt);
	vector<vector<int> > row(lt+1);
	int i,j,k;

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

	cout << "DOing nothing" << endl;
	int t;
	for(i=0;i<lnt;i++){
		for(j=0;j<rules.rules[i].size();j++){

			//exit(1);

			set<int> temp = get_first(first_sets, rules.rules[i][j]);
			//For each production
			//For each terminal in first_sets(RHS of production)
			//code here
			for(it = temp.begin() ; it != temp.end() ; ++it){
				if ( *it == EPSILON)
					continue;
				//cout << "Adding  " << i <<"," << *it << endl;
				parse_table[i][*it-lnt] = rules.rules[i][j];
			}

			//If EPSILON is in first_sets(RHS of production)
			//for each terminal including $ in follow_sets[i]
			if( hasEpsilon(temp) ){
				//cout << "Adding follow of " << i << endl;
				for(it = follow_sets[i].begin() ; it != follow_sets[i].end();  ++it){

					//cout << "Adding symbol " << *it << endl;
					if( *it == DOLLAR )
						parse_table[i][lt] = rules.rules[i][j];
					else
						parse_table[i][*it-lnt] = rules.rules[i][j];
				}
			}
		}



	}


			cout << "The parse table is " << endl;

		for (int i = 0; i < parse_table.size(); ++i)
		{
			for (int j = 0; j < parse_table[i].size(); ++j)
			{
				for (int k = 0; k < parse_table[i][j].size(); ++k)
				{
					cout << parse_table[i][j][k] << " ";
				}

				cout << " | ";
			}
			cout << "\n";
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




bool parse( vector<vector<vector<int> > > parse_table ){
	vector<int> stack;
	int token;
	int lnt = parse_table.size();
	int stack_top, k, symbol_to_push;
	bool error = false;

	stack.push_back(DOLLAR);
	stack.push_back(START);

	token = lex();
	if(token == DOLLAR)
		token = parse_table[0].size()-1;
	else
		token = token - lnt;

	cout << "The current token is " << token << endl;
	cout << "The stacktop is " << stack_top << endl;

	while(1){

		//token = lex();

		stack_top = stack[stack.size() - 1];



		if(stack_top == DOLLAR){
			//DOLLAR  = parse_table[0].size()-1
			//Checking if token is dollar
			if(token == parse_table[0].size()-1){

				break;
			}
			error = true;
			cout << "1" << endl;
			break;
		}


		
		if(stack_top >= lnt ){

			if(token == parse_table[0].size()-1){
				error = true;
				cout << "STACKTOP " << stack_top << endl;
				cout << "2" << endl;
				break;
			}

			if(stack_top == token + lnt){

				cout << "Popping terminal " << stack_top << endl;


				stack.pop_back();
				token = lex();

				//cout << "The token is " << token << endl
				

				if(token == DOLLAR)
					token = parse_table[0].size()-1;
				else
					token = token - lnt;
				continue;
			}
			else{
				cout << "3" << endl;
				error = true;
				break;
			}
		}


		if(parse_table[stack_top][token].size() != 0){
			cout << "popping " << stack_top << endl;
			stack.pop_back();
			if(parse_table[stack_top][token][0] == EPSILON){
				continue;
			}

			for( k=parse_table[stack_top][token].size()-1; k>=0; k-- ){
				symbol_to_push = parse_table[stack_top][token][k];
				cout << "Pushing " << symbol_to_push << endl;
				stack.push_back(symbol_to_push);
			}
		}
		else{
			cout << "4" << endl;
			error = true;
			break;
		}

		cout << "\nThe current token is " << token << endl;
		cout << "The stacktop is " << stack_top << endl;
	}

	if(error){
		cout << "Syntax Error" << endl;
	}

	else cout << "Successful !" << endl;

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
	vector<set<int> > follow_sets;
	vector<vector<vector<int> > >  parse_table;

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

	follow_sets = r.follow(first_sets);
	//cout << "b" << endl;
	//Call compute_parse_table

	parse_table = compute_parse_table(first_sets, follow_sets, r);
	parse(parse_table);

}


