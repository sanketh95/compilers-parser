#include <iostream>
#include <vector>

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

	vector<vector<int> > first(){
		int lnt = rules.size();
		vector<vector<int> > first_set( len_terminals + lnt );
		vector<int> temp;
		int i,j;

		/*Terminal symbols can produce only themselves*/
		/*So, first sets of terminal symbols are trivial*/
		for(i = lnt; i < len_terminals+lnt;i++){
			temp.push_back(i);
			first_set[i]=temp;
			temp.clear();
		}


		/*Algo to compute the first sets of non-terminals*/


		/*Print the first_sets*/
		for(i=0;i<first_set.size();i++){
			for(j=0;j<first_set[i].size();j++){
				cout << first_set[i][j] << " ";
 			}
 			cout << endl;
		}


		//Return the first set
		return first_set;

	}

	void follow(){

	}
};

bool in_vector(vector<int> set, int val){
	int i;
	for(i=0;i<set.size();i++){
		if(set[i] == val){
			return true;
		}
	}
	return false;
}

/*Computes and returns the parse table*/
vector<vector<vector<int> > > 
compute_parse_table(vector<vector<int> > first_sets, vector<vector<int> > follow_sets, Rules rules ){
	int lnt = rules.rules.size();
	int lt = rules.len_terminals;
	vector<vector<vector<int> > > parse_table(lnt);
	vector<vector<int> > row(lt);
	int i,j,k;

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
			//For each production
			//For each terminal in first_sets(production)
			//code here


			//If EPSILON is in first_sets[i]
			//for each terminal including $ in follow_sets[i]
			if(in_vector( first_sets[i], EPSILON ) ){
				for(k=0;k<follow_sets[i].size();k++){
					parse_table[i][follow_sets[i][k]-lnt] = rules.rules[i][j];
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


