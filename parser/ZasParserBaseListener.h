
// Generated from ZasParser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "ZasParserListener.h"


/**
 * This class provides an empty implementation of ZasParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ZasParserBaseListener : public ZasParserListener {
public:

  virtual void enterProgram(ZasParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(ZasParser::ProgramContext * /*ctx*/) override { }

  virtual void enterStatement(ZasParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(ZasParser::StatementContext * /*ctx*/) override { }

  virtual void enterDisplayStatement(ZasParser::DisplayStatementContext * /*ctx*/) override { }
  virtual void exitDisplayStatement(ZasParser::DisplayStatementContext * /*ctx*/) override { }

  virtual void enterExpressionStatement(ZasParser::ExpressionStatementContext * /*ctx*/) override { }
  virtual void exitExpressionStatement(ZasParser::ExpressionStatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(ZasParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(ZasParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterFunctionDefinition(ZasParser::FunctionDefinitionContext * /*ctx*/) override { }
  virtual void exitFunctionDefinition(ZasParser::FunctionDefinitionContext * /*ctx*/) override { }

  virtual void enterParameterList(ZasParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(ZasParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(ZasParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(ZasParser::ParameterContext * /*ctx*/) override { }

  virtual void enterTypeAnnotation(ZasParser::TypeAnnotationContext * /*ctx*/) override { }
  virtual void exitTypeAnnotation(ZasParser::TypeAnnotationContext * /*ctx*/) override { }

  virtual void enterBlock(ZasParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(ZasParser::BlockContext * /*ctx*/) override { }

  virtual void enterExpression(ZasParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(ZasParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterComparison(ZasParser::ComparisonContext * /*ctx*/) override { }
  virtual void exitComparison(ZasParser::ComparisonContext * /*ctx*/) override { }

  virtual void enterTerm(ZasParser::TermContext * /*ctx*/) override { }
  virtual void exitTerm(ZasParser::TermContext * /*ctx*/) override { }

  virtual void enterFactor(ZasParser::FactorContext * /*ctx*/) override { }
  virtual void exitFactor(ZasParser::FactorContext * /*ctx*/) override { }

  virtual void enterFunctionCall(ZasParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(ZasParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterArgumentList(ZasParser::ArgumentListContext * /*ctx*/) override { }
  virtual void exitArgumentList(ZasParser::ArgumentListContext * /*ctx*/) override { }

  virtual void enterIfStatement(ZasParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(ZasParser::IfStatementContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

