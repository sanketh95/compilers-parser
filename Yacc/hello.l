%{
  #include <stdlib.h>
  #include "hello.tab.h"
%}

%%
"//"[a-zA-Z0-9_ ]+	{}
[ \t\n]+		{/* print(); */}
"int"			{return INT;}
"long"			{return LONG;}
"float"			{return FLOAT;}
"double"		{return DOUBLE;}
"char"			{return CHAR;}
"short"			{return SHORT;}
"main"			{return MAIN;}
"if"			{  return IF;}
"else"			{return ELSE;}
"while"			{ return WHILE;}
"do"			{return DO;}
"for"			{return FOR;}
"break"			{return BREAK;}
"switch" 		{return SWITCH;}
"case"			{return CASE;}
"default"		{return TDEFAULT;}
"begin"			{return BEGIN2;}
"end"			{ return END2;}
"+"				{ return PLUS;}
"-"				{ return MINUS;}
"*"				{return TIMES;}
"/"				{ return DIV;}
"<="			{return LE;}
">="			{ return GE;}
"<"				{ return LT;}
">"				{ return GT;}
"=="			{ return EQQ;}
"("				{ return LP;}
")"				{return RP;}
"{"				{return LC;}
"}"				{return RC;}
"$"				{ return DOLL;}
[0-9]+											   { return NUM;}
[0-9]+("."[0-9]+)(E("\+"|"-")?[0-9]+)?             {return NUM;}
"="												   {return EQ;}
";"							{ return SEMI;}
":"							{return COLON;}
[a-zA-Z][a-zA-Z_0-9]*		{ return ID;}
. 							{return ERR; }

%%
