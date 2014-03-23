%{
	#include <stdio.h>
	#include <stdlib.h>
	int yylex(void);

%}
%start mainstmt
%union { char* id; }
%token <id> IDENT /* Simple identifier */
%token IF
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
%left ’-’ ’+’
%left ’*’ ’/’


%%

mainstmt : ws INT ws main ws '(' ws ')' ws '{' ws code ws '}' ws

ws : '\n' | '\t' | ' '| epsilon

code : ws stmts ws

epsilon :

stmt : ws expr ws ';' ws | ws expr ws ';' ws stmt ws

estmt : ws '=' ws expr ws ';' ws | ws expr ws ';' ws stmt ws

expr : ws expr ws '-' ws sum ws | ws sum ws

sum : ws sum ws '+' ws product ws | ws product ws

product : ws product ws '*' ws fraction ws | ws fraction ws

fraction : ws fraction ws '/' ws lessthan ws | ws lessthan ws

lessthan : ws lessthan ws '<' ws equals ws | ws equals ws

equals : ws equals ws EQUALSCHECK ws greaterthan ws | ws greaterthan ws

greaterthan : ws greaterthan ws '>' ws factor ws | ws factor ws

factor : ws NUMBER ws | ws '(' ws expr ws ')' ws | ws IDENT ws

declaration : ws INT ws IDENT ws estmt ws | ws FLOAT ws IDENT ws estmt ws | ws CHAR ws IDENT ws estmt ws | ws LONG ws IDENT ws estmt ws |ws SHORT ws IDENT ws estmt ws | ws DOUBLE ws IDENT ws estmt ws

initialisation : ws IDENT ws '=' ws expr ws ';' ws | epsilon

stmts : ws declaration ws stmts ws | ws iniitialisation ws stmts ws | ws ifelsestmt ws  stmts ws | ws whilestmt ws  stmts ws | ws dowhilestmt ws  stmts ws | ws forstmt ws  stmts ws | ws switchstmt ws stmts ws | ws epsilon ws

ifelsestmt : ws ifstmt ws elseifstmt ws elsestmt ws

ifstmt : ws IF ws '(' ws expr ws ')' ws '{' ws code ws '}' ws

elsestmt : ws ELSE ws '(' ws ')' ws '{' ws code ws '}' ws | ws epsilon ws

elseifstmt : ws ELSE ws ifstmt ws elseifstmt ws | ws epsilon ws

loopcode : ws loopcode ws BREAK ws ';' ws loopcode ws | ws loopcode ws CONTINUE ws ';' ws loopcode ws | code

whilestmt : ws WHILE ws '(' ws expr ws ')' ws '{' ws loopcode ws '}' ws

dowhilestmt : ws DO ws '{' ws loopcode ws '}' ws WHILE ws '(' ws expr ws ')' ws ';' ws

forstmt : ws FOR ws '(' ws initialisation ws ';' ws expr ws ';' ws expr ws ')' ws '{' ws loopcode ws '}' ws

switchstmt : ws SWITCH ws '(' ws expr ws ')' ws '{' ws casestmt ws '}' ws

casestmt : ws CASE ws expr ws ':' ws code ws casestmt ws | epsilon | ws 'default' ws ':' ws code ws

%%
void main( int argc, char *argv[] )
{ 
	extern FILE *yyin;
	++argv; −−argc;
	yyin = fopen( argv[0], ”r” );
	yydebug = 1;
	errors = 0;
	yyparse ();
}

void yyerror (char *s) /* Called by yyparse on error */
{
	printf (”Error:	%s\n”, s);
}
