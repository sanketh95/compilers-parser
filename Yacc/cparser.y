%{
	#include <stdio.h>
	#include <stdlib.h>
	int yylex(void);

%}
%start mainstmt
%token IDENT /* Simple identifier */
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
%token END
%right '='
%left EQUALSCHECK
%left '>' GE
%left '<' LE
%left  '+' '-'
%left  '*' '/'

%%
mainstmt : ws INT ws TMAIN ws '(' ws ')' ws '{' ws code ws '}' ws END {printf("1\n");exit(0);}
;
ws : '\n' {printf("2\n");}
	| '\t' {printf("3\n");}
	| ' ' {printf("4\n");}
	| epsilon {printf("5\n");}
;
code : ws stmts ws {printf("6\n");}
;
epsilon :  {printf("7\n");}
;
estmt : ws '=' ws expr ws ';' ws  {printf("10\n");}
	  
;

declaration : ws INT ws IDENT ws  {printf("29\n"); }
			| ws FLOAT ws IDENT ws  {printf("30\n");}
			| ws CHAR ws IDENT ws  {printf("31\n");}
			| ws LONG ws IDENT ws  {printf("32\n");}
			| ws SHORT ws IDENT ws  {printf("33\n");}
			| ws DOUBLE ws IDENT ws  {printf("34\n");}
;
initialisation : declaration ws estmt ws {printf("35\n");}
;
stmts : ws declaration ws ';' ws stmts ws {printf("37\n");}
	  | ws initialisation ws stmts ws {printf("38\n");}
	  | ws ifelsestmt ws  stmts ws {printf("39\n");}
	  | ws whilestmt ws  stmts ws {printf("40\n");}
	  | ws dowhilestmt ws  stmts ws {printf("41\n");}
	  | ws forstmt ws stmts ws {printf("42\n");}
	  | ws switchstmt ws stmts ws {printf("43\n");}
	  | ws epsilon ws {printf("44\n");}
	  | ws assignment ws ';' ws stmts ws {printf("72\n");}
	  | ws expr ws ';' ws stmts ws  {printf("76\n");}
;
assignment : ws IDENT ws '=' ws expr ws {printf("73\n");}
;
ifelsestmt : ws ifstmt ws elseifstmt ws elsestmt ws {printf("45\n");}
;
ifstmt : ws IF ws '(' ws expr ws ')' ws '{' ws code ws '}' ws {printf("46\n");}
;
elsestmt : ws ELSE ws '(' ws ')' ws '{' ws code ws '}' ws {printf("47\n");}
		 | ws epsilon ws {printf("48\n");}
;
elseifstmt : ws ELSE ws ifstmt ws elseifstmt ws {printf("49\n");}
		   | ws epsilon ws {printf("50\n");}
;
loopcode : ws loopcode ws BREAK ws ';' ws loopcode ws {printf("51\n");}
		 | ws loopcode ws CONTINUE ws ';' ws loopcode ws {printf("52\n");}
		 | code
;
whilestmt : ws WHILE ws '(' ws expr ws ')' ws '{' ws loopcode ws '}' ws {printf("53\n");}
;
dowhilestmt : ws DO ws '{' ws loopcode ws '}' ws WHILE ws '(' ws expr ws ')' ws ';' ws {printf("54\n");}
;
forstmt : ws FOR ws '(' ws assignment ws ';' ws expr ws ';' ws assignment ws ')' ws '{' ws loopcode ws '}' ws {printf("55\n");}
;
switchstmt : ws SWITCH ws '(' ws expr ws ')' ws '{' ws casestmt ws '}' ws {printf("56\n");}
;
casestmt : ws CASE ws expr ws ':' ws code ws casestmt ws {printf("57\n");}
		| epsilon {printf("58\n");}
		;


expr	:	ws expr ws '<' ws expr2 ws				{printf("11\n");}
		|	ws expr ws '>' ws expr2	ws 			{printf("12\n"); }
		|	ws expr ws LE ws expr2	ws 			{printf("13\n"); }
		|	ws expr ws GE ws expr2	ws 			{printf("14\n");}
		|	ws expr ws EQUALSCHECK ws expr2 ws 		{printf("15\n");}
		|	ws expr2 ws 				{printf("16\n");}	
		;	

expr2 	:	 ws expr2  ws '+' ws term ws 			{printf("17\n");}		
		|	 ws expr2  ws '-' ws  term ws 			{printf("18\n");}	
		|	 ws term ws 						{printf("19\n");}		
		;

term	:	 ws term  ws '*'  ws factor ws 			{printf("20\n");}		
		|	 ws term ws  '/' ws  factor	ws 			{printf("21\n");}		
		|	 ws factor	 ws 					{printf("22\n");}
		;

factor	:	 ws '(' ws expr ws ')' ws 					{printf("23\n");}
		|	 ws NUMBER ws 						{printf("24\n");}
		|	 ws IDENT ws 							{printf("25\n");}
		;

%%
main( int argc, char *argv[] )
{
	extern FILE *yyin;
	yyin = fopen (argv[1],"r");
	//int yydebug = 1 ;
	int errors = 0;
	yyparse();
}

yyerror (char *s)
{
	printf("Error: %s\n", s);
}

int yywrap(void)
{
    return 0;
}
