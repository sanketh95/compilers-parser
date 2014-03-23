%{

%}
%start mainstmt
%token

%%
mainstmt : ws int ws main ws '(' ws ')' ws '{' ws code ws '}' ws
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
equals : ws equals ws '==' ws greaterthan ws | ws greaterthan ws
greaterthan : ws greaterthan ws '>' ws factor ws | ws factor ws
factor : ws number ws | ws '(' ws expr ws ')' ws | ws id ws
declaration : ws 'int' ws id ws estmt ws | ws 'float' ws id ws estmt ws | ws 'char' ws id ws estmt ws | ws 'long' ws id ws estmt ws |ws 'short' ws id ws estmt ws | ws 'double' ws id ws estmt ws
initialisation : ws id ws '=' ws expr ws ';' ws | epsilon
stmts : ws declaration ws stmts ws | ws iniitialisation ws stmts ws | ws ifelsestmt ws  stmts ws | ws whilestmt ws  stmts ws | ws dowhilestmt ws  stmts ws | ws forstmt ws  stmts ws | ws switchstmt ws  stmts ws | ws epsilon ws
ifelsestmt : ws ifstmt ws elseifstmt ws elsestmt ws
ifstmt : ws if ws '(' ws expr ws ')' ws '{' ws code ws '}' ws
elsestmt : ws else ws '(' ws ')' ws '{' ws code ws '}' ws | ws epsilon ws
elseifstmt : ws 'else' ws ifstmt ws elseifstmt ws | ws epsilon ws
loopcode : ws loopcode ws 'break' ws ';' ws loopcode ws | ws loopcode ws 'continue' ws ';' ws loopcode ws | ws code ws
whilestmt : ws 'while' ws '(' ws expr ws ')' ws '{' ws loopcode ws '}' ws
dowhilestmt : ws 'do' ws '{' ws loopcode ws '}' ws 'while' ws '(' ws expr ws ')' ws ';' ws
forstmt : ws 'for' ws '(' ws initialisation ws ';' ws expr ws ';' ws expr ws ')' ws '{' ws loopcode ws '}' ws
switchstmt : ws 'switch' ws '(' ws expr ws ')' ws '{' ws casestmt ws '}' ws
casestmt : ws 'case' ws expr ws ':' ws code ws casestmt ws | epsilon | ws 'default' ws ':' ws code ws