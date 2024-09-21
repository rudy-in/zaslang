
// Generated from ZasLexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  ZasLexer : public antlr4::Lexer {
public:
  enum {
    FUN = 1, EXTERN = 2, IF = 3, ELSE = 4, STRING = 5, INT = 6, FLOAT = 7, 
    PLUS = 8, MINUS = 9, MUL = 10, DIV = 11, ASSIGN = 12, LT = 13, GT = 14, 
    LPAREN = 15, RPAREN = 16, LBRACE = 17, RBRACE = 18, COMMA = 19, SEMICOLON = 20, 
    COLON = 21, NUMBER = 22, IDENTIFIER = 23, WS = 24, COMMENT = 25
  };

  explicit ZasLexer(antlr4::CharStream *input);

  ~ZasLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

