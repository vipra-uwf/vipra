
// Generated from Behavior.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"




class  BehaviorParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, COMMENT = 9, LINE_COMMENT = 10, WS = 11, COMMA = 12, COLON = 13, 
    STATE = 14, ACTION = 15, PARAMETER = 16, EVNT = 17, OBJECT = 18, AFTER = 19, 
    AND = 20, ALWAYS = 21, AN = 22, ARE = 23, AROUND = 24, BEHIND = 25, 
    CONSIDER = 26, DIRECTION = 27, END = 28, ENDS = 29, ENVIRONMENT = 30, 
    EVENT = 31, EXACTLY = 32, EVERYONE = 33, FASTER = 34, FROM = 35, FRONT = 36, 
    GIVEN = 37, HAS = 38, IN = 39, IS = 40, METERS = 41, NORMAL = 42, OBSTACLE = 43, 
    OCCUR = 44, OCCURRED = 45, OCCURRING = 46, OF = 47, OR = 48, PEDESTRIAN = 49, 
    PEDESTRIANS = 50, POSSIBLE = 51, RANDOM = 52, SECONDS = 53, SLOWER = 54, 
    STATES = 55, STARTS = 56, SPEED = 57, THE = 58, THEN = 59, THEIR = 60, 
    TYPES = 61, WHEN = 62, WHILE = 63, WILL = 64, WITHIN = 65, ID = 66, 
    NUMBER = 67, FLOAT = 68
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleEvent = 2, RuleEvent_Single = 3, 
    RuleEvent_Lasting = 4, RuleCondition = 5, RuleConnector = 6, RuleOr_Connector = 7, 
    RuleAnd_Connector = 8, RuleSub_condition = 9, RuleCondition_Time_Elapsed_From_Event = 10, 
    RuleCondition_Event_Occurred = 11, RuleCondition_Event_Occurring = 12, 
    RuleCondition_Event_One_Time = 13, RuleDirection = 14, RuleDir = 15, 
    RuleDirection_of = 16, RuleInfront = 17, RuleBehind = 18, RuleAround = 19, 
    RuleObject = 20, RulePed_Selector = 21, RuleSelector_Percent = 22, RuleSelector_Exactly_N_Random = 23, 
    RuleSelector_Everyone = 24, RuleAction = 25, RuleConditional_action = 26, 
    RuleUn_conditional_action = 27, RuleSub_action = 28, RuleAction_atom = 29, 
    RuleAction_Stop = 30, RuleAction_atom_Percent_Walk_Speed = 31, RuleAction_Push = 32, 
    RuleAction_Be = 33, RuleDeclaration = 34, RuleDecl_Ped = 35, RuleDecl_Ped_State = 36, 
    RuleDecl_Env_State = 37
  };

  BehaviorParser(antlr4::TokenStream *input);
  ~BehaviorParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class ProgramContext;
  class StatementContext;
  class EventContext;
  class Event_SingleContext;
  class Event_LastingContext;
  class ConditionContext;
  class ConnectorContext;
  class Or_ConnectorContext;
  class And_ConnectorContext;
  class Sub_conditionContext;
  class Condition_Time_Elapsed_From_EventContext;
  class Condition_Event_OccurredContext;
  class Condition_Event_OccurringContext;
  class Condition_Event_One_TimeContext;
  class DirectionContext;
  class DirContext;
  class Direction_ofContext;
  class InfrontContext;
  class BehindContext;
  class AroundContext;
  class ObjectContext;
  class Ped_SelectorContext;
  class Selector_PercentContext;
  class Selector_Exactly_N_RandomContext;
  class Selector_EveryoneContext;
  class ActionContext;
  class Conditional_actionContext;
  class Un_conditional_actionContext;
  class Sub_actionContext;
  class Action_atomContext;
  class Action_StopContext;
  class Action_atom_Percent_Walk_SpeedContext;
  class Action_PushContext;
  class Action_BeContext;
  class DeclarationContext;
  class Decl_PedContext;
  class Decl_Ped_StateContext;
  class Decl_Env_StateContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EventContext *event();
    DeclarationContext *declaration();
    Ped_SelectorContext *ped_Selector();
    ActionContext *action();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  EventContext : public antlr4::ParserRuleContext {
  public:
    EventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_SingleContext *event_Single();
    Event_LastingContext *event_Lasting();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventContext* event();

  class  Event_SingleContext : public antlr4::ParserRuleContext {
  public:
    Event_SingleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVNT();
    antlr4::tree::TerminalNode *WILL();
    antlr4::tree::TerminalNode *OCCUR();
    ConditionContext *condition();
    antlr4::tree::TerminalNode *AN();
    antlr4::tree::TerminalNode *THE();
    antlr4::tree::TerminalNode *EVENT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_SingleContext* event_Single();

  class  Event_LastingContext : public antlr4::ParserRuleContext {
  public:
    Event_LastingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVNT();
    antlr4::tree::TerminalNode *WILL();
    antlr4::tree::TerminalNode *OCCUR();
    std::vector<ConditionContext *> condition();
    ConditionContext* condition(size_t i);
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *AN();
    antlr4::tree::TerminalNode *THE();
    antlr4::tree::TerminalNode *EVENT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_LastingContext* event_Lasting();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sub_conditionContext *sub_condition();
    std::vector<ConnectorContext *> connector();
    ConnectorContext* connector(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  ConnectorContext : public antlr4::ParserRuleContext {
  public:
    ConnectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_ConnectorContext *or_Connector();
    And_ConnectorContext *and_Connector();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConnectorContext* connector();

  class  Or_ConnectorContext : public antlr4::ParserRuleContext {
  public:
    Or_ConnectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    Sub_conditionContext *sub_condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_ConnectorContext* or_Connector();

  class  And_ConnectorContext : public antlr4::ParserRuleContext {
  public:
    And_ConnectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    Sub_conditionContext *sub_condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_ConnectorContext* and_Connector();

  class  Sub_conditionContext : public antlr4::ParserRuleContext {
  public:
    Sub_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Condition_Time_Elapsed_From_EventContext *condition_Time_Elapsed_From_Event();
    Condition_Event_OccurredContext *condition_Event_Occurred();
    Condition_Event_OccurringContext *condition_Event_Occurring();
    Condition_Event_One_TimeContext *condition_Event_One_Time();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sub_conditionContext* sub_condition();

  class  Condition_Time_Elapsed_From_EventContext : public antlr4::ParserRuleContext {
  public:
    Condition_Time_Elapsed_From_EventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *EVNT();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *AN();
    antlr4::tree::TerminalNode *THE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Time_Elapsed_From_EventContext* condition_Time_Elapsed_From_Event();

  class  Condition_Event_OccurredContext : public antlr4::ParserRuleContext {
  public:
    Condition_Event_OccurredContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *GIVEN();
    antlr4::tree::TerminalNode *EVNT();
    antlr4::tree::TerminalNode *HAS();
    antlr4::tree::TerminalNode *OCCURRED();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *AN();
    antlr4::tree::TerminalNode *THE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Event_OccurredContext* condition_Event_Occurred();

  class  Condition_Event_OccurringContext : public antlr4::ParserRuleContext {
  public:
    Condition_Event_OccurringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *EVNT();
    antlr4::tree::TerminalNode *IS();
    antlr4::tree::TerminalNode *OCCURRING();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *AN();
    antlr4::tree::TerminalNode *THEN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Event_OccurringContext* condition_Event_Occurring();

  class  Condition_Event_One_TimeContext : public antlr4::ParserRuleContext {
  public:
    Condition_Event_One_TimeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHEN();
    antlr4::tree::TerminalNode *EVNT();
    antlr4::tree::TerminalNode *ENDS();
    antlr4::tree::TerminalNode *STARTS();
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *AN();
    antlr4::tree::TerminalNode *THEN();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Event_One_TimeContext* condition_Event_One_Time();

  class  DirectionContext : public antlr4::ParserRuleContext {
  public:
    DirectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DirContext *dir();
    antlr4::tree::TerminalNode *WITHIN();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *METERS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectionContext* direction();

  class  DirContext : public antlr4::ParserRuleContext {
  public:
    DirContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Direction_ofContext *direction_of();
    InfrontContext *infront();
    BehindContext *behind();
    AroundContext *around();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirContext* dir();

  class  Direction_ofContext : public antlr4::ParserRuleContext {
  public:
    Direction_ofContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *DIRECTION();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Direction_ofContext* direction_of();

  class  InfrontContext : public antlr4::ParserRuleContext {
  public:
    InfrontContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FRONT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InfrontContext* infront();

  class  BehindContext : public antlr4::ParserRuleContext {
  public:
    BehindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEHIND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BehindContext* behind();

  class  AroundContext : public antlr4::ParserRuleContext {
  public:
    AroundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AROUND();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AroundContext* around();

  class  ObjectContext : public antlr4::ParserRuleContext {
  public:
    ObjectContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PEDESTRIAN();
    antlr4::tree::TerminalNode *OBSTACLE();
    antlr4::tree::TerminalNode *OBJECT();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ObjectContext* object();

  class  Ped_SelectorContext : public antlr4::ParserRuleContext {
  public:
    Ped_SelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AN();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *ARE();
    antlr4::tree::TerminalNode *IS();
    Selector_PercentContext *selector_Percent();
    Selector_Exactly_N_RandomContext *selector_Exactly_N_Random();
    Selector_EveryoneContext *selector_Everyone();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ped_SelectorContext* ped_Selector();

  class  Selector_PercentContext : public antlr4::ParserRuleContext {
  public:
    Selector_PercentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AN();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *OF();
    antlr4::tree::TerminalNode *PEDESTRIANS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_PercentContext* selector_Percent();

  class  Selector_Exactly_N_RandomContext : public antlr4::ParserRuleContext {
  public:
    Selector_Exactly_N_RandomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXACTLY();
    antlr4::tree::TerminalNode *NUMBER();
    antlr4::tree::TerminalNode *RANDOM();
    antlr4::tree::TerminalNode *PEDESTRIAN();
    antlr4::tree::TerminalNode *PEDESTRIANS();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_Exactly_N_RandomContext* selector_Exactly_N_Random();

  class  Selector_EveryoneContext : public antlr4::ParserRuleContext {
  public:
    Selector_EveryoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVERYONE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_EveryoneContext* selector_Everyone();

  class  ActionContext : public antlr4::ParserRuleContext {
  public:
    ActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Conditional_actionContext *conditional_action();
    Un_conditional_actionContext *un_conditional_action();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionContext* action();

  class  Conditional_actionContext : public antlr4::ParserRuleContext {
  public:
    Conditional_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AN();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *WILL();
    Sub_actionContext *sub_action();
    ConditionContext *condition();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Conditional_actionContext* conditional_action();

  class  Un_conditional_actionContext : public antlr4::ParserRuleContext {
  public:
    Un_conditional_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AN();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *WILL();
    antlr4::tree::TerminalNode *ALWAYS();
    Sub_actionContext *sub_action();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Un_conditional_actionContext* un_conditional_action();

  class  Sub_actionContext : public antlr4::ParserRuleContext {
  public:
    Sub_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Action_atomContext *> action_atom();
    Action_atomContext* action_atom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sub_actionContext* sub_action();

  class  Action_atomContext : public antlr4::ParserRuleContext {
  public:
    Action_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTION();
    Action_StopContext *action_Stop();
    Action_BeContext *action_Be();
    Action_atom_Percent_Walk_SpeedContext *action_atom_Percent_Walk_Speed();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_atomContext* action_atom();

  class  Action_StopContext : public antlr4::ParserRuleContext {
  public:
    Action_StopContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_StopContext* action_Stop();

  class  Action_atom_Percent_Walk_SpeedContext : public antlr4::ParserRuleContext {
  public:
    Action_atom_Percent_Walk_SpeedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *THEIR();
    antlr4::tree::TerminalNode *NORMAL();
    antlr4::tree::TerminalNode *SPEED();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_atom_Percent_Walk_SpeedContext* action_atom_Percent_Walk_Speed();

  class  Action_PushContext : public antlr4::ParserRuleContext {
  public:
    Action_PushContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_PushContext* action_Push();

  class  Action_BeContext : public antlr4::ParserRuleContext {
  public:
    Action_BeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATE();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_BeContext* action_Be();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Decl_PedContext *decl_Ped();
    Decl_Ped_StateContext *decl_Ped_State();
    Decl_Env_StateContext *decl_Env_State();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  Decl_PedContext : public antlr4::ParserRuleContext {
  public:
    Decl_PedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONSIDER();
    std::vector<antlr4::tree::TerminalNode *> AN();
    antlr4::tree::TerminalNode* AN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decl_PedContext* decl_Ped();

  class  Decl_Ped_StateContext : public antlr4::ParserRuleContext {
  public:
    Decl_Ped_StateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSSIBLE();
    antlr4::tree::TerminalNode *PEDESTRIAN();
    antlr4::tree::TerminalNode *STATES();
    antlr4::tree::TerminalNode *ARE();
    std::vector<antlr4::tree::TerminalNode *> STATE();
    antlr4::tree::TerminalNode* STATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decl_Ped_StateContext* decl_Ped_State();

  class  Decl_Env_StateContext : public antlr4::ParserRuleContext {
  public:
    Decl_Env_StateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSSIBLE();
    antlr4::tree::TerminalNode *ENVIRONMENT();
    antlr4::tree::TerminalNode *STATES();
    antlr4::tree::TerminalNode *ARE();
    std::vector<antlr4::tree::TerminalNode *> STATE();
    antlr4::tree::TerminalNode* STATE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> AND();
    antlr4::tree::TerminalNode* AND(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decl_Env_StateContext* decl_Env_State();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

