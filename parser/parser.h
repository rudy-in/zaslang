#ifndef PARSER_H
#define PARSER_H

#include "../lexer/lexer.h"
#include <memory>
#include <string>
#include <vector>

class Expr;
class FunctionAST;
class PrototypeAST;


enum ParserToken {
    tok_identifier,
    tok_number,
    tok_eof,
    tok_def,
    tok_extern,
    tok_operator,
    
};


extern std::string IdentifierStr;
extern double NumVal;
extern int CurTok;

//int getNextToken();
std::unique_ptr<Expr> ParsePrimary();
std::unique_ptr<Expr> ParseNumberExpr();
std::unique_ptr<Expr> ParseIdentifierExpr();
std::unique_ptr<FunctionAST> parseFunction();
std::unique_ptr<PrototypeAST> ParsePrototype();
void HandleTopLevelExpression();
void InitializeParser();

#endif // PARSER_H
