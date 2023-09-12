
// Generated from Behavior.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  BehaviorParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    COMMENT = 8, LINE_COMMENT = 9, WS = 10, COMMA = 11, COLON = 12, STATE_VAL = 13, 
    EVNT = 14, LOC_NAME = 15, AN = 16, AT = 17, ADD = 18, AND = 19, ARE = 20, 
    AFTER = 21, ALWAYS = 22, AROUND = 23, ACTION = 24, AUDITORY = 25, BEHIND = 26, 
    BOTTOM = 27, CONSIDER = 28, CIRCLE = 29, CENTER = 30, CONDITION = 31, 
    DECIMAL = 32, DIRECTION = 33, DURATION = 34, END = 35, ENDS = 36, ENVIRONMENT = 37, 
    ENTER = 38, EXIT = 39, EVENT = 40, EXACTLY = 41, EVERY = 42, EVERYONE = 43, 
    ENDING = 44, EVERYWHERE = 45, FOR = 46, FROM = 47, FRONT = 48, FASTER = 49, 
    GIVEN = 50, GOAL = 51, GROUP = 52, HAS = 53, IN = 54, INTEGER = 55, 
    IS = 56, IF = 57, LENGTH = 58, LEFT = 59, DIMENSIONS = 60, LOCATION = 61, 
    MAX = 62, METERS = 63, NAME = 64, NEAREST = 65, NORMAL = 66, NONE = 67, 
    OBSTACLE = 68, OCCUR = 69, OCCURRED = 70, OCCURRING = 71, OF = 72, ON = 73, 
    OR = 74, PEDESTRIAN = 75, PEDESTRIANS = 76, POINTS = 77, POSSIBLE = 78, 
    POSITION = 79, PRODUCE = 80, RADIUS = 81, RANDOM = 82, REQUIRED = 83, 
    RECTANGLE = 84, RIGHT = 85, RESPONSE = 86, SCALE = 87, SELF = 88, SELECT = 89, 
    SELECTOR = 90, SET = 91, SECOND = 92, SECONDS = 93, STATUS = 94, SOURCE = 95, 
    STARTING = 96, SLOWER = 97, SHAPE = 98, STATES = 99, START = 100, STATE = 101, 
    STARTS = 102, SPEED = 103, SUBTRACT = 104, STIMULUS = 105, TARGET = 106, 
    TO = 107, TOP = 108, THE = 109, THAT = 110, THEN = 111, THEIR = 112, 
    THERES = 113, TYPES = 114, TYPE = 115, UNCONDITIONALLY = 116, VALUE = 117, 
    VELOCITY = 118, VISUAL = 119, WHEN = 120, WHILE = 121, WIDTH = 122, 
    WHERE = 123, WILL = 124, WITH = 125, WITHIN = 126, ID = 127, NUMBER = 128, 
    FLOAT = 129
  };

  enum {
    RuleProgram = 0, RuleStatement = 1, RuleLocation = 2, RuleLocation_attribute = 3, 
    RuleLoc_name = 4, RuleLoc_shape = 5, RuleLoc_dimensions = 6, RuleRect_dims = 7, 
    RuleCircle_dims = 8, RuleValue_numeric = 9, RuleValue_number = 10, RuleValue_float = 11, 
    RuleValue_range = 12, RuleValue_random = 13, RuleRandom_number = 14, 
    RuleRandom_float = 15, RuleFloat_range = 16, RuleNumber_range = 17, 
    RuleValue_coord = 18, RuleEvent = 19, RuleEvent_attribute = 20, RuleEvent_name = 21, 
    RuleEvent_start = 22, RuleEvent_duration = 23, RuleEvent_produce = 24, 
    RuleEvent_where = 25, RuleCondition = 26, RuleConnector = 27, RuleOr_Connector = 28, 
    RuleAnd_Connector = 29, RuleSub_condition = 30, RuleCondition_Time_Elapsed_From_Event = 31, 
    RuleCondition_Event_Occurred = 32, RuleCondition_Event_Occurring = 33, 
    RuleCondition_Event_Starting = 34, RuleCondition_Event_Ending = 35, 
    RuleCondition_Spatial = 36, RuleCondition_Enter_Location = 37, RuleCondition_Exit_Location = 38, 
    RuleCondition_Attribute = 39, RuleDuration = 40, RuleAttribute = 41, 
    RuleAttr_value = 42, RuleStimulus_type = 43, RuleProduces = 44, RulePed_Selector = 45, 
    RuleSelector_attribute = 46, RuleSelector_type = 47, RuleSelector_selector = 48, 
    RuleSelector_from = 49, RuleSelector_required = 50, RuleSelector = 51, 
    RuleSelector_Percent = 52, RuleSelector_Exactly_N_Random = 53, RuleSelector_Everyone = 54, 
    RuleGroup = 55, RuleId_list = 56, RuleAction = 57, RuleAction_attribute = 58, 
    RuleAction_stimulus = 59, RuleAction_response = 60, RuleAction_duration = 61, 
    RuleAction_target = 62, RuleAction_produce = 63, RuleSub_action = 64, 
    RuleAction_atom = 65, RuleSet_atom = 66, RuleScale_atom = 67, RuleTarget = 68, 
    RuleSelf = 69, RuleOther = 70, RuleNearest_type = 71, RuleModifier = 72, 
    RuleDistance = 73, RuleDirection = 74, RuleFront = 75, RuleBehind = 76, 
    RuleDeclaration = 77, RuleDecl_Ped_State = 78, RuleDecl_Env_State = 79, 
    RuleDecl_Ped = 80
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
  class Loc_shapeContext;
  class Loc_dimensionsContext;
  class Rect_dimsContext;
  class Circle_dimsContext;
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
  class Event_durationContext;
  class Event_produceContext;
  class Event_whereContext;
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
  class Condition_AttributeContext;
  class DurationContext;
  class AttributeContext;
  class Attr_valueContext;
  class Stimulus_typeContext;
  class ProducesContext;
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
  class GroupContext;
  class Id_listContext;
  class ActionContext;
  class Action_attributeContext;
  class Action_stimulusContext;
  class Action_responseContext;
  class Action_durationContext;
  class Action_targetContext;
  class Action_produceContext;
  class Sub_actionContext;
  class Action_atomContext;
  class Set_atomContext;
  class Scale_atomContext;
  class TargetContext;
  class SelfContext;
  class OtherContext;
  class Nearest_typeContext;
  class ModifierContext;
  class DistanceContext;
  class DirectionContext;
  class FrontContext;
  class BehindContext;
  class DeclarationContext;
  class Decl_Ped_StateContext;
  class Decl_Env_StateContext;
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
    Loc_shapeContext *loc_shape();
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

  class  Loc_shapeContext : public antlr4::ParserRuleContext {
  public:
    Loc_shapeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SHAPE();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *RECTANGLE();
    antlr4::tree::TerminalNode *CIRCLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loc_shapeContext* loc_shape();

  class  Loc_dimensionsContext : public antlr4::ParserRuleContext {
  public:
    Loc_dimensionsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Rect_dimsContext *rect_dims();
    Circle_dimsContext *circle_dims();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Loc_dimensionsContext* loc_dimensions();

  class  Rect_dimsContext : public antlr4::ParserRuleContext {
  public:
    Rect_dimsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *POINTS();
    antlr4::tree::TerminalNode *COLON();
    std::vector<Value_coordContext *> value_coord();
    Value_coordContext* value_coord(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Rect_dimsContext* rect_dims();

  class  Circle_dimsContext : public antlr4::ParserRuleContext {
  public:
    Circle_dimsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CENTER();
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    Value_coordContext *value_coord();
    antlr4::tree::TerminalNode *RADIUS();
    Value_numericContext *value_numeric();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Circle_dimsContext* circle_dims();

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
    Event_durationContext *event_duration();
    Event_produceContext *event_produce();
    Event_whereContext *event_where();


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
    Value_numericContext *value_numeric();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_startContext* event_start();

  class  Event_durationContext : public antlr4::ParserRuleContext {
  public:
    Event_durationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DURATION();
    antlr4::tree::TerminalNode *COLON();
    Value_numericContext *value_numeric();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_durationContext* event_duration();

  class  Event_produceContext : public antlr4::ParserRuleContext {
  public:
    Event_produceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRODUCE();
    antlr4::tree::TerminalNode *COLON();
    ProducesContext *produces();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_produceContext* event_produce();

  class  Event_whereContext : public antlr4::ParserRuleContext {
  public:
    Event_whereContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHERE();
    antlr4::tree::TerminalNode *COLON();
    antlr4::tree::TerminalNode *EVERYWHERE();
    antlr4::tree::TerminalNode *RANDOM();
    Value_coordContext *value_coord();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Event_whereContext* event_where();

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
    antlr4::tree::TerminalNode *EXIT();
    antlr4::tree::TerminalNode *LOC_NAME();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_Exit_LocationContext* condition_Exit_Location();

  class  Condition_AttributeContext : public antlr4::ParserRuleContext {
  public:
    Condition_AttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AttributeContext *attribute();
    antlr4::tree::TerminalNode *IS();
    Attr_valueContext *attr_value();
    antlr4::tree::TerminalNode *TARGET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Condition_AttributeContext* condition_Attribute();

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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Attr_valueContext* attr_value();

  class  Stimulus_typeContext : public antlr4::ParserRuleContext {
  public:
    Stimulus_typeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AUDITORY();
    antlr4::tree::TerminalNode *VISUAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Stimulus_typeContext* stimulus_type();

  class  ProducesContext : public antlr4::ParserRuleContext {
  public:
    ProducesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> ID();
    antlr4::tree::TerminalNode* ID(size_t i);
    std::vector<Stimulus_typeContext *> stimulus_type();
    Stimulus_typeContext* stimulus_type(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ProducesContext* produces();

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
    Action_produceContext *action_produce();


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

  class  Action_produceContext : public antlr4::ParserRuleContext {
  public:
    Action_produceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PRODUCE();
    antlr4::tree::TerminalNode *COLON();
    ProducesContext *produces();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Action_produceContext* action_produce();

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

  class  TargetContext : public antlr4::ParserRuleContext {
  public:
    TargetContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SelfContext *self();
    OtherContext *other();
    std::vector<ModifierContext *> modifier();
    ModifierContext* modifier(size_t i);


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


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModifierContext* modifier();

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

  class  DeclarationContext : public antlr4::ParserRuleContext {
  public:
    DeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Decl_Ped_StateContext *decl_Ped_State();
    Decl_Env_StateContext *decl_Env_State();
    Decl_PedContext *decl_Ped();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DeclarationContext* declaration();

  class  Decl_Ped_StateContext : public antlr4::ParserRuleContext {
  public:
    Decl_Ped_StateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PEDESTRIAN();
    antlr4::tree::TerminalNode *STATES();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> STATE_VAL();
    antlr4::tree::TerminalNode* STATE_VAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decl_Ped_StateContext* decl_Ped_State();

  class  Decl_Env_StateContext : public antlr4::ParserRuleContext {
  public:
    Decl_Env_StateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENVIRONMENT();
    antlr4::tree::TerminalNode *STATES();
    antlr4::tree::TerminalNode *COLON();
    std::vector<antlr4::tree::TerminalNode *> STATE_VAL();
    antlr4::tree::TerminalNode* STATE_VAL(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Decl_Env_StateContext* decl_Env_State();

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

