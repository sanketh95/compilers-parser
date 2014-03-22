#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <map>
#include <vector>
using namespace std;


struct ltstr			//comparison function for the map function
{
  bool operator()(const char* s1, const char* s2) const
  {
    return strcmp(s1, s2) < 0;
  }
};


int main()
{
	char str_temp[1024];
	
	char* tok;
	string str_line;
	int i = 0,map_id = 1;
	ifstream in ("inputcfg");
	map<const char*, int, ltstr> cfg_elem;
	while (in.good())
	{
		char c_line[1024] = "";
		getline(in,str_line);
		//cout << str_line <<endl;
		strncpy(c_line, str_line.c_str(), str_line.length());
		c_line[sizeof(c_line) - 1] = '\0';
		cout << c_line << endl;
		tok = strtok (c_line," :|");
	    while (tok != NULL)
		{
		   cfg_elem[tok] = map_id;
		   printf ("%s\n",tok);
		   tok = strtok (NULL, " :|");
		   cout << map_id << endl;
		   map_id ++;
		   
		   //cout << tok << endl;
	    }
		//string line("test\ttest2\ttest3");		
	}
	

}