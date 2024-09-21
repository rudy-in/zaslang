
// Generated from ZasParser.g4 by ANTLR 4.13.2


#include "ZasParserListener.h"

#include "ZasParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct ZasParserStaticData final {
  ZasParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  ZasParserStaticData(const ZasParserStaticData&) = delete;
  ZasParserStaticData(ZasParserStaticData&&) = delete;
  ZasParserStaticData& operator=(const ZasParserStaticData&) = delete;
  ZasParserStaticData& operator=(ZasParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag zasparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<ZasParserStaticData> zasparserParserStaticData = nullptr;

void zasparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (zasparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(zasparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<ZasParserStaticData>(
    std::vector<std::string>{
      "program", "statement", "displayStatement", "expressionStatement", 
      "variableDeclaration", "functionDefinition", "parameterList", "parameter", 
      "typeAnnotation", "block", "expression", "comparison", "term", "factor", 
      "functionCall", "argumentList", "ifStatement"
    },
    std::vector<std::string>{
      "", "'fun'", "'extern'", "'if'", "'else'", "", "'int'", "'float'", 
      "'+'", "'-'", "'*'", "'/'", "'='", "'<'", "'>'", "'('", "')'", "'{'", 
      "'}'", "','", "';'", "':'"
    },
    std::vector<std::string>{
      "", "FUN", "EXTERN", "IF", "ELSE", "STRING", "INT", "FLOAT", "PLUS", 
      "MINUS", "MUL", "DIV", "ASSIGN", "LT", "GT", "LPAREN", "RPAREN", "LBRACE", 
      "RBRACE", "COMMA", "SEMICOLON", "COLON", "NUMBER", "IDENTIFIER", "WS", 
      "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,25,158,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,1,0,1,0,1,0,5,0,38,8,0,10,0,12,0,41,9,0,1,0,1,
  	0,1,1,1,1,1,1,1,1,3,1,49,8,1,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,4,
  	1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,3,5,69,8,5,1,5,1,5,3,5,73,8,5,1,5,1,5,
  	1,5,1,5,1,6,1,6,1,6,5,6,82,8,6,10,6,12,6,85,9,6,1,7,1,7,1,7,1,8,1,8,1,
  	8,1,9,5,9,94,8,9,10,9,12,9,97,9,9,1,10,1,10,1,10,5,10,102,8,10,10,10,
  	12,10,105,9,10,1,11,1,11,1,11,5,11,110,8,11,10,11,12,11,113,9,11,1,12,
  	1,12,1,12,5,12,118,8,12,10,12,12,12,121,9,12,1,13,1,13,1,13,1,13,1,13,
  	1,13,3,13,129,8,13,1,14,1,14,1,14,3,14,134,8,14,1,14,1,14,1,15,1,15,1,
  	15,5,15,141,8,15,10,15,12,15,144,9,15,1,15,3,15,147,8,15,1,16,1,16,1,
  	16,1,16,1,16,1,16,1,16,3,16,156,8,16,1,16,0,0,17,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,0,4,1,0,6,7,1,0,8,9,1,0,13,14,1,0,10,11,159,0,
  	39,1,0,0,0,2,48,1,0,0,0,4,50,1,0,0,0,6,56,1,0,0,0,8,59,1,0,0,0,10,64,
  	1,0,0,0,12,78,1,0,0,0,14,86,1,0,0,0,16,89,1,0,0,0,18,95,1,0,0,0,20,98,
  	1,0,0,0,22,106,1,0,0,0,24,114,1,0,0,0,26,128,1,0,0,0,28,130,1,0,0,0,30,
  	146,1,0,0,0,32,148,1,0,0,0,34,38,3,2,1,0,35,38,3,4,2,0,36,38,3,10,5,0,
  	37,34,1,0,0,0,37,35,1,0,0,0,37,36,1,0,0,0,38,41,1,0,0,0,39,37,1,0,0,0,
  	39,40,1,0,0,0,40,42,1,0,0,0,41,39,1,0,0,0,42,43,5,0,0,1,43,1,1,0,0,0,
  	44,49,3,6,3,0,45,49,3,8,4,0,46,49,3,32,16,0,47,49,3,4,2,0,48,44,1,0,0,
  	0,48,45,1,0,0,0,48,46,1,0,0,0,48,47,1,0,0,0,49,3,1,0,0,0,50,51,5,23,0,
  	0,51,52,5,15,0,0,52,53,5,5,0,0,53,54,5,16,0,0,54,55,5,20,0,0,55,5,1,0,
  	0,0,56,57,3,20,10,0,57,58,5,20,0,0,58,7,1,0,0,0,59,60,5,23,0,0,60,61,
  	5,12,0,0,61,62,3,20,10,0,62,63,5,20,0,0,63,9,1,0,0,0,64,65,5,1,0,0,65,
  	66,5,23,0,0,66,68,5,15,0,0,67,69,3,12,6,0,68,67,1,0,0,0,68,69,1,0,0,0,
  	69,70,1,0,0,0,70,72,5,16,0,0,71,73,3,16,8,0,72,71,1,0,0,0,72,73,1,0,0,
  	0,73,74,1,0,0,0,74,75,5,17,0,0,75,76,3,18,9,0,76,77,5,18,0,0,77,11,1,
  	0,0,0,78,83,3,14,7,0,79,80,5,19,0,0,80,82,3,14,7,0,81,79,1,0,0,0,82,85,
  	1,0,0,0,83,81,1,0,0,0,83,84,1,0,0,0,84,13,1,0,0,0,85,83,1,0,0,0,86,87,
  	5,23,0,0,87,88,3,16,8,0,88,15,1,0,0,0,89,90,5,21,0,0,90,91,7,0,0,0,91,
  	17,1,0,0,0,92,94,3,2,1,0,93,92,1,0,0,0,94,97,1,0,0,0,95,93,1,0,0,0,95,
  	96,1,0,0,0,96,19,1,0,0,0,97,95,1,0,0,0,98,103,3,22,11,0,99,100,7,1,0,
  	0,100,102,3,22,11,0,101,99,1,0,0,0,102,105,1,0,0,0,103,101,1,0,0,0,103,
  	104,1,0,0,0,104,21,1,0,0,0,105,103,1,0,0,0,106,111,3,24,12,0,107,108,
  	7,2,0,0,108,110,3,24,12,0,109,107,1,0,0,0,110,113,1,0,0,0,111,109,1,0,
  	0,0,111,112,1,0,0,0,112,23,1,0,0,0,113,111,1,0,0,0,114,119,3,26,13,0,
  	115,116,7,3,0,0,116,118,3,26,13,0,117,115,1,0,0,0,118,121,1,0,0,0,119,
  	117,1,0,0,0,119,120,1,0,0,0,120,25,1,0,0,0,121,119,1,0,0,0,122,129,5,
  	22,0,0,123,129,5,23,0,0,124,125,5,15,0,0,125,126,3,20,10,0,126,127,5,
  	16,0,0,127,129,1,0,0,0,128,122,1,0,0,0,128,123,1,0,0,0,128,124,1,0,0,
  	0,129,27,1,0,0,0,130,131,5,23,0,0,131,133,5,15,0,0,132,134,3,30,15,0,
  	133,132,1,0,0,0,133,134,1,0,0,0,134,135,1,0,0,0,135,136,5,16,0,0,136,
  	29,1,0,0,0,137,142,3,20,10,0,138,139,5,19,0,0,139,141,3,20,10,0,140,138,
  	1,0,0,0,141,144,1,0,0,0,142,140,1,0,0,0,142,143,1,0,0,0,143,147,1,0,0,
  	0,144,142,1,0,0,0,145,147,5,5,0,0,146,137,1,0,0,0,146,145,1,0,0,0,147,
  	31,1,0,0,0,148,149,5,3,0,0,149,150,5,15,0,0,150,151,3,20,10,0,151,152,
  	5,16,0,0,152,155,3,18,9,0,153,154,5,4,0,0,154,156,3,18,9,0,155,153,1,
  	0,0,0,155,156,1,0,0,0,156,33,1,0,0,0,15,37,39,48,68,72,83,95,103,111,
  	119,128,133,142,146,155
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  zasparserParserStaticData = std::move(staticData);
}

}

ZasParser::ZasParser(TokenStream *input) : ZasParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

ZasParser::ZasParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  ZasParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *zasparserParserStaticData->atn, zasparserParserStaticData->decisionToDFA, zasparserParserStaticData->sharedContextCache, options);
}

ZasParser::~ZasParser() {
  delete _interpreter;
}

const atn::ATN& ZasParser::getATN() const {
  return *zasparserParserStaticData->atn;
}

std::string ZasParser::getGrammarFileName() const {
  return "ZasParser.g4";
}

const std::vector<std::string>& ZasParser::getRuleNames() const {
  return zasparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& ZasParser::getVocabulary() const {
  return zasparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView ZasParser::getSerializedATN() const {
  return zasparserParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

ZasParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZasParser::ProgramContext::EOF() {
  return getToken(ZasParser::EOF, 0);
}

std::vector<ZasParser::StatementContext *> ZasParser::ProgramContext::statement() {
  return getRuleContexts<ZasParser::StatementContext>();
}

ZasParser::StatementContext* ZasParser::ProgramContext::statement(size_t i) {
  return getRuleContext<ZasParser::StatementContext>(i);
}

std::vector<ZasParser::DisplayStatementContext *> ZasParser::ProgramContext::displayStatement() {
  return getRuleContexts<ZasParser::DisplayStatementContext>();
}

ZasParser::DisplayStatementContext* ZasParser::ProgramContext::displayStatement(size_t i) {
  return getRuleContext<ZasParser::DisplayStatementContext>(i);
}

std::vector<ZasParser::FunctionDefinitionContext *> ZasParser::ProgramContext::functionDefinition() {
  return getRuleContexts<ZasParser::FunctionDefinitionContext>();
}

ZasParser::FunctionDefinitionContext* ZasParser::ProgramContext::functionDefinition(size_t i) {
  return getRuleContext<ZasParser::FunctionDefinitionContext>(i);
}


size_t ZasParser::ProgramContext::getRuleIndex() const {
  return ZasParser::RuleProgram;
}

void ZasParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void ZasParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

ZasParser::ProgramContext* ZasParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, ZasParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12615690) != 0)) {
      setState(37);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(34);
        statement();
        break;
      }

      case 2: {
        setState(35);
        displayStatement();
        break;
      }

      case 3: {
        setState(36);
        functionDefinition();
        break;
      }

      default:
        break;
      }
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(42);
    match(ZasParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

ZasParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ZasParser::ExpressionStatementContext* ZasParser::StatementContext::expressionStatement() {
  return getRuleContext<ZasParser::ExpressionStatementContext>(0);
}

ZasParser::VariableDeclarationContext* ZasParser::StatementContext::variableDeclaration() {
  return getRuleContext<ZasParser::VariableDeclarationContext>(0);
}

ZasParser::IfStatementContext* ZasParser::StatementContext::ifStatement() {
  return getRuleContext<ZasParser::IfStatementContext>(0);
}

ZasParser::DisplayStatementContext* ZasParser::StatementContext::displayStatement() {
  return getRuleContext<ZasParser::DisplayStatementContext>(0);
}


size_t ZasParser::StatementContext::getRuleIndex() const {
  return ZasParser::RuleStatement;
}

void ZasParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void ZasParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

ZasParser::StatementContext* ZasParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, ZasParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(48);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(44);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(45);
      variableDeclaration();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(46);
      ifStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(47);
      displayStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DisplayStatementContext ------------------------------------------------------------------

ZasParser::DisplayStatementContext::DisplayStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZasParser::DisplayStatementContext::IDENTIFIER() {
  return getToken(ZasParser::IDENTIFIER, 0);
}

tree::TerminalNode* ZasParser::DisplayStatementContext::LPAREN() {
  return getToken(ZasParser::LPAREN, 0);
}

tree::TerminalNode* ZasParser::DisplayStatementContext::STRING() {
  return getToken(ZasParser::STRING, 0);
}

tree::TerminalNode* ZasParser::DisplayStatementContext::RPAREN() {
  return getToken(ZasParser::RPAREN, 0);
}

tree::TerminalNode* ZasParser::DisplayStatementContext::SEMICOLON() {
  return getToken(ZasParser::SEMICOLON, 0);
}


size_t ZasParser::DisplayStatementContext::getRuleIndex() const {
  return ZasParser::RuleDisplayStatement;
}

void ZasParser::DisplayStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDisplayStatement(this);
}

void ZasParser::DisplayStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDisplayStatement(this);
}

ZasParser::DisplayStatementContext* ZasParser::displayStatement() {
  DisplayStatementContext *_localctx = _tracker.createInstance<DisplayStatementContext>(_ctx, getState());
  enterRule(_localctx, 4, ZasParser::RuleDisplayStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(50);
    match(ZasParser::IDENTIFIER);
    setState(51);
    match(ZasParser::LPAREN);
    setState(52);
    match(ZasParser::STRING);
    setState(53);
    match(ZasParser::RPAREN);
    setState(54);
    match(ZasParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

ZasParser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

ZasParser::ExpressionContext* ZasParser::ExpressionStatementContext::expression() {
  return getRuleContext<ZasParser::ExpressionContext>(0);
}

tree::TerminalNode* ZasParser::ExpressionStatementContext::SEMICOLON() {
  return getToken(ZasParser::SEMICOLON, 0);
}


size_t ZasParser::ExpressionStatementContext::getRuleIndex() const {
  return ZasParser::RuleExpressionStatement;
}

void ZasParser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void ZasParser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

ZasParser::ExpressionStatementContext* ZasParser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 6, ZasParser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    expression();
    setState(57);
    match(ZasParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VariableDeclarationContext ------------------------------------------------------------------

ZasParser::VariableDeclarationContext::VariableDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZasParser::VariableDeclarationContext::IDENTIFIER() {
  return getToken(ZasParser::IDENTIFIER, 0);
}

tree::TerminalNode* ZasParser::VariableDeclarationContext::ASSIGN() {
  return getToken(ZasParser::ASSIGN, 0);
}

ZasParser::ExpressionContext* ZasParser::VariableDeclarationContext::expression() {
  return getRuleContext<ZasParser::ExpressionContext>(0);
}

tree::TerminalNode* ZasParser::VariableDeclarationContext::SEMICOLON() {
  return getToken(ZasParser::SEMICOLON, 0);
}


size_t ZasParser::VariableDeclarationContext::getRuleIndex() const {
  return ZasParser::RuleVariableDeclaration;
}

void ZasParser::VariableDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVariableDeclaration(this);
}

void ZasParser::VariableDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVariableDeclaration(this);
}

ZasParser::VariableDeclarationContext* ZasParser::variableDeclaration() {
  VariableDeclarationContext *_localctx = _tracker.createInstance<VariableDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 8, ZasParser::RuleVariableDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59);
    match(ZasParser::IDENTIFIER);
    setState(60);
    match(ZasParser::ASSIGN);
    setState(61);
    expression();
    setState(62);
    match(ZasParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionDefinitionContext ------------------------------------------------------------------

ZasParser::FunctionDefinitionContext::FunctionDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZasParser::FunctionDefinitionContext::FUN() {
  return getToken(ZasParser::FUN, 0);
}

tree::TerminalNode* ZasParser::FunctionDefinitionContext::IDENTIFIER() {
  return getToken(ZasParser::IDENTIFIER, 0);
}

tree::TerminalNode* ZasParser::FunctionDefinitionContext::LPAREN() {
  return getToken(ZasParser::LPAREN, 0);
}

tree::TerminalNode* ZasParser::FunctionDefinitionContext::RPAREN() {
  return getToken(ZasParser::RPAREN, 0);
}

tree::TerminalNode* ZasParser::FunctionDefinitionContext::LBRACE() {
  return getToken(ZasParser::LBRACE, 0);
}

ZasParser::BlockContext* ZasParser::FunctionDefinitionContext::block() {
  return getRuleContext<ZasParser::BlockContext>(0);
}

tree::TerminalNode* ZasParser::FunctionDefinitionContext::RBRACE() {
  return getToken(ZasParser::RBRACE, 0);
}

ZasParser::ParameterListContext* ZasParser::FunctionDefinitionContext::parameterList() {
  return getRuleContext<ZasParser::ParameterListContext>(0);
}

ZasParser::TypeAnnotationContext* ZasParser::FunctionDefinitionContext::typeAnnotation() {
  return getRuleContext<ZasParser::TypeAnnotationContext>(0);
}


size_t ZasParser::FunctionDefinitionContext::getRuleIndex() const {
  return ZasParser::RuleFunctionDefinition;
}

void ZasParser::FunctionDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionDefinition(this);
}

void ZasParser::FunctionDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionDefinition(this);
}

ZasParser::FunctionDefinitionContext* ZasParser::functionDefinition() {
  FunctionDefinitionContext *_localctx = _tracker.createInstance<FunctionDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 10, ZasParser::RuleFunctionDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(64);
    match(ZasParser::FUN);
    setState(65);
    match(ZasParser::IDENTIFIER);
    setState(66);
    match(ZasParser::LPAREN);
    setState(68);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ZasParser::IDENTIFIER) {
      setState(67);
      parameterList();
    }
    setState(70);
    match(ZasParser::RPAREN);
    setState(72);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == ZasParser::COLON) {
      setState(71);
      typeAnnotation();
    }
    setState(74);
    match(ZasParser::LBRACE);
    setState(75);
    block();
    setState(76);
    match(ZasParser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

ZasParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ZasParser::ParameterContext *> ZasParser::ParameterListContext::parameter() {
  return getRuleContexts<ZasParser::ParameterContext>();
}

ZasParser::ParameterContext* ZasParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<ZasParser::ParameterContext>(i);
}

std::vector<tree::TerminalNode *> ZasParser::ParameterListContext::COMMA() {
  return getTokens(ZasParser::COMMA);
}

tree::TerminalNode* ZasParser::ParameterListContext::COMMA(size_t i) {
  return getToken(ZasParser::COMMA, i);
}


size_t ZasParser::ParameterListContext::getRuleIndex() const {
  return ZasParser::RuleParameterList;
}

void ZasParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void ZasParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}

ZasParser::ParameterListContext* ZasParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 12, ZasParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    parameter();
    setState(83);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ZasParser::COMMA) {
      setState(79);
      match(ZasParser::COMMA);
      setState(80);
      parameter();
      setState(85);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

ZasParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZasParser::ParameterContext::IDENTIFIER() {
  return getToken(ZasParser::IDENTIFIER, 0);
}

ZasParser::TypeAnnotationContext* ZasParser::ParameterContext::typeAnnotation() {
  return getRuleContext<ZasParser::TypeAnnotationContext>(0);
}


size_t ZasParser::ParameterContext::getRuleIndex() const {
  return ZasParser::RuleParameter;
}

void ZasParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void ZasParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}

ZasParser::ParameterContext* ZasParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 14, ZasParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(86);
    match(ZasParser::IDENTIFIER);
    setState(87);
    typeAnnotation();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeAnnotationContext ------------------------------------------------------------------

ZasParser::TypeAnnotationContext::TypeAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZasParser::TypeAnnotationContext::COLON() {
  return getToken(ZasParser::COLON, 0);
}

tree::TerminalNode* ZasParser::TypeAnnotationContext::INT() {
  return getToken(ZasParser::INT, 0);
}

tree::TerminalNode* ZasParser::TypeAnnotationContext::FLOAT() {
  return getToken(ZasParser::FLOAT, 0);
}


size_t ZasParser::TypeAnnotationContext::getRuleIndex() const {
  return ZasParser::RuleTypeAnnotation;
}

void ZasParser::TypeAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeAnnotation(this);
}

void ZasParser::TypeAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeAnnotation(this);
}

ZasParser::TypeAnnotationContext* ZasParser::typeAnnotation() {
  TypeAnnotationContext *_localctx = _tracker.createInstance<TypeAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 16, ZasParser::RuleTypeAnnotation);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(89);
    match(ZasParser::COLON);
    setState(90);
    _la = _input->LA(1);
    if (!(_la == ZasParser::INT

    || _la == ZasParser::FLOAT)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

ZasParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ZasParser::StatementContext *> ZasParser::BlockContext::statement() {
  return getRuleContexts<ZasParser::StatementContext>();
}

ZasParser::StatementContext* ZasParser::BlockContext::statement(size_t i) {
  return getRuleContext<ZasParser::StatementContext>(i);
}


size_t ZasParser::BlockContext::getRuleIndex() const {
  return ZasParser::RuleBlock;
}

void ZasParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void ZasParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

ZasParser::BlockContext* ZasParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 18, ZasParser::RuleBlock);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(95);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(92);
        statement(); 
      }
      setState(97);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

ZasParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ZasParser::ComparisonContext *> ZasParser::ExpressionContext::comparison() {
  return getRuleContexts<ZasParser::ComparisonContext>();
}

ZasParser::ComparisonContext* ZasParser::ExpressionContext::comparison(size_t i) {
  return getRuleContext<ZasParser::ComparisonContext>(i);
}

std::vector<tree::TerminalNode *> ZasParser::ExpressionContext::PLUS() {
  return getTokens(ZasParser::PLUS);
}

tree::TerminalNode* ZasParser::ExpressionContext::PLUS(size_t i) {
  return getToken(ZasParser::PLUS, i);
}

std::vector<tree::TerminalNode *> ZasParser::ExpressionContext::MINUS() {
  return getTokens(ZasParser::MINUS);
}

tree::TerminalNode* ZasParser::ExpressionContext::MINUS(size_t i) {
  return getToken(ZasParser::MINUS, i);
}


size_t ZasParser::ExpressionContext::getRuleIndex() const {
  return ZasParser::RuleExpression;
}

void ZasParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void ZasParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

ZasParser::ExpressionContext* ZasParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 20, ZasParser::RuleExpression);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    comparison();
    setState(103);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ZasParser::PLUS

    || _la == ZasParser::MINUS) {
      setState(99);
      _la = _input->LA(1);
      if (!(_la == ZasParser::PLUS

      || _la == ZasParser::MINUS)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(100);
      comparison();
      setState(105);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonContext ------------------------------------------------------------------

ZasParser::ComparisonContext::ComparisonContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ZasParser::TermContext *> ZasParser::ComparisonContext::term() {
  return getRuleContexts<ZasParser::TermContext>();
}

ZasParser::TermContext* ZasParser::ComparisonContext::term(size_t i) {
  return getRuleContext<ZasParser::TermContext>(i);
}

std::vector<tree::TerminalNode *> ZasParser::ComparisonContext::LT() {
  return getTokens(ZasParser::LT);
}

tree::TerminalNode* ZasParser::ComparisonContext::LT(size_t i) {
  return getToken(ZasParser::LT, i);
}

std::vector<tree::TerminalNode *> ZasParser::ComparisonContext::GT() {
  return getTokens(ZasParser::GT);
}

tree::TerminalNode* ZasParser::ComparisonContext::GT(size_t i) {
  return getToken(ZasParser::GT, i);
}


size_t ZasParser::ComparisonContext::getRuleIndex() const {
  return ZasParser::RuleComparison;
}

void ZasParser::ComparisonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparison(this);
}

void ZasParser::ComparisonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparison(this);
}

ZasParser::ComparisonContext* ZasParser::comparison() {
  ComparisonContext *_localctx = _tracker.createInstance<ComparisonContext>(_ctx, getState());
  enterRule(_localctx, 22, ZasParser::RuleComparison);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(106);
    term();
    setState(111);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ZasParser::LT

    || _la == ZasParser::GT) {
      setState(107);
      _la = _input->LA(1);
      if (!(_la == ZasParser::LT

      || _la == ZasParser::GT)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(108);
      term();
      setState(113);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

ZasParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ZasParser::FactorContext *> ZasParser::TermContext::factor() {
  return getRuleContexts<ZasParser::FactorContext>();
}

ZasParser::FactorContext* ZasParser::TermContext::factor(size_t i) {
  return getRuleContext<ZasParser::FactorContext>(i);
}

std::vector<tree::TerminalNode *> ZasParser::TermContext::MUL() {
  return getTokens(ZasParser::MUL);
}

tree::TerminalNode* ZasParser::TermContext::MUL(size_t i) {
  return getToken(ZasParser::MUL, i);
}

std::vector<tree::TerminalNode *> ZasParser::TermContext::DIV() {
  return getTokens(ZasParser::DIV);
}

tree::TerminalNode* ZasParser::TermContext::DIV(size_t i) {
  return getToken(ZasParser::DIV, i);
}


size_t ZasParser::TermContext::getRuleIndex() const {
  return ZasParser::RuleTerm;
}

void ZasParser::TermContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTerm(this);
}

void ZasParser::TermContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTerm(this);
}

ZasParser::TermContext* ZasParser::term() {
  TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, getState());
  enterRule(_localctx, 24, ZasParser::RuleTerm);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(114);
    factor();
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == ZasParser::MUL

    || _la == ZasParser::DIV) {
      setState(115);
      _la = _input->LA(1);
      if (!(_la == ZasParser::MUL

      || _la == ZasParser::DIV)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(116);
      factor();
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FactorContext ------------------------------------------------------------------

ZasParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZasParser::FactorContext::NUMBER() {
  return getToken(ZasParser::NUMBER, 0);
}

tree::TerminalNode* ZasParser::FactorContext::IDENTIFIER() {
  return getToken(ZasParser::IDENTIFIER, 0);
}

tree::TerminalNode* ZasParser::FactorContext::LPAREN() {
  return getToken(ZasParser::LPAREN, 0);
}

ZasParser::ExpressionContext* ZasParser::FactorContext::expression() {
  return getRuleContext<ZasParser::ExpressionContext>(0);
}

tree::TerminalNode* ZasParser::FactorContext::RPAREN() {
  return getToken(ZasParser::RPAREN, 0);
}


size_t ZasParser::FactorContext::getRuleIndex() const {
  return ZasParser::RuleFactor;
}

void ZasParser::FactorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFactor(this);
}

void ZasParser::FactorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFactor(this);
}

ZasParser::FactorContext* ZasParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 26, ZasParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(128);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ZasParser::NUMBER: {
        enterOuterAlt(_localctx, 1);
        setState(122);
        match(ZasParser::NUMBER);
        break;
      }

      case ZasParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 2);
        setState(123);
        match(ZasParser::IDENTIFIER);
        break;
      }

      case ZasParser::LPAREN: {
        enterOuterAlt(_localctx, 3);
        setState(124);
        match(ZasParser::LPAREN);
        setState(125);
        expression();
        setState(126);
        match(ZasParser::RPAREN);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

ZasParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZasParser::FunctionCallContext::IDENTIFIER() {
  return getToken(ZasParser::IDENTIFIER, 0);
}

tree::TerminalNode* ZasParser::FunctionCallContext::LPAREN() {
  return getToken(ZasParser::LPAREN, 0);
}

tree::TerminalNode* ZasParser::FunctionCallContext::RPAREN() {
  return getToken(ZasParser::RPAREN, 0);
}

ZasParser::ArgumentListContext* ZasParser::FunctionCallContext::argumentList() {
  return getRuleContext<ZasParser::ArgumentListContext>(0);
}


size_t ZasParser::FunctionCallContext::getRuleIndex() const {
  return ZasParser::RuleFunctionCall;
}

void ZasParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void ZasParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}

ZasParser::FunctionCallContext* ZasParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 28, ZasParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(130);
    match(ZasParser::IDENTIFIER);
    setState(131);
    match(ZasParser::LPAREN);
    setState(133);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 12615712) != 0)) {
      setState(132);
      argumentList();
    }
    setState(135);
    match(ZasParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

ZasParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ZasParser::ExpressionContext *> ZasParser::ArgumentListContext::expression() {
  return getRuleContexts<ZasParser::ExpressionContext>();
}

ZasParser::ExpressionContext* ZasParser::ArgumentListContext::expression(size_t i) {
  return getRuleContext<ZasParser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> ZasParser::ArgumentListContext::COMMA() {
  return getTokens(ZasParser::COMMA);
}

tree::TerminalNode* ZasParser::ArgumentListContext::COMMA(size_t i) {
  return getToken(ZasParser::COMMA, i);
}

tree::TerminalNode* ZasParser::ArgumentListContext::STRING() {
  return getToken(ZasParser::STRING, 0);
}


size_t ZasParser::ArgumentListContext::getRuleIndex() const {
  return ZasParser::RuleArgumentList;
}

void ZasParser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void ZasParser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}

ZasParser::ArgumentListContext* ZasParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 30, ZasParser::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(146);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ZasParser::LPAREN:
      case ZasParser::NUMBER:
      case ZasParser::IDENTIFIER: {
        enterOuterAlt(_localctx, 1);
        setState(137);
        expression();
        setState(142);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ZasParser::COMMA) {
          setState(138);
          match(ZasParser::COMMA);
          setState(139);
          expression();
          setState(144);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case ZasParser::STRING: {
        enterOuterAlt(_localctx, 2);
        setState(145);
        match(ZasParser::STRING);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfStatementContext ------------------------------------------------------------------

ZasParser::IfStatementContext::IfStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* ZasParser::IfStatementContext::IF() {
  return getToken(ZasParser::IF, 0);
}

tree::TerminalNode* ZasParser::IfStatementContext::LPAREN() {
  return getToken(ZasParser::LPAREN, 0);
}

ZasParser::ExpressionContext* ZasParser::IfStatementContext::expression() {
  return getRuleContext<ZasParser::ExpressionContext>(0);
}

tree::TerminalNode* ZasParser::IfStatementContext::RPAREN() {
  return getToken(ZasParser::RPAREN, 0);
}

std::vector<ZasParser::BlockContext *> ZasParser::IfStatementContext::block() {
  return getRuleContexts<ZasParser::BlockContext>();
}

ZasParser::BlockContext* ZasParser::IfStatementContext::block(size_t i) {
  return getRuleContext<ZasParser::BlockContext>(i);
}

tree::TerminalNode* ZasParser::IfStatementContext::ELSE() {
  return getToken(ZasParser::ELSE, 0);
}


size_t ZasParser::IfStatementContext::getRuleIndex() const {
  return ZasParser::RuleIfStatement;
}

void ZasParser::IfStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIfStatement(this);
}

void ZasParser::IfStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ZasParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIfStatement(this);
}

ZasParser::IfStatementContext* ZasParser::ifStatement() {
  IfStatementContext *_localctx = _tracker.createInstance<IfStatementContext>(_ctx, getState());
  enterRule(_localctx, 32, ZasParser::RuleIfStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    match(ZasParser::IF);
    setState(149);
    match(ZasParser::LPAREN);
    setState(150);
    expression();
    setState(151);
    match(ZasParser::RPAREN);
    setState(152);
    block();
    setState(155);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      setState(153);
      match(ZasParser::ELSE);
      setState(154);
      block();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void ZasParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  zasparserParserInitialize();
#else
  ::antlr4::internal::call_once(zasparserParserOnceFlag, zasparserParserInitialize);
#endif
}
