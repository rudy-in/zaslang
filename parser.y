%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <map>

extern int yylex();
extern int yyparse();
extern FILE *yyin;

void yyerror(const char *s) {
    std::cerr << "Parse error: " << s << std::endl;
}

// Use std::vector for the scope stack
std::vector<std::map<std::string, int>> scope_stack;

void enterScope() {
    scope_stack.push_back({});
    // Uncomment for debugging
    // printf("Entering a new scope.\n");
}

void exitScope() {
    if (!scope_stack.empty()) {
        scope_stack.pop_back();
        // Uncomment for debugging
        // printf("Exiting the current scope.\n");
    } else {
        yyerror("Attempted to exit a scope, but no scopes are open.");
    }
}

int getVariableValue(const std::string& name) {
    for (auto it = scope_stack.rbegin(); it != scope_stack.rend(); ++it) {
        if (it->count(name)) return (*it)[name];
    }
    yyerror(("Undefined variable: " + name).c_str());
    return 0;
}

void setVariableValue(const std::string& name, int value) {
    if (!scope_stack.empty()) {
        scope_stack.back()[name] = value;
    } else {
        yyerror("No scope to define variable");
    }
}
%}

%union {
    int num;
    char* str;
}

%token <num> NUMBER
%token <str> IDENTIFIER
%token IF ELSE LET
%token PLUS MINUS MUL DIV ASSIGN
%token LPAREN RPAREN SEMICOLON LBRACE RBRACE
%token LT GT EQ
%token DISPLAY
%token <str> STRING

%type <num> expression

%left PLUS MINUS
%left MUL DIV

%%

program:
    statements
    ;

statements:
    statement
    | statements statement
    ;

statement:
    declaration_statement
    | if_statement
    | scoped_statements
    | expression_statement
    | display_statement
    ;

declaration_statement:
    LET IDENTIFIER ASSIGN expression SEMICOLON {
        setVariableValue($2, $4);
    }
    ;

if_statement:
    IF LPAREN expression RPAREN statement ELSE statement {
        if ($3) {
            /* Execute the 'if' block's statements */

        } else {
            /* Execute the 'else' block's statements */

        }
    }
    ;

display_statement:
    DISPLAY LPAREN IDENTIFIER RPAREN SEMICOLON {
        auto value = getVariableValue($3);
        printf("%s = %d\n", $3, value);
    }
    | DISPLAY LPAREN STRING RPAREN SEMICOLON {
        printf("%s\n", $3);
    }
    ;

scoped_statements:
    LBRACE {
        enterScope();
    } statements RBRACE {
        exitScope();
    }
    ;

expression_statement:
    expression SEMICOLON {
        printf("%d\n", $1);  // Print the result of the expression
    }
    ;

expression:
    NUMBER                           { $$ = $1; }
    | IDENTIFIER                     { $$ = getVariableValue($1); }
    | expression PLUS expression     { $$ = $1 + $3; }
    | expression MINUS expression    { $$ = $1 - $3; }
    | expression MUL expression      { $$ = $1 * $3; }
    | expression DIV expression      {
        if ($3 == 0) {
            yyerror("Division by zero");
            $$ = 0;
        } else {
            $$ = $1 / $3;
        }
    }
    | LPAREN expression RPAREN       { $$ = $2; }
    ;

%%

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: " << argv[0] << " <filename>\n";
        return 1;
    }

    FILE* fp = fopen(argv[1], "r");
    if (!fp) {
        std::cerr << "Error opening file: " << argv[1] << std::endl;
        return 1;
    }

    yyin = fp;

    // Initialize the global scope
    enterScope();

    yyparse();
    fclose(fp);

    // Clean up the global scope
    exitScope();

    return 0;
}
