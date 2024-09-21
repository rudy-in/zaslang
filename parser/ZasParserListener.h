
// Generated from ZasParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ZasParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ZasParser.
 */
class  ZasParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(ZasParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(ZasParser::ProgramContext *ctx) = 0;

  virtual void enterStatement(ZasParser::StatementContext *ctx) = 0;
  virtual void exitStatement(ZasParser::StatementContext *ctx) = 0;

  virtual void enterDisplayStatement(ZasParser::DisplayStatementContext *ctx) = 0;
  virtual void exitDisplayStatement(ZasParser::DisplayStatementContext *ctx) = 0;

  virtual void enterExpressionStatement(ZasParser::ExpressionStatementContext *ctx) = 0;
  virtual void exitExpressionStatement(ZasParser::ExpressionStatementContext *ctx) = 0;

  virtual void enterVariableDeclaration(ZasParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(ZasParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterFunctionDefinition(ZasParser::FunctionDefinitionContext *ctx) = 0;
  virtual void exitFunctionDefinition(ZasParser::FunctionDefinitionContext *ctx) = 0;

  virtual void enterParameterList(ZasParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(ZasParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(ZasParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(ZasParser::ParameterContext *ctx) = 0;

  virtual void enterTypeAnnotation(ZasParser::TypeAnnotationContext *ctx) = 0;
  virtual void exitTypeAnnotation(ZasParser::TypeAnnotationContext *ctx) = 0;

  virtual void enterBlock(ZasParser::BlockContext *ctx) = 0;
  virtual void exitBlock(ZasParser::BlockContext *ctx) = 0;

  virtual void enterExpression(ZasParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(ZasParser::ExpressionContext *ctx) = 0;

  virtual void enterComparison(ZasParser::ComparisonContext *ctx) = 0;
  virtual void exitComparison(ZasParser::ComparisonContext *ctx) = 0;

  virtual void enterTerm(ZasParser::TermContext *ctx) = 0;
  virtual void exitTerm(ZasParser::TermContext *ctx) = 0;

  virtual void enterFactor(ZasParser::FactorContext *ctx) = 0;
  virtual void exitFactor(ZasParser::FactorContext *ctx) = 0;

  virtual void enterFunctionCall(ZasParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(ZasParser::FunctionCallContext *ctx) = 0;

  virtual void enterArgumentList(ZasParser::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(ZasParser::ArgumentListContext *ctx) = 0;

  virtual void enterIfStatement(ZasParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(ZasParser::IfStatementContext *ctx) = 0;


};

