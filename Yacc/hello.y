%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


%}

%start	program
%token IF ELSE ERR LP RP NUM DOLL ID SEMI WHILE DO FOR BREAK BEGIN2 END2 INT MAIN LC RC DOUBLE LONG SHORT 
%token FLOAT CHAR SWITCH CASE TDEFAULT COLON
%right EQ
%left EQQ
%left GT GE
%left LT LE
%left  PLUS MINUS
%left  TIMES DIV

%%

program: INT MAIN LP RP LC stmt_list RC DOLL					{printf("thanks ravi\n"); exit(0);}
        ;

stmt_list 	:	stmt_list stmt 		{printf("- 1 -"); }
			|	stmt 				{printf("- 2 -"); }
			;

stmt 	:	assignment SEMI															 {printf("- 3 -");}
		|	ifstmt																	 {printf("- 4 -");}
		|	WHILE LP expr RP LC stmt_list RC										 {printf("- 5 -"); }
		|	declaration	SEMI														 {printf("- 24 -");}
		|	FOR LP forcondition1 SEMI forcond2 SEMI forcondition1 RP LC stmt_list RC {printf("- 34 -");}
		|	SWITCH LP expr RP LC casestmt RC 				 {printf("- 50 - ");}
		;

casestmt : CASE expr COLON stmt_list BREAK SEMI casestmt {printf("- 51 - ");}
		 | TDEFAULT COLON stmt_list 						 {printf(" -53 -");}
		 | 												 {printf("-52-");}
		 ;

forcondition1 : assignment {printf("- 40 -");}
			  |			   {printf("- 41 -");}
			  ;

forcond2	: expr 		   {printf("- 43 -");}
			|			   {printf("- 44 -");}


assignment : ID EQ expr 	{printf("- 37 -");}
		   ;

declaration : INT ID initialisation {printf("29\n"); }
			| FLOAT ID initialisation {printf("29\n"); }
			| CHAR ID initialisation {printf("29\n"); }
			| DOUBLE ID initialisation {printf("29\n"); }
			| LONG ID initialisation {printf("29\n"); }
			| SHORT ID initialisation {printf("29\n"); }
			;

initialisation : EQ factor {printf("- 32 -");}
			   |		   {printf("- 33 -");}
			   ;

ifstmt : IF LP expr RP LC stmt_list RC  elsestmt {printf("- 37 - ");}
	   ;

elsestmt : ELSE LC stmt_list RC 			{printf("- 30 -");}
		 | ELSE ifstmt			 			{printf("- 31 -");}
		 |									{printf("- 32 -");}
		 ;

expr	:	expr LT expr2				{printf("- 16 -"); }
		|	expr GT expr2				{printf("- 17 -"); }
		|	expr LE expr2				{printf("- 18 -");}
		|	expr GE expr2				{printf("- 19 -"); }
		|	expr EQQ expr2				{printf("- 20 -");}
		|	expr2						{printf("- 21 -");}

expr2 	:	expr2 PLUS term				{printf("- 9 -");  }
		|	expr2 MINUS term			{printf("- 26 -");}
		|	term						{printf("- 10 -");  }
		;

term	:	term TIMES factor			{printf("- 11 -");  }
		|	term DIV factor				{printf("- 25 -");  }
		|	factor						{printf("- 13 -");}
		;

factor	:	LP expr RP					{printf("- 27 -"); }
		|	NUM							{printf("- 14 -"); }
		|	ID							{printf("- 15 -"); }
		;

%%

int main(void)
{
	//extern int yydebug = 1;
    yyparse();
    return 0;
}



int yywrap(void)
{
    return 0;
}

int yyerror(void)
{
    printf("Error\n");
    exit(1);
}
