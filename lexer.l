%{
#include "parser.tab.h"
%}

%%

[0-9]+                { yylval.num = atoi(yytext); return NUMBER; }
[ \t\n\r]+            { /* ignore whitespace */ }
if                    { return IF; }
else                  { return ELSE; }
let                   { return LET; }
display                 { return DISPLAY; }
[a-zA-Z_][a-zA-Z0-9_]* { yylval.str = strdup(yytext); return IDENTIFIER; }
"+"                   { return PLUS; }
"-"                   { return MINUS; }
"*"                   { return MUL; }
"/"                   { return DIV; }
"="                   { return ASSIGN; }
"("                   { return LPAREN; }
")"                   { return RPAREN; }
";"                   { return SEMICOLON; }
"{"                   { return LBRACE; }
"}"                   { return RBRACE; }
\"[^\"]*\"              { yylval.str = strdup(yytext + 1); yylval.str[strlen(yylval.str) - 1] = '\0'; return STRING; }


%%

int yywrap() {
    return 1;
}
