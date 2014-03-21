#include <iostream>
#include <vector>
#include <set>

using namespace std;
#define EPSILON -1

class Rules
{
public:
	
	vector<vector<vector<int> > > rules;
	int len_terminals;

	Rules(vector<vector<vector<int> > > r, int lt){
		rules = r;	
		len_terminals = lt;
	}

	vector<set<int> > first(){
		int lnt = rules.size();
		vector<set<int> > first_set( len_terminals + lnt );
		set<int> temp;
		int i,j;

		/*Terminal symbols can produce only themselves*/
		/*So, first sets of terminal symbols are trivial*/
		for(i = lnt; i < len_terminals+lnt;i++){
			temp.insert(i);
			first_set[i]=temp;
			temp.clear();
		}


		/*Algo to compute the first sets of non-terminals*/




		//Return the first set
		return first_set;

	}

	void follow(){

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



int main(){
	vector<int> a(4,100);
	vector<int> b(4,20);
	vector<int> f(4,30);
	vector< vector<int> > c;
	c.push_back(a);
	c.push_back(f);
	vector< vector<int> > d;
	d.push_back(b);
	vector<vector<vector<int> > > e;
	e.push_back(c);
	e.push_back(d);

	Rules r = Rules(e,10);
	r.first();

}

