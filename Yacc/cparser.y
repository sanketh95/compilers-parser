%{
	#include <stdio.h>
	#include <stdlib.h>
	int yylex(void);

%}
%start mainstmt
%union { char* id; }
%token <id> IDENT /* Simple identifier */
%token IF
%token TMAIN
%token ELSE
%token WHILE
%token SWITCH
%token CASE
%token INT
%token FLOAT
%token DOUBLE
%token LONG
%token SHORT
%token CHAR
%token FOR
%token DO
%token BREAK
%token CONTINUE
%token EQUALSCHECK
%token NUMBER
%token '-' '+'
%token '*' '/'


%%

mainstmt : FOR

%%
main( int argc, char *argv[] )
{
	extern FILE *yyin;
	yyin = fopen (argv[1],"r");
	int yydebug = 1 ;
	int errors = 0;
	yyparse();
}

yyerror (char *s)
{
	printf("Error: %s\n", s);
}