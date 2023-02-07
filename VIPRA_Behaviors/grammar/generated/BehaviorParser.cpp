
// Generated from Behavior.g4 by ANTLR 4.7.2


#include "BehaviorVisitor.h"

#include "BehaviorParser.h"


using namespace antlrcpp;
using namespace antlr4;

BehaviorParser::BehaviorParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

BehaviorParser::~BehaviorParser() {
  delete _interpreter;
}

std::string BehaviorParser::getGrammarFileName() const {
  return "Behavior.g4";
}

const std::vector<std::string>& BehaviorParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& BehaviorParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

BehaviorParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BehaviorParser::StatementContext *> BehaviorParser::ProgramContext::statement() {
  return getRuleContexts<BehaviorParser::StatementContext>();
}

BehaviorParser::StatementContext* BehaviorParser::ProgramContext::statement(size_t i) {
  return getRuleContext<BehaviorParser::StatementContext>(i);
}


size_t BehaviorParser::ProgramContext::getRuleIndex() const {
  return BehaviorParser::RuleProgram;
}

antlrcpp::Any BehaviorParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::ProgramContext* BehaviorParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, BehaviorParser::RuleProgram);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(59); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(58);
      statement();
      setState(61); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << BehaviorParser::T__0)
      | (1ULL << BehaviorParser::T__11)
      | (1ULL << BehaviorParser::T__13)
      | (1ULL << BehaviorParser::T__16)
      | (1ULL << BehaviorParser::T__24)
      | (1ULL << BehaviorParser::T__25)
      | (1ULL << BehaviorParser::T__26)
      | (1ULL << BehaviorParser::AN)
      | (1ULL << BehaviorParser::PARAMETERS))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

BehaviorParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BehaviorParser::DeclarationContext* BehaviorParser::StatementContext::declaration() {
  return getRuleContext<BehaviorParser::DeclarationContext>(0);
}

BehaviorParser::Ped_SelectorContext* BehaviorParser::StatementContext::ped_Selector() {
  return getRuleContext<BehaviorParser::Ped_SelectorContext>(0);
}

BehaviorParser::ActionContext* BehaviorParser::StatementContext::action() {
  return getRuleContext<BehaviorParser::ActionContext>(0);
}

BehaviorParser::Transition_EnvironmentContext* BehaviorParser::StatementContext::transition_Environment() {
  return getRuleContext<BehaviorParser::Transition_EnvironmentContext>(0);
}

BehaviorParser::Transition_PedestrianContext* BehaviorParser::StatementContext::transition_Pedestrian() {
  return getRuleContext<BehaviorParser::Transition_PedestrianContext>(0);
}


size_t BehaviorParser::StatementContext::getRuleIndex() const {
  return BehaviorParser::RuleStatement;
}

antlrcpp::Any BehaviorParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::StatementContext* BehaviorParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, BehaviorParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(68);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(63);
      declaration();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(64);
      ped_Selector();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(65);
      action();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(66);
      transition_Environment();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(67);
      transition_Pedestrian();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Transition_EnvironmentContext ------------------------------------------------------------------

BehaviorParser::Transition_EnvironmentContext::Transition_EnvironmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BehaviorParser::State_SetContext* BehaviorParser::Transition_EnvironmentContext::state_Set() {
  return getRuleContext<BehaviorParser::State_SetContext>(0);
}

BehaviorParser::ConditionContext* BehaviorParser::Transition_EnvironmentContext::condition() {
  return getRuleContext<BehaviorParser::ConditionContext>(0);
}


size_t BehaviorParser::Transition_EnvironmentContext::getRuleIndex() const {
  return BehaviorParser::RuleTransition_Environment;
}

antlrcpp::Any BehaviorParser::Transition_EnvironmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitTransition_Environment(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Transition_EnvironmentContext* BehaviorParser::transition_Environment() {
  Transition_EnvironmentContext *_localctx = _tracker.createInstance<Transition_EnvironmentContext>(_ctx, getState());
  enterRule(_localctx, 4, BehaviorParser::RuleTransition_Environment);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(70);
    match(BehaviorParser::T__0);
    setState(71);
    state_Set();
    setState(72);
    condition();
    setState(73);
    match(BehaviorParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Transition_PedestrianContext ------------------------------------------------------------------

BehaviorParser::Transition_PedestrianContext::Transition_PedestrianContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Transition_PedestrianContext::AN() {
  return getToken(BehaviorParser::AN, 0);
}

tree::TerminalNode* BehaviorParser::Transition_PedestrianContext::ID() {
  return getToken(BehaviorParser::ID, 0);
}

BehaviorParser::State_SetContext* BehaviorParser::Transition_PedestrianContext::state_Set() {
  return getRuleContext<BehaviorParser::State_SetContext>(0);
}

BehaviorParser::ConditionContext* BehaviorParser::Transition_PedestrianContext::condition() {
  return getRuleContext<BehaviorParser::ConditionContext>(0);
}


size_t BehaviorParser::Transition_PedestrianContext::getRuleIndex() const {
  return BehaviorParser::RuleTransition_Pedestrian;
}

antlrcpp::Any BehaviorParser::Transition_PedestrianContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitTransition_Pedestrian(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Transition_PedestrianContext* BehaviorParser::transition_Pedestrian() {
  Transition_PedestrianContext *_localctx = _tracker.createInstance<Transition_PedestrianContext>(_ctx, getState());
  enterRule(_localctx, 6, BehaviorParser::RuleTransition_Pedestrian);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(75);
    match(BehaviorParser::AN);
    setState(76);
    match(BehaviorParser::ID);
    setState(77);
    match(BehaviorParser::T__2);
    setState(78);
    state_Set();
    setState(79);
    condition();
    setState(80);
    match(BehaviorParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConditionContext ------------------------------------------------------------------

BehaviorParser::ConditionContext::ConditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BehaviorParser::Sub_conditionContext* BehaviorParser::ConditionContext::sub_condition() {
  return getRuleContext<BehaviorParser::Sub_conditionContext>(0);
}

tree::TerminalNode* BehaviorParser::ConditionContext::ANDOR() {
  return getToken(BehaviorParser::ANDOR, 0);
}

BehaviorParser::ConditionContext* BehaviorParser::ConditionContext::condition() {
  return getRuleContext<BehaviorParser::ConditionContext>(0);
}


size_t BehaviorParser::ConditionContext::getRuleIndex() const {
  return BehaviorParser::RuleCondition;
}

antlrcpp::Any BehaviorParser::ConditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitCondition(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::ConditionContext* BehaviorParser::condition() {
  ConditionContext *_localctx = _tracker.createInstance<ConditionContext>(_ctx, getState());
  enterRule(_localctx, 8, BehaviorParser::RuleCondition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(87);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(82);
      sub_condition();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(83);
      sub_condition();
      setState(84);
      match(BehaviorParser::ANDOR);
      setState(85);
      condition();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sub_conditionContext ------------------------------------------------------------------

BehaviorParser::Sub_conditionContext::Sub_conditionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BehaviorParser::Condition_StateContext* BehaviorParser::Sub_conditionContext::condition_State() {
  return getRuleContext<BehaviorParser::Condition_StateContext>(0);
}

BehaviorParser::Condition_Time_ElapsedContext* BehaviorParser::Sub_conditionContext::condition_Time_Elapsed() {
  return getRuleContext<BehaviorParser::Condition_Time_ElapsedContext>(0);
}

BehaviorParser::Condition_ExistanceContext* BehaviorParser::Sub_conditionContext::condition_Existance() {
  return getRuleContext<BehaviorParser::Condition_ExistanceContext>(0);
}


size_t BehaviorParser::Sub_conditionContext::getRuleIndex() const {
  return BehaviorParser::RuleSub_condition;
}

antlrcpp::Any BehaviorParser::Sub_conditionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitSub_condition(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Sub_conditionContext* BehaviorParser::sub_condition() {
  Sub_conditionContext *_localctx = _tracker.createInstance<Sub_conditionContext>(_ctx, getState());
  enterRule(_localctx, 10, BehaviorParser::RuleSub_condition);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(93);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(89);
      condition_State();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(90);
      condition_Time_Elapsed();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(91);
      condition_Existance();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);

      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_ExistanceContext ------------------------------------------------------------------

BehaviorParser::Condition_ExistanceContext::Condition_ExistanceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Condition_ExistanceContext::GIVEN() {
  return getToken(BehaviorParser::GIVEN, 0);
}

tree::TerminalNode* BehaviorParser::Condition_ExistanceContext::AN() {
  return getToken(BehaviorParser::AN, 0);
}

tree::TerminalNode* BehaviorParser::Condition_ExistanceContext::ID() {
  return getToken(BehaviorParser::ID, 0);
}

tree::TerminalNode* BehaviorParser::Condition_ExistanceContext::Direction() {
  return getToken(BehaviorParser::Direction, 0);
}

BehaviorParser::Condition_Others_StateContext* BehaviorParser::Condition_ExistanceContext::condition_Others_State() {
  return getRuleContext<BehaviorParser::Condition_Others_StateContext>(0);
}


size_t BehaviorParser::Condition_ExistanceContext::getRuleIndex() const {
  return BehaviorParser::RuleCondition_Existance;
}

antlrcpp::Any BehaviorParser::Condition_ExistanceContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitCondition_Existance(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Condition_ExistanceContext* BehaviorParser::condition_Existance() {
  Condition_ExistanceContext *_localctx = _tracker.createInstance<Condition_ExistanceContext>(_ctx, getState());
  enterRule(_localctx, 12, BehaviorParser::RuleCondition_Existance);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(106);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(95);
      match(BehaviorParser::GIVEN);
      setState(96);
      match(BehaviorParser::T__3);
      setState(97);
      match(BehaviorParser::AN);
      setState(98);
      match(BehaviorParser::ID);
      setState(99);
      match(BehaviorParser::Direction);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(100);
      match(BehaviorParser::GIVEN);
      setState(101);
      match(BehaviorParser::T__3);
      setState(102);
      match(BehaviorParser::AN);
      setState(103);
      match(BehaviorParser::ID);
      setState(104);
      match(BehaviorParser::Direction);
      setState(105);
      condition_Others_State();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_StateContext ------------------------------------------------------------------

BehaviorParser::Condition_StateContext::Condition_StateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Condition_StateContext::GIVEN() {
  return getToken(BehaviorParser::GIVEN, 0);
}

BehaviorParser::ObjectContext* BehaviorParser::Condition_StateContext::object() {
  return getRuleContext<BehaviorParser::ObjectContext>(0);
}

BehaviorParser::State_CheckContext* BehaviorParser::Condition_StateContext::state_Check() {
  return getRuleContext<BehaviorParser::State_CheckContext>(0);
}


size_t BehaviorParser::Condition_StateContext::getRuleIndex() const {
  return BehaviorParser::RuleCondition_State;
}

antlrcpp::Any BehaviorParser::Condition_StateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitCondition_State(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Condition_StateContext* BehaviorParser::condition_State() {
  Condition_StateContext *_localctx = _tracker.createInstance<Condition_StateContext>(_ctx, getState());
  enterRule(_localctx, 14, BehaviorParser::RuleCondition_State);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(108);
    match(BehaviorParser::GIVEN);
    setState(109);
    object();
    setState(110);
    state_Check();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_Others_StateContext ------------------------------------------------------------------

BehaviorParser::Condition_Others_StateContext::Condition_Others_StateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BehaviorParser::State_CheckContext* BehaviorParser::Condition_Others_StateContext::state_Check() {
  return getRuleContext<BehaviorParser::State_CheckContext>(0);
}


size_t BehaviorParser::Condition_Others_StateContext::getRuleIndex() const {
  return BehaviorParser::RuleCondition_Others_State;
}

antlrcpp::Any BehaviorParser::Condition_Others_StateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitCondition_Others_State(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Condition_Others_StateContext* BehaviorParser::condition_Others_State() {
  Condition_Others_StateContext *_localctx = _tracker.createInstance<Condition_Others_StateContext>(_ctx, getState());
  enterRule(_localctx, 16, BehaviorParser::RuleCondition_Others_State);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    match(BehaviorParser::T__4);
    setState(113);
    state_Check();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Condition_Time_ElapsedContext ------------------------------------------------------------------

BehaviorParser::Condition_Time_ElapsedContext::Condition_Time_ElapsedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Condition_Time_ElapsedContext::NUMBER() {
  return getToken(BehaviorParser::NUMBER, 0);
}


size_t BehaviorParser::Condition_Time_ElapsedContext::getRuleIndex() const {
  return BehaviorParser::RuleCondition_Time_Elapsed;
}

antlrcpp::Any BehaviorParser::Condition_Time_ElapsedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitCondition_Time_Elapsed(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Condition_Time_ElapsedContext* BehaviorParser::condition_Time_Elapsed() {
  Condition_Time_ElapsedContext *_localctx = _tracker.createInstance<Condition_Time_ElapsedContext>(_ctx, getState());
  enterRule(_localctx, 18, BehaviorParser::RuleCondition_Time_Elapsed);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(BehaviorParser::T__5);
    setState(116);
    match(BehaviorParser::NUMBER);
    setState(117);
    match(BehaviorParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- State_CheckContext ------------------------------------------------------------------

BehaviorParser::State_CheckContext::State_CheckContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::State_CheckContext::STATE() {
  return getToken(BehaviorParser::STATE, 0);
}


size_t BehaviorParser::State_CheckContext::getRuleIndex() const {
  return BehaviorParser::RuleState_Check;
}

antlrcpp::Any BehaviorParser::State_CheckContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitState_Check(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::State_CheckContext* BehaviorParser::state_Check() {
  State_CheckContext *_localctx = _tracker.createInstance<State_CheckContext>(_ctx, getState());
  enterRule(_localctx, 20, BehaviorParser::RuleState_Check);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(BehaviorParser::T__7);
    setState(120);
    match(BehaviorParser::STATE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- State_SetContext ------------------------------------------------------------------

BehaviorParser::State_SetContext::State_SetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::State_SetContext::STATE() {
  return getToken(BehaviorParser::STATE, 0);
}


size_t BehaviorParser::State_SetContext::getRuleIndex() const {
  return BehaviorParser::RuleState_Set;
}

antlrcpp::Any BehaviorParser::State_SetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitState_Set(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::State_SetContext* BehaviorParser::state_Set() {
  State_SetContext *_localctx = _tracker.createInstance<State_SetContext>(_ctx, getState());
  enterRule(_localctx, 22, BehaviorParser::RuleState_Set);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(BehaviorParser::T__8);
    setState(123);
    match(BehaviorParser::STATE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ObjectContext ------------------------------------------------------------------

BehaviorParser::ObjectContext::ObjectContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BehaviorParser::ObjectContext::getRuleIndex() const {
  return BehaviorParser::RuleObject;
}

antlrcpp::Any BehaviorParser::ObjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitObject(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::ObjectContext* BehaviorParser::object() {
  ObjectContext *_localctx = _tracker.createInstance<ObjectContext>(_ctx, getState());
  enterRule(_localctx, 24, BehaviorParser::RuleObject);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    _la = _input->LA(1);
    if (!(_la == BehaviorParser::T__9

    || _la == BehaviorParser::T__10)) {
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

//----------------- Ped_SelectorContext ------------------------------------------------------------------

BehaviorParser::Ped_SelectorContext::Ped_SelectorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BehaviorParser::Selector_PercentContext* BehaviorParser::Ped_SelectorContext::selector_Percent() {
  return getRuleContext<BehaviorParser::Selector_PercentContext>(0);
}

BehaviorParser::Selector_Exactly_N_RandomContext* BehaviorParser::Ped_SelectorContext::selector_Exactly_N_Random() {
  return getRuleContext<BehaviorParser::Selector_Exactly_N_RandomContext>(0);
}

BehaviorParser::Selector_EveryoneContext* BehaviorParser::Ped_SelectorContext::selector_Everyone() {
  return getRuleContext<BehaviorParser::Selector_EveryoneContext>(0);
}


size_t BehaviorParser::Ped_SelectorContext::getRuleIndex() const {
  return BehaviorParser::RulePed_Selector;
}

antlrcpp::Any BehaviorParser::Ped_SelectorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitPed_Selector(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Ped_SelectorContext* BehaviorParser::ped_Selector() {
  Ped_SelectorContext *_localctx = _tracker.createInstance<Ped_SelectorContext>(_ctx, getState());
  enterRule(_localctx, 26, BehaviorParser::RulePed_Selector);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(130);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BehaviorParser::T__11: {
        enterOuterAlt(_localctx, 1);
        setState(127);
        selector_Percent();
        break;
      }

      case BehaviorParser::T__13: {
        enterOuterAlt(_localctx, 2);
        setState(128);
        selector_Exactly_N_Random();
        break;
      }

      case BehaviorParser::T__16: {
        enterOuterAlt(_localctx, 3);
        setState(129);
        selector_Everyone();
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

//----------------- Selector_PercentContext ------------------------------------------------------------------

BehaviorParser::Selector_PercentContext::Selector_PercentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Selector_PercentContext::NUMBER() {
  return getToken(BehaviorParser::NUMBER, 0);
}

tree::TerminalNode* BehaviorParser::Selector_PercentContext::AN() {
  return getToken(BehaviorParser::AN, 0);
}

tree::TerminalNode* BehaviorParser::Selector_PercentContext::ID() {
  return getToken(BehaviorParser::ID, 0);
}


size_t BehaviorParser::Selector_PercentContext::getRuleIndex() const {
  return BehaviorParser::RuleSelector_Percent;
}

antlrcpp::Any BehaviorParser::Selector_PercentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitSelector_Percent(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Selector_PercentContext* BehaviorParser::selector_Percent() {
  Selector_PercentContext *_localctx = _tracker.createInstance<Selector_PercentContext>(_ctx, getState());
  enterRule(_localctx, 28, BehaviorParser::RuleSelector_Percent);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(132);
    match(BehaviorParser::T__11);
    setState(133);
    match(BehaviorParser::NUMBER);
    setState(134);
    match(BehaviorParser::T__12);
    setState(135);
    match(BehaviorParser::AN);
    setState(136);
    match(BehaviorParser::ID);
    setState(137);
    match(BehaviorParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Selector_Exactly_N_RandomContext ------------------------------------------------------------------

BehaviorParser::Selector_Exactly_N_RandomContext::Selector_Exactly_N_RandomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Selector_Exactly_N_RandomContext::NUMBER() {
  return getToken(BehaviorParser::NUMBER, 0);
}

tree::TerminalNode* BehaviorParser::Selector_Exactly_N_RandomContext::AN() {
  return getToken(BehaviorParser::AN, 0);
}

tree::TerminalNode* BehaviorParser::Selector_Exactly_N_RandomContext::ID() {
  return getToken(BehaviorParser::ID, 0);
}


size_t BehaviorParser::Selector_Exactly_N_RandomContext::getRuleIndex() const {
  return BehaviorParser::RuleSelector_Exactly_N_Random;
}

antlrcpp::Any BehaviorParser::Selector_Exactly_N_RandomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitSelector_Exactly_N_Random(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Selector_Exactly_N_RandomContext* BehaviorParser::selector_Exactly_N_Random() {
  Selector_Exactly_N_RandomContext *_localctx = _tracker.createInstance<Selector_Exactly_N_RandomContext>(_ctx, getState());
  enterRule(_localctx, 30, BehaviorParser::RuleSelector_Exactly_N_Random);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(151);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(139);
      match(BehaviorParser::T__13);
      setState(140);
      match(BehaviorParser::NUMBER);
      setState(141);
      match(BehaviorParser::T__14);
      setState(142);
      match(BehaviorParser::AN);
      setState(143);
      match(BehaviorParser::ID);
      setState(144);
      match(BehaviorParser::T__1);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(145);
      match(BehaviorParser::T__13);
      setState(146);
      match(BehaviorParser::NUMBER);
      setState(147);
      match(BehaviorParser::T__15);
      setState(148);
      match(BehaviorParser::AN);
      setState(149);
      match(BehaviorParser::ID);
      setState(150);
      match(BehaviorParser::T__1);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Selector_EveryoneContext ------------------------------------------------------------------

BehaviorParser::Selector_EveryoneContext::Selector_EveryoneContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Selector_EveryoneContext::AN() {
  return getToken(BehaviorParser::AN, 0);
}

tree::TerminalNode* BehaviorParser::Selector_EveryoneContext::ID() {
  return getToken(BehaviorParser::ID, 0);
}


size_t BehaviorParser::Selector_EveryoneContext::getRuleIndex() const {
  return BehaviorParser::RuleSelector_Everyone;
}

antlrcpp::Any BehaviorParser::Selector_EveryoneContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitSelector_Everyone(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Selector_EveryoneContext* BehaviorParser::selector_Everyone() {
  Selector_EveryoneContext *_localctx = _tracker.createInstance<Selector_EveryoneContext>(_ctx, getState());
  enterRule(_localctx, 32, BehaviorParser::RuleSelector_Everyone);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(153);
    match(BehaviorParser::T__16);
    setState(154);
    match(BehaviorParser::AN);
    setState(155);
    match(BehaviorParser::ID);
    setState(156);
    match(BehaviorParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ActionContext ------------------------------------------------------------------

BehaviorParser::ActionContext::ActionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BehaviorParser::Conditional_actionContext* BehaviorParser::ActionContext::conditional_action() {
  return getRuleContext<BehaviorParser::Conditional_actionContext>(0);
}

BehaviorParser::Un_conditional_actionContext* BehaviorParser::ActionContext::un_conditional_action() {
  return getRuleContext<BehaviorParser::Un_conditional_actionContext>(0);
}


size_t BehaviorParser::ActionContext::getRuleIndex() const {
  return BehaviorParser::RuleAction;
}

antlrcpp::Any BehaviorParser::ActionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitAction(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::ActionContext* BehaviorParser::action() {
  ActionContext *_localctx = _tracker.createInstance<ActionContext>(_ctx, getState());
  enterRule(_localctx, 34, BehaviorParser::RuleAction);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(158);
      conditional_action();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(159);
      un_conditional_action();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Conditional_actionContext ------------------------------------------------------------------

BehaviorParser::Conditional_actionContext::Conditional_actionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Conditional_actionContext::AN() {
  return getToken(BehaviorParser::AN, 0);
}

tree::TerminalNode* BehaviorParser::Conditional_actionContext::ID() {
  return getToken(BehaviorParser::ID, 0);
}

BehaviorParser::Sub_actionContext* BehaviorParser::Conditional_actionContext::sub_action() {
  return getRuleContext<BehaviorParser::Sub_actionContext>(0);
}

BehaviorParser::ConditionContext* BehaviorParser::Conditional_actionContext::condition() {
  return getRuleContext<BehaviorParser::ConditionContext>(0);
}


size_t BehaviorParser::Conditional_actionContext::getRuleIndex() const {
  return BehaviorParser::RuleConditional_action;
}

antlrcpp::Any BehaviorParser::Conditional_actionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitConditional_action(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Conditional_actionContext* BehaviorParser::conditional_action() {
  Conditional_actionContext *_localctx = _tracker.createInstance<Conditional_actionContext>(_ctx, getState());
  enterRule(_localctx, 36, BehaviorParser::RuleConditional_action);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    match(BehaviorParser::AN);
    setState(163);
    match(BehaviorParser::ID);
    setState(164);
    match(BehaviorParser::T__2);
    setState(165);
    sub_action();
    setState(166);
    condition();
    setState(167);
    match(BehaviorParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Un_conditional_actionContext ------------------------------------------------------------------

BehaviorParser::Un_conditional_actionContext::Un_conditional_actionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Un_conditional_actionContext::AN() {
  return getToken(BehaviorParser::AN, 0);
}

tree::TerminalNode* BehaviorParser::Un_conditional_actionContext::ID() {
  return getToken(BehaviorParser::ID, 0);
}

BehaviorParser::Sub_actionContext* BehaviorParser::Un_conditional_actionContext::sub_action() {
  return getRuleContext<BehaviorParser::Sub_actionContext>(0);
}


size_t BehaviorParser::Un_conditional_actionContext::getRuleIndex() const {
  return BehaviorParser::RuleUn_conditional_action;
}

antlrcpp::Any BehaviorParser::Un_conditional_actionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitUn_conditional_action(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Un_conditional_actionContext* BehaviorParser::un_conditional_action() {
  Un_conditional_actionContext *_localctx = _tracker.createInstance<Un_conditional_actionContext>(_ctx, getState());
  enterRule(_localctx, 38, BehaviorParser::RuleUn_conditional_action);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(169);
    match(BehaviorParser::AN);
    setState(170);
    match(BehaviorParser::ID);
    setState(171);
    match(BehaviorParser::T__17);
    setState(172);
    sub_action();
    setState(173);
    match(BehaviorParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Sub_actionContext ------------------------------------------------------------------

BehaviorParser::Sub_actionContext::Sub_actionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<BehaviorParser::Action_atomContext *> BehaviorParser::Sub_actionContext::action_atom() {
  return getRuleContexts<BehaviorParser::Action_atomContext>();
}

BehaviorParser::Action_atomContext* BehaviorParser::Sub_actionContext::action_atom(size_t i) {
  return getRuleContext<BehaviorParser::Action_atomContext>(i);
}


size_t BehaviorParser::Sub_actionContext::getRuleIndex() const {
  return BehaviorParser::RuleSub_action;
}

antlrcpp::Any BehaviorParser::Sub_actionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitSub_action(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Sub_actionContext* BehaviorParser::sub_action() {
  Sub_actionContext *_localctx = _tracker.createInstance<Sub_actionContext>(_ctx, getState());
  enterRule(_localctx, 40, BehaviorParser::RuleSub_action);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(184);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BehaviorParser::T__8:
      case BehaviorParser::T__19:
      case BehaviorParser::T__20:
      case BehaviorParser::ACTION: {
        enterOuterAlt(_localctx, 1);
        setState(175);
        action_atom();
        setState(180);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == BehaviorParser::T__18) {
          setState(176);
          match(BehaviorParser::T__18);
          setState(177);
          action_atom();
          setState(182);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case BehaviorParser::T__1:
      case BehaviorParser::T__5:
      case BehaviorParser::ANDOR:
      case BehaviorParser::GIVEN: {
        enterOuterAlt(_localctx, 2);

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

//----------------- Action_atomContext ------------------------------------------------------------------

BehaviorParser::Action_atomContext::Action_atomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Action_atomContext::ACTION() {
  return getToken(BehaviorParser::ACTION, 0);
}

BehaviorParser::State_SetContext* BehaviorParser::Action_atomContext::state_Set() {
  return getRuleContext<BehaviorParser::State_SetContext>(0);
}

BehaviorParser::Action_StopContext* BehaviorParser::Action_atomContext::action_Stop() {
  return getRuleContext<BehaviorParser::Action_StopContext>(0);
}

BehaviorParser::Action_atom_Percent_Walk_SpeedContext* BehaviorParser::Action_atomContext::action_atom_Percent_Walk_Speed() {
  return getRuleContext<BehaviorParser::Action_atom_Percent_Walk_SpeedContext>(0);
}


size_t BehaviorParser::Action_atomContext::getRuleIndex() const {
  return BehaviorParser::RuleAction_atom;
}

antlrcpp::Any BehaviorParser::Action_atomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitAction_atom(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Action_atomContext* BehaviorParser::action_atom() {
  Action_atomContext *_localctx = _tracker.createInstance<Action_atomContext>(_ctx, getState());
  enterRule(_localctx, 42, BehaviorParser::RuleAction_atom);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(190);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BehaviorParser::ACTION: {
        enterOuterAlt(_localctx, 1);
        setState(186);
        match(BehaviorParser::ACTION);
        break;
      }

      case BehaviorParser::T__8: {
        enterOuterAlt(_localctx, 2);
        setState(187);
        state_Set();
        break;
      }

      case BehaviorParser::T__19: {
        enterOuterAlt(_localctx, 3);
        setState(188);
        action_Stop();
        break;
      }

      case BehaviorParser::T__20: {
        enterOuterAlt(_localctx, 4);
        setState(189);
        action_atom_Percent_Walk_Speed();
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

//----------------- Action_StopContext ------------------------------------------------------------------

BehaviorParser::Action_StopContext::Action_StopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t BehaviorParser::Action_StopContext::getRuleIndex() const {
  return BehaviorParser::RuleAction_Stop;
}

antlrcpp::Any BehaviorParser::Action_StopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitAction_Stop(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Action_StopContext* BehaviorParser::action_Stop() {
  Action_StopContext *_localctx = _tracker.createInstance<Action_StopContext>(_ctx, getState());
  enterRule(_localctx, 44, BehaviorParser::RuleAction_Stop);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(192);
    match(BehaviorParser::T__19);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Action_atom_Percent_Walk_SpeedContext ------------------------------------------------------------------

BehaviorParser::Action_atom_Percent_Walk_SpeedContext::Action_atom_Percent_Walk_SpeedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Action_atom_Percent_Walk_SpeedContext::NUMBER() {
  return getToken(BehaviorParser::NUMBER, 0);
}


size_t BehaviorParser::Action_atom_Percent_Walk_SpeedContext::getRuleIndex() const {
  return BehaviorParser::RuleAction_atom_Percent_Walk_Speed;
}

antlrcpp::Any BehaviorParser::Action_atom_Percent_Walk_SpeedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitAction_atom_Percent_Walk_Speed(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Action_atom_Percent_Walk_SpeedContext* BehaviorParser::action_atom_Percent_Walk_Speed() {
  Action_atom_Percent_Walk_SpeedContext *_localctx = _tracker.createInstance<Action_atom_Percent_Walk_SpeedContext>(_ctx, getState());
  enterRule(_localctx, 46, BehaviorParser::RuleAction_atom_Percent_Walk_Speed);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(194);
    match(BehaviorParser::T__20);
    setState(195);
    match(BehaviorParser::NUMBER);
    setState(196);
    match(BehaviorParser::T__21);
    setState(197);
    _la = _input->LA(1);
    if (!(_la == BehaviorParser::T__22

    || _la == BehaviorParser::T__23)) {
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

//----------------- DeclarationContext ------------------------------------------------------------------

BehaviorParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

BehaviorParser::Decl_PedContext* BehaviorParser::DeclarationContext::decl_Ped() {
  return getRuleContext<BehaviorParser::Decl_PedContext>(0);
}

BehaviorParser::Decl_Ped_StateContext* BehaviorParser::DeclarationContext::decl_Ped_State() {
  return getRuleContext<BehaviorParser::Decl_Ped_StateContext>(0);
}

BehaviorParser::Decl_Env_StateContext* BehaviorParser::DeclarationContext::decl_Env_State() {
  return getRuleContext<BehaviorParser::Decl_Env_StateContext>(0);
}

BehaviorParser::Decl_ParametersContext* BehaviorParser::DeclarationContext::decl_Parameters() {
  return getRuleContext<BehaviorParser::Decl_ParametersContext>(0);
}


size_t BehaviorParser::DeclarationContext::getRuleIndex() const {
  return BehaviorParser::RuleDeclaration;
}

antlrcpp::Any BehaviorParser::DeclarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitDeclaration(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::DeclarationContext* BehaviorParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 48, BehaviorParser::RuleDeclaration);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(203);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case BehaviorParser::T__24: {
        enterOuterAlt(_localctx, 1);
        setState(199);
        decl_Ped();
        break;
      }

      case BehaviorParser::T__25: {
        enterOuterAlt(_localctx, 2);
        setState(200);
        decl_Ped_State();
        break;
      }

      case BehaviorParser::T__26: {
        enterOuterAlt(_localctx, 3);
        setState(201);
        decl_Env_State();
        break;
      }

      case BehaviorParser::PARAMETERS: {
        enterOuterAlt(_localctx, 4);
        setState(202);
        decl_Parameters();
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

//----------------- Decl_PedContext ------------------------------------------------------------------

BehaviorParser::Decl_PedContext::Decl_PedContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Decl_PedContext::AN() {
  return getToken(BehaviorParser::AN, 0);
}

tree::TerminalNode* BehaviorParser::Decl_PedContext::ID() {
  return getToken(BehaviorParser::ID, 0);
}


size_t BehaviorParser::Decl_PedContext::getRuleIndex() const {
  return BehaviorParser::RuleDecl_Ped;
}

antlrcpp::Any BehaviorParser::Decl_PedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitDecl_Ped(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Decl_PedContext* BehaviorParser::decl_Ped() {
  Decl_PedContext *_localctx = _tracker.createInstance<Decl_PedContext>(_ctx, getState());
  enterRule(_localctx, 50, BehaviorParser::RuleDecl_Ped);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(205);
    match(BehaviorParser::T__24);
    setState(206);
    match(BehaviorParser::AN);
    setState(207);
    match(BehaviorParser::ID);
    setState(208);
    match(BehaviorParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_Ped_StateContext ------------------------------------------------------------------

BehaviorParser::Decl_Ped_StateContext::Decl_Ped_StateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BehaviorParser::Decl_Ped_StateContext::ID() {
  return getTokens(BehaviorParser::ID);
}

tree::TerminalNode* BehaviorParser::Decl_Ped_StateContext::ID(size_t i) {
  return getToken(BehaviorParser::ID, i);
}

std::vector<tree::TerminalNode *> BehaviorParser::Decl_Ped_StateContext::COMMA() {
  return getTokens(BehaviorParser::COMMA);
}

tree::TerminalNode* BehaviorParser::Decl_Ped_StateContext::COMMA(size_t i) {
  return getToken(BehaviorParser::COMMA, i);
}


size_t BehaviorParser::Decl_Ped_StateContext::getRuleIndex() const {
  return BehaviorParser::RuleDecl_Ped_State;
}

antlrcpp::Any BehaviorParser::Decl_Ped_StateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitDecl_Ped_State(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Decl_Ped_StateContext* BehaviorParser::decl_Ped_State() {
  Decl_Ped_StateContext *_localctx = _tracker.createInstance<Decl_Ped_StateContext>(_ctx, getState());
  enterRule(_localctx, 52, BehaviorParser::RuleDecl_Ped_State);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(210);
    match(BehaviorParser::T__25);

    setState(211);
    match(BehaviorParser::ID);
    setState(216);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BehaviorParser::COMMA) {
      setState(212);
      match(BehaviorParser::COMMA);
      setState(213);
      match(BehaviorParser::ID);
      setState(218);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(219);
    match(BehaviorParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_Env_StateContext ------------------------------------------------------------------

BehaviorParser::Decl_Env_StateContext::Decl_Env_StateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> BehaviorParser::Decl_Env_StateContext::ID() {
  return getTokens(BehaviorParser::ID);
}

tree::TerminalNode* BehaviorParser::Decl_Env_StateContext::ID(size_t i) {
  return getToken(BehaviorParser::ID, i);
}

std::vector<tree::TerminalNode *> BehaviorParser::Decl_Env_StateContext::COMMA() {
  return getTokens(BehaviorParser::COMMA);
}

tree::TerminalNode* BehaviorParser::Decl_Env_StateContext::COMMA(size_t i) {
  return getToken(BehaviorParser::COMMA, i);
}


size_t BehaviorParser::Decl_Env_StateContext::getRuleIndex() const {
  return BehaviorParser::RuleDecl_Env_State;
}

antlrcpp::Any BehaviorParser::Decl_Env_StateContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitDecl_Env_State(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Decl_Env_StateContext* BehaviorParser::decl_Env_State() {
  Decl_Env_StateContext *_localctx = _tracker.createInstance<Decl_Env_StateContext>(_ctx, getState());
  enterRule(_localctx, 54, BehaviorParser::RuleDecl_Env_State);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(221);
    match(BehaviorParser::T__26);

    setState(222);
    match(BehaviorParser::ID);
    setState(227);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BehaviorParser::COMMA) {
      setState(223);
      match(BehaviorParser::COMMA);
      setState(224);
      match(BehaviorParser::ID);
      setState(229);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(230);
    match(BehaviorParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Decl_ParametersContext ------------------------------------------------------------------

BehaviorParser::Decl_ParametersContext::Decl_ParametersContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* BehaviorParser::Decl_ParametersContext::PARAMETERS() {
  return getToken(BehaviorParser::PARAMETERS, 0);
}

std::vector<tree::TerminalNode *> BehaviorParser::Decl_ParametersContext::PARAMETER() {
  return getTokens(BehaviorParser::PARAMETER);
}

tree::TerminalNode* BehaviorParser::Decl_ParametersContext::PARAMETER(size_t i) {
  return getToken(BehaviorParser::PARAMETER, i);
}

std::vector<tree::TerminalNode *> BehaviorParser::Decl_ParametersContext::COMMA() {
  return getTokens(BehaviorParser::COMMA);
}

tree::TerminalNode* BehaviorParser::Decl_ParametersContext::COMMA(size_t i) {
  return getToken(BehaviorParser::COMMA, i);
}


size_t BehaviorParser::Decl_ParametersContext::getRuleIndex() const {
  return BehaviorParser::RuleDecl_Parameters;
}

antlrcpp::Any BehaviorParser::Decl_ParametersContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<BehaviorVisitor*>(visitor))
    return parserVisitor->visitDecl_Parameters(this);
  else
    return visitor->visitChildren(this);
}

BehaviorParser::Decl_ParametersContext* BehaviorParser::decl_Parameters() {
  Decl_ParametersContext *_localctx = _tracker.createInstance<Decl_ParametersContext>(_ctx, getState());
  enterRule(_localctx, 56, BehaviorParser::RuleDecl_Parameters);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(BehaviorParser::PARAMETERS);

    setState(233);
    match(BehaviorParser::PARAMETER);
    setState(238);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == BehaviorParser::COMMA) {
      setState(234);
      match(BehaviorParser::COMMA);
      setState(235);
      match(BehaviorParser::PARAMETER);
      setState(240);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(241);
    match(BehaviorParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> BehaviorParser::_decisionToDFA;
atn::PredictionContextCache BehaviorParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN BehaviorParser::_atn;
std::vector<uint16_t> BehaviorParser::_serializedATN;

std::vector<std::string> BehaviorParser::_ruleNames = {
  "program", "statement", "transition_Environment", "transition_Pedestrian", 
  "condition", "sub_condition", "condition_Existance", "condition_State", 
  "condition_Others_State", "condition_Time_Elapsed", "state_Check", "state_Set", 
  "object", "ped_Selector", "selector_Percent", "selector_Exactly_N_Random", 
  "selector_Everyone", "action", "conditional_action", "un_conditional_action", 
  "sub_action", "action_atom", "action_Stop", "action_atom_Percent_Walk_Speed", 
  "declaration", "decl_Ped", "decl_Ped_State", "decl_Env_State", "decl_Parameters"
};

std::vector<std::string> BehaviorParser::_literalNames = {
  "", "'The Environment will'", "'.'", "'will'", "'There is'", "'That'", 
  "'after'", "'seconds'", "'is'", "'be'", "'The Environment'", "'Pedestrian'", 
  "'A Random '", "'% of Pedestrians are'", "'Exactly '", "' random pedestrians are '", 
  "' random pedestrian is '", "'Everyone is '", "'will always'", "'then'", 
  "'!stop'", "'!change_speed'", "'%'", "'Faster'", "'Slower'", "'Consider'", 
  "'Possible Pedestrian States Are:'", "'Possible Environment States Are:'", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "','", "':'"
};

std::vector<std::string> BehaviorParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "ID", "STATE", "ACTION", "ATTRIBUTE", 
  "PARAMETER", "NUMBER", "COMMENT", "LINE_COMMENT", "WS", "AN", "AND", "OR", 
  "ANDOR", "COMMA", "COLON", "THE", "GIVEN", "SET", "PARAMETERS", "Direction"
};

dfa::Vocabulary BehaviorParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> BehaviorParser::_tokenNames;

BehaviorParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x31, 0xf6, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 0x9, 0x11, 0x4, 0x12, 
    0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 0x9, 0x14, 0x4, 0x15, 0x9, 
    0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 
    0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 
    0x1c, 0x9, 0x1c, 0x4, 0x1d, 0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x3, 0x2, 
    0x6, 0x2, 0x3e, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x3f, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x47, 0xa, 0x3, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x5a, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x5, 0x7, 0x60, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x5, 0x8, 0x6d, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 
    0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 
    0x3, 0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0x85, 0xa, 0xf, 0x3, 
    0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 
    0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 
    0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x3, 0x11, 0x5, 0x11, 
    0x9a, 0xa, 0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 
    0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0xa3, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 
    0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x14, 0x3, 0x15, 0x3, 
    0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 
    0x3, 0x16, 0x7, 0x16, 0xb5, 0xa, 0x16, 0xc, 0x16, 0xe, 0x16, 0xb8, 0xb, 
    0x16, 0x3, 0x16, 0x5, 0x16, 0xbb, 0xa, 0x16, 0x3, 0x17, 0x3, 0x17, 0x3, 
    0x17, 0x3, 0x17, 0x5, 0x17, 0xc1, 0xa, 0x17, 0x3, 0x18, 0x3, 0x18, 0x3, 
    0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x1a, 0x3, 0x1a, 
    0x3, 0x1a, 0x3, 0x1a, 0x5, 0x1a, 0xce, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 
    0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 
    0x1c, 0x7, 0x1c, 0xd9, 0xa, 0x1c, 0xc, 0x1c, 0xe, 0x1c, 0xdc, 0xb, 0x1c, 
    0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x7, 
    0x1d, 0xe4, 0xa, 0x1d, 0xc, 0x1d, 0xe, 0x1d, 0xe7, 0xb, 0x1d, 0x3, 0x1d, 
    0x3, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x7, 0x1e, 0xef, 
    0xa, 0x1e, 0xc, 0x1e, 0xe, 0x1e, 0xf2, 0xb, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 
    0x3, 0x1e, 0x2, 0x2, 0x1f, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 
    0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 0x24, 0x26, 0x28, 
    0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 0x3a, 0x2, 0x4, 0x3, 
    0x2, 0xc, 0xd, 0x3, 0x2, 0x19, 0x1a, 0x2, 0xf1, 0x2, 0x3d, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x46, 0x3, 0x2, 0x2, 0x2, 0x6, 0x48, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x4d, 0x3, 0x2, 0x2, 0x2, 0xa, 0x59, 0x3, 0x2, 0x2, 0x2, 0xc, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x10, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x72, 0x3, 0x2, 0x2, 0x2, 0x14, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0x79, 0x3, 0x2, 0x2, 0x2, 0x18, 0x7c, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x1c, 0x84, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x86, 0x3, 0x2, 0x2, 0x2, 0x20, 0x99, 0x3, 0x2, 0x2, 0x2, 0x22, 
    0x9b, 0x3, 0x2, 0x2, 0x2, 0x24, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x26, 0xa4, 
    0x3, 0x2, 0x2, 0x2, 0x28, 0xab, 0x3, 0x2, 0x2, 0x2, 0x2a, 0xba, 0x3, 
    0x2, 0x2, 0x2, 0x2c, 0xc0, 0x3, 0x2, 0x2, 0x2, 0x2e, 0xc2, 0x3, 0x2, 
    0x2, 0x2, 0x30, 0xc4, 0x3, 0x2, 0x2, 0x2, 0x32, 0xcd, 0x3, 0x2, 0x2, 
    0x2, 0x34, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x36, 0xd4, 0x3, 0x2, 0x2, 0x2, 
    0x38, 0xdf, 0x3, 0x2, 0x2, 0x2, 0x3a, 0xea, 0x3, 0x2, 0x2, 0x2, 0x3c, 
    0x3e, 0x5, 0x4, 0x3, 0x2, 0x3d, 0x3c, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x40, 0x3, 
    0x2, 0x2, 0x2, 0x40, 0x3, 0x3, 0x2, 0x2, 0x2, 0x41, 0x47, 0x5, 0x32, 
    0x1a, 0x2, 0x42, 0x47, 0x5, 0x1c, 0xf, 0x2, 0x43, 0x47, 0x5, 0x24, 0x13, 
    0x2, 0x44, 0x47, 0x5, 0x6, 0x4, 0x2, 0x45, 0x47, 0x5, 0x8, 0x5, 0x2, 
    0x46, 0x41, 0x3, 0x2, 0x2, 0x2, 0x46, 0x42, 0x3, 0x2, 0x2, 0x2, 0x46, 
    0x43, 0x3, 0x2, 0x2, 0x2, 0x46, 0x44, 0x3, 0x2, 0x2, 0x2, 0x46, 0x45, 
    0x3, 0x2, 0x2, 0x2, 0x47, 0x5, 0x3, 0x2, 0x2, 0x2, 0x48, 0x49, 0x7, 
    0x3, 0x2, 0x2, 0x49, 0x4a, 0x5, 0x18, 0xd, 0x2, 0x4a, 0x4b, 0x5, 0xa, 
    0x6, 0x2, 0x4b, 0x4c, 0x7, 0x4, 0x2, 0x2, 0x4c, 0x7, 0x3, 0x2, 0x2, 
    0x2, 0x4d, 0x4e, 0x7, 0x27, 0x2, 0x2, 0x4e, 0x4f, 0x7, 0x1e, 0x2, 0x2, 
    0x4f, 0x50, 0x7, 0x5, 0x2, 0x2, 0x50, 0x51, 0x5, 0x18, 0xd, 0x2, 0x51, 
    0x52, 0x5, 0xa, 0x6, 0x2, 0x52, 0x53, 0x7, 0x4, 0x2, 0x2, 0x53, 0x9, 
    0x3, 0x2, 0x2, 0x2, 0x54, 0x5a, 0x5, 0xc, 0x7, 0x2, 0x55, 0x56, 0x5, 
    0xc, 0x7, 0x2, 0x56, 0x57, 0x7, 0x2a, 0x2, 0x2, 0x57, 0x58, 0x5, 0xa, 
    0x6, 0x2, 0x58, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x59, 0x54, 0x3, 0x2, 0x2, 
    0x2, 0x59, 0x55, 0x3, 0x2, 0x2, 0x2, 0x5a, 0xb, 0x3, 0x2, 0x2, 0x2, 
    0x5b, 0x60, 0x5, 0x10, 0x9, 0x2, 0x5c, 0x60, 0x5, 0x14, 0xb, 0x2, 0x5d, 
    0x60, 0x5, 0xe, 0x8, 0x2, 0x5e, 0x60, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x5f, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x5d, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0xd, 0x3, 0x2, 
    0x2, 0x2, 0x61, 0x62, 0x7, 0x2e, 0x2, 0x2, 0x62, 0x63, 0x7, 0x6, 0x2, 
    0x2, 0x63, 0x64, 0x7, 0x27, 0x2, 0x2, 0x64, 0x65, 0x7, 0x1e, 0x2, 0x2, 
    0x65, 0x6d, 0x7, 0x31, 0x2, 0x2, 0x66, 0x67, 0x7, 0x2e, 0x2, 0x2, 0x67, 
    0x68, 0x7, 0x6, 0x2, 0x2, 0x68, 0x69, 0x7, 0x27, 0x2, 0x2, 0x69, 0x6a, 
    0x7, 0x1e, 0x2, 0x2, 0x6a, 0x6b, 0x7, 0x31, 0x2, 0x2, 0x6b, 0x6d, 0x5, 
    0x12, 0xa, 0x2, 0x6c, 0x61, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x66, 0x3, 0x2, 
    0x2, 0x2, 0x6d, 0xf, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 0x7, 0x2e, 0x2, 
    0x2, 0x6f, 0x70, 0x5, 0x1a, 0xe, 0x2, 0x70, 0x71, 0x5, 0x16, 0xc, 0x2, 
    0x71, 0x11, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 0x7, 0x2, 0x2, 0x73, 
    0x74, 0x5, 0x16, 0xc, 0x2, 0x74, 0x13, 0x3, 0x2, 0x2, 0x2, 0x75, 0x76, 
    0x7, 0x8, 0x2, 0x2, 0x76, 0x77, 0x7, 0x23, 0x2, 0x2, 0x77, 0x78, 0x7, 
    0x9, 0x2, 0x2, 0x78, 0x15, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 0x7, 0xa, 
    0x2, 0x2, 0x7a, 0x7b, 0x7, 0x1f, 0x2, 0x2, 0x7b, 0x17, 0x3, 0x2, 0x2, 
    0x2, 0x7c, 0x7d, 0x7, 0xb, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x1f, 0x2, 0x2, 
    0x7e, 0x19, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x80, 0x9, 0x2, 0x2, 0x2, 0x80, 
    0x1b, 0x3, 0x2, 0x2, 0x2, 0x81, 0x85, 0x5, 0x1e, 0x10, 0x2, 0x82, 0x85, 
    0x5, 0x20, 0x11, 0x2, 0x83, 0x85, 0x5, 0x22, 0x12, 0x2, 0x84, 0x81, 
    0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x83, 0x3, 
    0x2, 0x2, 0x2, 0x85, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x7, 0xe, 
    0x2, 0x2, 0x87, 0x88, 0x7, 0x23, 0x2, 0x2, 0x88, 0x89, 0x7, 0xf, 0x2, 
    0x2, 0x89, 0x8a, 0x7, 0x27, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x1e, 0x2, 0x2, 
    0x8b, 0x8c, 0x7, 0x4, 0x2, 0x2, 0x8c, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x8d, 
    0x8e, 0x7, 0x10, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x23, 0x2, 0x2, 0x8f, 0x90, 
    0x7, 0x11, 0x2, 0x2, 0x90, 0x91, 0x7, 0x27, 0x2, 0x2, 0x91, 0x92, 0x7, 
    0x1e, 0x2, 0x2, 0x92, 0x9a, 0x7, 0x4, 0x2, 0x2, 0x93, 0x94, 0x7, 0x10, 
    0x2, 0x2, 0x94, 0x95, 0x7, 0x23, 0x2, 0x2, 0x95, 0x96, 0x7, 0x12, 0x2, 
    0x2, 0x96, 0x97, 0x7, 0x27, 0x2, 0x2, 0x97, 0x98, 0x7, 0x1e, 0x2, 0x2, 
    0x98, 0x9a, 0x7, 0x4, 0x2, 0x2, 0x99, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x99, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x21, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9c, 
    0x7, 0x13, 0x2, 0x2, 0x9c, 0x9d, 0x7, 0x27, 0x2, 0x2, 0x9d, 0x9e, 0x7, 
    0x1e, 0x2, 0x2, 0x9e, 0x9f, 0x7, 0x4, 0x2, 0x2, 0x9f, 0x23, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0xa3, 0x5, 0x26, 0x14, 0x2, 0xa1, 0xa3, 0x5, 0x28, 0x15, 
    0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xa3, 0x25, 0x3, 0x2, 0x2, 0x2, 0xa4, 0xa5, 0x7, 0x27, 0x2, 0x2, 0xa5, 
    0xa6, 0x7, 0x1e, 0x2, 0x2, 0xa6, 0xa7, 0x7, 0x5, 0x2, 0x2, 0xa7, 0xa8, 
    0x5, 0x2a, 0x16, 0x2, 0xa8, 0xa9, 0x5, 0xa, 0x6, 0x2, 0xa9, 0xaa, 0x7, 
    0x4, 0x2, 0x2, 0xaa, 0x27, 0x3, 0x2, 0x2, 0x2, 0xab, 0xac, 0x7, 0x27, 
    0x2, 0x2, 0xac, 0xad, 0x7, 0x1e, 0x2, 0x2, 0xad, 0xae, 0x7, 0x14, 0x2, 
    0x2, 0xae, 0xaf, 0x5, 0x2a, 0x16, 0x2, 0xaf, 0xb0, 0x7, 0x4, 0x2, 0x2, 
    0xb0, 0x29, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb6, 0x5, 0x2c, 0x17, 0x2, 0xb2, 
    0xb3, 0x7, 0x15, 0x2, 0x2, 0xb3, 0xb5, 0x5, 0x2c, 0x17, 0x2, 0xb4, 0xb2, 
    0x3, 0x2, 0x2, 0x2, 0xb5, 0xb8, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb4, 0x3, 
    0x2, 0x2, 0x2, 0xb6, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xbb, 0x3, 0x2, 
    0x2, 0x2, 0xb8, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb9, 0xbb, 0x3, 0x2, 0x2, 
    0x2, 0xba, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 0x2, 
    0xbb, 0x2b, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xc1, 0x7, 0x20, 0x2, 0x2, 0xbd, 
    0xc1, 0x5, 0x18, 0xd, 0x2, 0xbe, 0xc1, 0x5, 0x2e, 0x18, 0x2, 0xbf, 0xc1, 
    0x5, 0x30, 0x19, 0x2, 0xc0, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbd, 0x3, 
    0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbf, 0x3, 0x2, 
    0x2, 0x2, 0xc1, 0x2d, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc3, 0x7, 0x16, 0x2, 
    0x2, 0xc3, 0x2f, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc5, 0x7, 0x17, 0x2, 0x2, 
    0xc5, 0xc6, 0x7, 0x23, 0x2, 0x2, 0xc6, 0xc7, 0x7, 0x18, 0x2, 0x2, 0xc7, 
    0xc8, 0x9, 0x3, 0x2, 0x2, 0xc8, 0x31, 0x3, 0x2, 0x2, 0x2, 0xc9, 0xce, 
    0x5, 0x34, 0x1b, 0x2, 0xca, 0xce, 0x5, 0x36, 0x1c, 0x2, 0xcb, 0xce, 
    0x5, 0x38, 0x1d, 0x2, 0xcc, 0xce, 0x5, 0x3a, 0x1e, 0x2, 0xcd, 0xc9, 
    0x3, 0x2, 0x2, 0x2, 0xcd, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcb, 0x3, 
    0x2, 0x2, 0x2, 0xcd, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xce, 0x33, 0x3, 0x2, 
    0x2, 0x2, 0xcf, 0xd0, 0x7, 0x1b, 0x2, 0x2, 0xd0, 0xd1, 0x7, 0x27, 0x2, 
    0x2, 0xd1, 0xd2, 0x7, 0x1e, 0x2, 0x2, 0xd2, 0xd3, 0x7, 0x4, 0x2, 0x2, 
    0xd3, 0x35, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd5, 0x7, 0x1c, 0x2, 0x2, 0xd5, 
    0xda, 0x7, 0x1e, 0x2, 0x2, 0xd6, 0xd7, 0x7, 0x2b, 0x2, 0x2, 0xd7, 0xd9, 
    0x7, 0x1e, 0x2, 0x2, 0xd8, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd9, 0xdc, 0x3, 
    0x2, 0x2, 0x2, 0xda, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 0x2, 
    0x2, 0x2, 0xdb, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xda, 0x3, 0x2, 0x2, 
    0x2, 0xdd, 0xde, 0x7, 0x4, 0x2, 0x2, 0xde, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0xdf, 0xe0, 0x7, 0x1d, 0x2, 0x2, 0xe0, 0xe5, 0x7, 0x1e, 0x2, 0x2, 0xe1, 
    0xe2, 0x7, 0x2b, 0x2, 0x2, 0xe2, 0xe4, 0x7, 0x1e, 0x2, 0x2, 0xe3, 0xe1, 
    0x3, 0x2, 0x2, 0x2, 0xe4, 0xe7, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe3, 0x3, 
    0x2, 0x2, 0x2, 0xe5, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe8, 0x3, 0x2, 
    0x2, 0x2, 0xe7, 0xe5, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe9, 0x7, 0x4, 0x2, 
    0x2, 0xe9, 0x39, 0x3, 0x2, 0x2, 0x2, 0xea, 0xeb, 0x7, 0x30, 0x2, 0x2, 
    0xeb, 0xf0, 0x7, 0x22, 0x2, 0x2, 0xec, 0xed, 0x7, 0x2b, 0x2, 0x2, 0xed, 
    0xef, 0x7, 0x22, 0x2, 0x2, 0xee, 0xec, 0x3, 0x2, 0x2, 0x2, 0xef, 0xf2, 
    0x3, 0x2, 0x2, 0x2, 0xf0, 0xee, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x3, 
    0x2, 0x2, 0x2, 0xf1, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xf2, 0xf0, 0x3, 0x2, 
    0x2, 0x2, 0xf3, 0xf4, 0x7, 0x4, 0x2, 0x2, 0xf4, 0x3b, 0x3, 0x2, 0x2, 
    0x2, 0x11, 0x3f, 0x46, 0x59, 0x5f, 0x6c, 0x84, 0x99, 0xa2, 0xb6, 0xba, 
    0xc0, 0xcd, 0xda, 0xe5, 0xf0, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

BehaviorParser::Initializer BehaviorParser::_init;
