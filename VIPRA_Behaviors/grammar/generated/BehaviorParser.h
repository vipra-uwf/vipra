
// Generated from Behavior.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  BehaviorParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, COMMENT = 10, LINE_COMMENT = 11, WS = 12, COMMA = 13, 
    COLON = 14, STATE_VAL = 15, EVNT = 16, LOC_NAME = 17, AN = 18, AT = 19, 
    ADD = 20, AND = 21, ARE = 22, AFTER = 23, ALWAYS = 24, AROUND = 25, 
    ACTION = 26, BEHIND = 27, BOTTOM = 28, CONSIDER = 29, CIRCLE = 30, CENTER = 31, 
    CONDITION = 32, DECIMAL = 33, DIRECTION = 34, DURATION = 35, END = 36, 
    ENDS = 37, ENVIRONMENT = 38, ENTER = 39, EXIT = 40, EXISTS = 41, EVENT = 42, 
    EXACTLY = 43, EVERY = 44, EVERYONE = 45, ENDING = 46, FOR = 47, FROM = 48, 
    FRONT = 49, FASTER = 50, GIVEN = 51, GOAL = 52, GROUP = 53, HAS = 54, 
    IN = 55, INTEGER = 56, INITIAL = 57, IS = 58, IF = 59, LENGTH = 60, 
    LENGTHS = 61, LEFT = 62, LEAVE = 63, DIMENSIONS = 64, LOCATION = 65, 
    MAX = 66, METERS = 67, NAME = 68, NEAREST = 69, NORMAL = 70, NONE = 71, 
    NOT = 72, OBSTACLE = 73, OCCUR = 74, OCCURRED = 75, OCCURRING = 76, 
    OF = 77, ON = 78, OR = 79, PEDESTRIAN = 80, PEDESTRIANS = 81, POINTS = 82, 
    POSSIBLE = 83, POSITION = 84, RADIUS = 85, RANDOM = 86, REQUIRED = 87, 
    RECTANGLE = 88, RIGHT = 89, RESPONSE = 90, ROTATION = 91, SCALE = 92, 
    SELF = 93, SELECT = 94, SELECTOR = 95, SET = 96, SECOND = 97, SECONDS = 98, 
    STATUS = 99, STARTING = 100, SLOWER = 101, SHAPE = 102, STATES = 103, 
    START = 104, STATE = 105, STARTS = 106, SPEED = 107, SUBTRACT = 108, 
    STIMULUS = 109, TARGET = 110, TO = 111, TOP = 112, THE = 113, THAT = 114, 
    THEN = 115, THEIR = 116, THERES = 117, TYPES = 118, TYPE = 119, UNCONDITIONALLY = 120, 
    VALUE = 121, VELOCITY = 122, WHEN = 123, WHILE = 124, WHOSE = 125, WIDTH = 126, 
    WILL = 127, WITH = 128, WITHIN = 129, ID = 130, NUMBER = 131, FLOAT = 132
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleLocation = 2, RuleLocation_attribute = 3, 
    RuleLoc_name = 4, RuleLoc_dimensions = 5, RuleLoc_center = 6, RuleLoc_lengths = 7, 
    RuleLoc_rotation = 8, RuleValue_numeric = 9, RuleValue_number = 10, 
    RuleValue_float = 11, RuleValue_range = 12, RuleValue_random = 13, RuleRandom_number = 14, 
    RuleRandom_float = 15, RuleFloat_range = 16, RuleNumber_range = 17, 
    RuleValue_coord = 18, RuleEvent = 19, RuleEvent_attribute = 20, RuleEvent_name = 21, 
    RuleEvent_start = 22, RuleEvent_end = 23, RuleCondition = 24, RuleConnector = 25, 
    RuleOr_Connector = 26, RuleAnd_Connector = 27, RuleSub_condition = 28, 
    RuleCondition_Time_Elapsed_From_Event = 29, RuleCondition_Event_Occurred = 30, 
    RuleCondition_Event_Occurring = 31, RuleCondition_Event_Starting = 32, 
    RuleCondition_Event_Ending = 33, RuleCondition_Spatial = 34, RuleCondition_Enter_Location = 35, 
    RuleCondition_Exit_Location = 36, RuleCondition_Inside_Location = 37, 
    RuleCondition_Attribute = 38, RuleCondition_Exists = 39, RuleDuration = 40, 
    RuleAttribute = 41, RuleAttr_value = 42, RuleEnd_goal = 43, RuleTarget = 44, 
    RuleSelf = 45, RuleOther = 46, RuleNearest_type = 47, RuleModifier = 48, 
    RuleLocation_modifier = 49, RuleId_list = 50, RuleDistance = 51, RuleDirection = 52, 
    RuleFront = 53, RuleBehind = 54, RulePed_Selector = 55, RuleSelector_attribute = 56, 
    RuleSelector_type = 57, RuleSelector_selector = 58, RuleSelector_from = 59, 
    RuleSelector_required = 60, RuleSelector = 61, RuleSelector_Percent = 62, 
    RuleSelector_Exactly_N_Random = 63, RuleSelector_Everyone = 64, RuleSelector_Location = 65, 
    RuleGroup = 66, RuleAction = 67, RuleAction_attribute = 68, RuleAction_stimulus = 69, 
    RuleAction_response = 70, RuleAction_duration = 71, RuleAction_target = 72, 
    RuleSub_action = 73, RuleAction_atom = 74, RuleSet_atom = 75, RuleScale_atom = 76, 
    RuleDeclaration = 77, RuleDecl_Ped_State = 78, RuleDecl_Ped = 79
  };

  explicit BehaviorParser(antlr4::TokenStream *input);

  BehaviorParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~BehaviorParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class ProgramContext;
  class StatementContext;
  class LocationContext;
  class Location_attributeContext;
  class Loc_nameContext;
  class Loc_dimensionsContext;
  class Loc_centerContext;
  class Loc_lengthsContext;
  class Loc_rotationContext;
  class Value_numericContext;
  class Value_numberContext;
  class Value_floatContext;
  class Value_rangeContext;
  class Value_randomContext;
  class Random_numberContext;
  class Random_floatContext;
  class Float_rangeContext;
  class Number_rangeContext;
  class Value_coordContext;
  class EventContext;
  class Event_attributeContext;
  class Event_nameContext;
  class Event_startContext;
  class Event_endContext;
  class ConditionContext;
  class ConnectorContext;
  class Or_ConnectorContext;
  class And_ConnectorContext;
  class Sub_conditionContext;
  class Condition_Time_Elapsed_From_EventContext;
  class Condition_Event_OccurredContext;
  class Condition_Event_OccurringContext;
  class Condition_Event_StartingContext;
  class Condition_Event_EndingContext;
  class Condition_SpatialContext;
  class Condition_Enter_LocationContext;
  class Condition_Exit_LocationContext;
  class Condition_Inside_LocationContext;
  class Condition_AttributeContext;
  class Condition_ExistsContext;
  class DurationContext;
  class AttributeContext;
  class Attr_valueContext;
  class End_goalContext;
  class TargetContext;
  class SelfContext;
  class OtherContext;
  class Nearest_typeContext;
  class ModifierContext;
  class Location_modifierContext;
  class Id_listContext;
  class DistanceContext;
  class DirectionContext;
  class FrontContext;
  class BehindContext;
  class Ped_SelectorContext;
  class Selector_attributeContext;
  class Selector_typeContext;
  class Selector_selectorContext;
  class Selector_fromContext;
  class Selector_requiredContext;
  class SelectorContext;
  class Selector_PercentContext;
  class Selector_Exactly_N_RandomContext;
  class Selector_EveryoneContext;
  class Selector_LocationContext;
  class GroupContext;
  class ActionContext;
  class Action_attributeContext;
  class Action_stimulusContext;
  class Action_responseContext;
  class Action_durationContext;
  class Action_targetContext;
  class Sub_actionContext;
  class Action_atomContext;
  class Set_atomContext;
  class Scale_atomContext;
  class DeclarationContext;
  class Decl_Ped_StateContext;
  class Decl_PedContext; 

  class  ProgramContext : public antlr4::ParserRuleContext {
  public:
    ProgramContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Decl_PedContext *decl_Ped();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProgramContext* program();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EventContext *event();
    LocationContext *location();
    DeclarationContext *declaration();
    Ped_SelectorContext *ped_Selector();
    ActionContext *action();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  LocationContext : public antlr4::ParserRuleContext {
  public:
    LocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *COLON();
    std::vector<Location_attributeContext *> location_attribute();
    Location_attributeContext* location_attribute(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocationContext* location();

  class  Location_attributeContext : public antlr4::ParserRuleContext {
  public:
    Location_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Loc_nameContext *loc_name();
    Loc_dimensionsContext *loc_dimensions();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Location_attributeContext* location_attribute();

  class  Loc_nameContext : public antlr4::ParserRuleContext {
  public:
    Loc_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loc_nameContext* loc_name();

  class  Loc_dimensionsContext : public antlr4::ParserRuleContext {
  public:
    Loc_dimensionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DIMENSIONS();
    antlr4::tree::TerminalNode *COLON();
    Loc_centerContext *loc_center();
    Loc_lengthsContext *loc_lengths();
    Loc_rotationContext *loc_rotation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loc_dimensionsContext* loc_dimensions();

  class  Loc_centerContext : public antlr4::ParserRuleContext {
  public:
    Loc_centerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CENTER();
    antlr4::tree::TerminalNode *COLON();
    Value_coordContext *value_coord();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loc_centerContext* loc_center();

  class  Loc_lengthsContext : public antlr4::ParserRuleContext {
  public:
    Loc_lengthsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LENGTHS();
    antlr4::tree::TerminalNode *COLON();
    Value_coordContext *value_coord();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loc_lengthsContext* loc_lengths();

  class  Loc_rotationContext : public antlr4::ParserRuleContext {
  public:
    Loc_rotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ROTATION();
    antlr4::tree::TerminalNode *COLON();
    Value_numericContext *value_numeric();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loc_rotationContext* loc_rotation();

  class  Value_numericContext : public antlr4::ParserRuleContext {
  public:
    Value_numericContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_numberContext *value_number();
    Value_floatContext *value_float();
    Value_rangeContext *value_range();
    Value_randomContext *value_random();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_numericContext* value_numeric();

  class  Value_numberContext : public antlr4::ParserRuleContext {
  public:
    Value_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_numberContext* value_number();

  class  Value_floatContext : public antlr4::ParserRuleContext {
  public:
    Value_floatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_floatContext* value_float();

  class  Value_rangeContext : public antlr4::ParserRuleContext {
  public:
    Value_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Float_rangeContext *float_range();
    Number_rangeContext *number_range();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_rangeContext* value_range();

  class  Value_randomContext : public antlr4::ParserRuleContext {
  public:
    Value_randomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Random_floatContext *random_float();
    Random_numberContext *random_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_randomContext* value_random();

  class  Random_numberContext : public antlr4::ParserRuleContext {
  public:
    Random_numberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDOM();
    Number_rangeContext *number_range();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Random_numberContext* random_number();

  class  Random_floatContext : public antlr4::ParserRuleContext {
  public:
    Random_floatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RANDOM();
    Float_rangeContext *float_range();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Random_floatContext* random_float();

  class  Float_rangeContext : public antlr4::ParserRuleContext {
  public:
    Float_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> FLOAT();
    antlr4::tree::TerminalNode* FLOAT(size_t i);
    antlr4::tree::TerminalNode *TO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Float_rangeContext* float_range();

  class  Number_rangeContext : public antlr4::ParserRuleContext {
  public:
    Number_rangeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NUMBER();
    antlr4::tree::TerminalNode* NUMBER(size_t i);
    antlr4::tree::TerminalNode *TO();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Number_rangeContext* number_range();

  class  Value_coordContext : public antlr4::ParserRuleContext {
  public:
    Value_coordContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Value_numericContext *> value_numeric();
    Value_numericContext* value_numeric(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Value_coordContext* value_coord();

  class  EventContext : public antlr4::ParserRuleContext {
  public:
    EventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVENT();
    antlr4::tree::TerminalNode *COLON();
    std::vector<Event_attributeContext *> event_attribute();
    Event_attributeContext* event_attribute(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EventContext* event();

  class  Event_attributeContext : public antlr4::ParserRuleContext {
  public:
    Event_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Event_nameContext *event_name();
    Event_startContext *event_start();
    Event_endContext *event_end();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_attributeContext* event_attribute();

  class  Event_nameContext : public antlr4::ParserRuleContext {
  public:
    Event_nameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *ID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_nameContext* event_name();

  class  Event_startContext : public antlr4::ParserRuleContext {
  public:
    Event_startContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *START();
    antlr4::tree::TerminalNode *COLON();
    ConditionContext *condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_startContext* event_start();

  class  Event_endContext : public antlr4::ParserRuleContext {
  public:
    Event_endContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *COLON();
    ConditionContext *condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_endContext* event_end();

  class  ConditionContext : public antlr4::ParserRuleContext {
  public:
    ConditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Sub_conditionContext *sub_condition();
    std::vector<ConnectorContext *> connector();
    ConnectorContext* connector(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionContext* condition();

  class  ConnectorContext : public antlr4::ParserRuleContext {
  public:
    ConnectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Or_ConnectorContext *or_Connector();
    And_ConnectorContext *and_Connector();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConnectorContext* connector();

  class  Or_ConnectorContext : public antlr4::ParserRuleContext {
  public:
    Or_ConnectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OR();
    Sub_conditionContext *sub_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Or_ConnectorContext* or_Connector();

  class  And_ConnectorContext : public antlr4::ParserRuleContext {
  public:
    And_ConnectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AND();
    Sub_conditionContext *sub_condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  And_ConnectorContext* and_Connector();

  class  Sub_conditionContext : public antlr4::ParserRuleContext {
  public:
    Sub_conditionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Condition_Time_Elapsed_From_EventContext *condition_Time_Elapsed_From_Event();
    Condition_Event_OccurredContext *condition_Event_Occurred();
    Condition_Event_OccurringContext *condition_Event_Occurring();
    Condition_Event_StartingContext *condition_Event_Starting();
    Condition_Event_EndingContext *condition_Event_Ending();
    Condition_SpatialContext *condition_Spatial();
    Condition_Enter_LocationContext *condition_Enter_Location();
    Condition_Exit_LocationContext *condition_Exit_Location();
    Condition_Inside_LocationContext *condition_Inside_Location();
    Condition_AttributeContext *condition_Attribute();
    Condition_ExistsContext *condition_Exists();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sub_conditionContext* sub_condition();

  class  Condition_Time_Elapsed_From_EventContext : public antlr4::ParserRuleContext {
  public:
    Condition_Time_Elapsed_From_EventContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_numericContext *value_numeric();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *AFTER();
    antlr4::tree::TerminalNode *EVNT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Time_Elapsed_From_EventContext* condition_Time_Elapsed_From_Event();

  class  Condition_Event_OccurredContext : public antlr4::ParserRuleContext {
  public:
    Condition_Event_OccurredContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVNT();
    antlr4::tree::TerminalNode *HAS();
    antlr4::tree::TerminalNode *OCCURRED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Event_OccurredContext* condition_Event_Occurred();

  class  Condition_Event_OccurringContext : public antlr4::ParserRuleContext {
  public:
    Condition_Event_OccurringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVNT();
    antlr4::tree::TerminalNode *OCCURRING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Event_OccurringContext* condition_Event_Occurring();

  class  Condition_Event_StartingContext : public antlr4::ParserRuleContext {
  public:
    Condition_Event_StartingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVNT();
    antlr4::tree::TerminalNode *STARTING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Event_StartingContext* condition_Event_Starting();

  class  Condition_Event_EndingContext : public antlr4::ParserRuleContext {
  public:
    Condition_Event_EndingContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVNT();
    antlr4::tree::TerminalNode *ENDING();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Event_EndingContext* condition_Event_Ending();

  class  Condition_SpatialContext : public antlr4::ParserRuleContext {
  public:
    Condition_SpatialContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *WITHIN();
    Value_numericContext *value_numeric();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_SpatialContext* condition_Spatial();

  class  Condition_Enter_LocationContext : public antlr4::ParserRuleContext {
  public:
    Condition_Enter_LocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENTER();
    antlr4::tree::TerminalNode *LOC_NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Enter_LocationContext* condition_Enter_Location();

  class  Condition_Exit_LocationContext : public antlr4::ParserRuleContext {
  public:
    Condition_Exit_LocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LEAVE();
    antlr4::tree::TerminalNode *LOC_NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Exit_LocationContext* condition_Exit_Location();

  class  Condition_Inside_LocationContext : public antlr4::ParserRuleContext {
  public:
    Condition_Inside_LocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LOC_NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Inside_LocationContext* condition_Inside_Location();

  class  Condition_AttributeContext : public antlr4::ParserRuleContext {
  public:
    Condition_AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    antlr4::tree::TerminalNode *IS();
    Attr_valueContext *attr_value();
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *NOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_AttributeContext* condition_Attribute();

  class  Condition_ExistsContext : public antlr4::ParserRuleContext {
  public:
    Condition_ExistsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXISTS();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *WHOSE();
    AttributeContext *attribute();
    antlr4::tree::TerminalNode *IS();
    Attr_valueContext *attr_value();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);
    antlr4::tree::TerminalNode *NOT();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_ExistsContext* condition_Exists();

  class  DurationContext : public antlr4::ParserRuleContext {
  public:
    DurationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_numericContext *value_numeric();
    antlr4::tree::TerminalNode *SECONDS();
    antlr4::tree::TerminalNode *SECOND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DurationContext* duration();

  class  AttributeContext : public antlr4::ParserRuleContext {
  public:
    AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POSITION();
    antlr4::tree::TerminalNode *VELOCITY();
    antlr4::tree::TerminalNode *GOAL();
    End_goalContext *end_goal();
    antlr4::tree::TerminalNode *STATE();
    antlr4::tree::TerminalNode *LOCATION();
    antlr4::tree::TerminalNode *STATUS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AttributeContext* attribute();

  class  Attr_valueContext : public antlr4::ParserRuleContext {
  public:
    Attr_valueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_numericContext *value_numeric();
    Value_coordContext *value_coord();
    antlr4::tree::TerminalNode *STATE_VAL();
    antlr4::tree::TerminalNode *LOC_NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_valueContext* attr_value();

  class  End_goalContext : public antlr4::ParserRuleContext {
  public:
    End_goalContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *GOAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  End_goalContext* end_goal();

  class  TargetContext : public antlr4::ParserRuleContext {
  public:
    TargetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelfContext *self();
    OtherContext *other();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TargetContext* target();

  class  SelfContext : public antlr4::ParserRuleContext {
  public:
    SelfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelfContext* self();

  class  OtherContext : public antlr4::ParserRuleContext {
  public:
    OtherContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Nearest_typeContext *nearest_type();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OtherContext* other();

  class  Nearest_typeContext : public antlr4::ParserRuleContext {
  public:
    Nearest_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEAREST();
    Id_listContext *id_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Nearest_typeContext* nearest_type();

  class  ModifierContext : public antlr4::ParserRuleContext {
  public:
    ModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DirectionContext *direction();
    DistanceContext *distance();
    Location_modifierContext *location_modifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifierContext* modifier();

  class  Location_modifierContext : public antlr4::ParserRuleContext {
  public:
    Location_modifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LOC_NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Location_modifierContext* location_modifier();

  class  Id_listContext : public antlr4::ParserRuleContext {
  public:
    Id_listContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> PEDESTRIAN();
    antlr4::tree::TerminalNode* PEDESTRIAN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Id_listContext* id_list();

  class  DistanceContext : public antlr4::ParserRuleContext {
  public:
    DistanceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WITHIN();
    Value_numericContext *value_numeric();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DistanceContext* distance();

  class  DirectionContext : public antlr4::ParserRuleContext {
  public:
    DirectionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FrontContext *front();
    BehindContext *behind();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DirectionContext* direction();

  class  FrontContext : public antlr4::ParserRuleContext {
  public:
    FrontContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FRONT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FrontContext* front();

  class  BehindContext : public antlr4::ParserRuleContext {
  public:
    BehindContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BEHIND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BehindContext* behind();

  class  Ped_SelectorContext : public antlr4::ParserRuleContext {
  public:
    Ped_SelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECTOR();
    antlr4::tree::TerminalNode *COLON();
    std::vector<Selector_attributeContext *> selector_attribute();
    Selector_attributeContext* selector_attribute(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Ped_SelectorContext* ped_Selector();

  class  Selector_attributeContext : public antlr4::ParserRuleContext {
  public:
    Selector_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Selector_typeContext *selector_type();
    Selector_selectorContext *selector_selector();
    Selector_fromContext *selector_from();
    Selector_requiredContext *selector_required();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_attributeContext* selector_attribute();

  class  Selector_typeContext : public antlr4::ParserRuleContext {
  public:
    Selector_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPE();
    antlr4::tree::TerminalNode *COLON();
    Id_listContext *id_list();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_typeContext* selector_type();

  class  Selector_selectorContext : public antlr4::ParserRuleContext {
  public:
    Selector_selectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SELECT();
    antlr4::tree::TerminalNode *COLON();
    SelectorContext *selector();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_selectorContext* selector_selector();

  class  Selector_fromContext : public antlr4::ParserRuleContext {
  public:
    Selector_fromContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FROM();
    antlr4::tree::TerminalNode *COLON();
    GroupContext *group();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_fromContext* selector_from();

  class  Selector_requiredContext : public antlr4::ParserRuleContext {
  public:
    Selector_requiredContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRED();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_requiredContext* selector_required();

  class  SelectorContext : public antlr4::ParserRuleContext {
  public:
    SelectorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Selector_PercentContext *selector_Percent();
    Selector_Exactly_N_RandomContext *selector_Exactly_N_Random();
    Selector_EveryoneContext *selector_Everyone();
    Selector_LocationContext *selector_Location();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SelectorContext* selector();

  class  Selector_PercentContext : public antlr4::ParserRuleContext {
  public:
    Selector_PercentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_numberContext *value_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_PercentContext* selector_Percent();

  class  Selector_Exactly_N_RandomContext : public antlr4::ParserRuleContext {
  public:
    Selector_Exactly_N_RandomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Value_numberContext *value_number();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_Exactly_N_RandomContext* selector_Exactly_N_Random();

  class  Selector_EveryoneContext : public antlr4::ParserRuleContext {
  public:
    Selector_EveryoneContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EVERYONE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_EveryoneContext* selector_Everyone();

  class  Selector_LocationContext : public antlr4::ParserRuleContext {
  public:
    Selector_LocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *LOC_NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Selector_LocationContext* selector_Location();

  class  GroupContext : public antlr4::ParserRuleContext {
  public:
    GroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *PEDESTRIAN();
    antlr4::tree::TerminalNode *PEDESTRIANS();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  GroupContext* group();

  class  ActionContext : public antlr4::ParserRuleContext {
  public:
    ActionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ACTION();
    antlr4::tree::TerminalNode *ID();
    antlr4::tree::TerminalNode *COLON();
    std::vector<Action_attributeContext *> action_attribute();
    Action_attributeContext* action_attribute(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ActionContext* action();

  class  Action_attributeContext : public antlr4::ParserRuleContext {
  public:
    Action_attributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Action_responseContext *action_response();
    Action_stimulusContext *action_stimulus();
    Action_durationContext *action_duration();
    Action_targetContext *action_target();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_attributeContext* action_attribute();

  class  Action_stimulusContext : public antlr4::ParserRuleContext {
  public:
    Action_stimulusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONDITION();
    antlr4::tree::TerminalNode *COLON();
    ConditionContext *condition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_stimulusContext* action_stimulus();

  class  Action_responseContext : public antlr4::ParserRuleContext {
  public:
    Action_responseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RESPONSE();
    antlr4::tree::TerminalNode *COLON();
    Sub_actionContext *sub_action();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_responseContext* action_response();

  class  Action_durationContext : public antlr4::ParserRuleContext {
  public:
    Action_durationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DURATION();
    antlr4::tree::TerminalNode *COLON();
    DurationContext *duration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_durationContext* action_duration();

  class  Action_targetContext : public antlr4::ParserRuleContext {
  public:
    Action_targetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TARGET();
    antlr4::tree::TerminalNode *COLON();
    TargetContext *target();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_targetContext* action_target();

  class  Sub_actionContext : public antlr4::ParserRuleContext {
  public:
    Sub_actionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<Action_atomContext *> action_atom();
    Action_atomContext* action_atom(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Sub_actionContext* sub_action();

  class  Action_atomContext : public antlr4::ParserRuleContext {
  public:
    Action_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Set_atomContext *set_atom();
    Scale_atomContext *scale_atom();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_atomContext* action_atom();

  class  Set_atomContext : public antlr4::ParserRuleContext {
  public:
    Set_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SET();
    AttributeContext *attribute();
    antlr4::tree::TerminalNode *TO();
    Attr_valueContext *attr_value();
    antlr4::tree::TerminalNode *TARGET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Set_atomContext* set_atom();

  class  Scale_atomContext : public antlr4::ParserRuleContext {
  public:
    Scale_atomContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SCALE();
    AttributeContext *attribute();
    Attr_valueContext *attr_value();
    antlr4::tree::TerminalNode *TARGET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Scale_atomContext* scale_atom();

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Decl_Ped_StateContext *decl_Ped_State();
    Decl_PedContext *decl_Ped();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  Decl_Ped_StateContext : public antlr4::ParserRuleContext {
  public:
    Decl_Ped_StateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATES();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decl_Ped_StateContext* decl_Ped_State();

  class  Decl_PedContext : public antlr4::ParserRuleContext {
  public:
    Decl_PedContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TYPES();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decl_PedContext* decl_Ped();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

