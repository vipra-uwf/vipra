
// Generated from Behavior.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "BehaviorParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by BehaviorParser.
 */
class  BehaviorVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by BehaviorParser.
   */
    virtual antlrcpp::Any visitProgram(BehaviorParser::ProgramContext *context) = 0;

    virtual antlrcpp::Any visitStatement(BehaviorParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitEvent(BehaviorParser::EventContext *context) = 0;

    virtual antlrcpp::Any visitEvent_Single(BehaviorParser::Event_SingleContext *context) = 0;

    virtual antlrcpp::Any visitEvent_Lasting(BehaviorParser::Event_LastingContext *context) = 0;

    virtual antlrcpp::Any visitCondition(BehaviorParser::ConditionContext *context) = 0;

    virtual antlrcpp::Any visitSub_condition(BehaviorParser::Sub_conditionContext *context) = 0;

    virtual antlrcpp::Any visitCondition_Existance(BehaviorParser::Condition_ExistanceContext *context) = 0;

    virtual antlrcpp::Any visitCondition_State(BehaviorParser::Condition_StateContext *context) = 0;

    virtual antlrcpp::Any visitCondition_Others_State(BehaviorParser::Condition_Others_StateContext *context) = 0;

    virtual antlrcpp::Any visitCondition_Met_Goal(BehaviorParser::Condition_Met_GoalContext *context) = 0;

    virtual antlrcpp::Any visitCondition_Time_Elapsed_From_Event(BehaviorParser::Condition_Time_Elapsed_From_EventContext *context) = 0;

    virtual antlrcpp::Any visitCondition_Event(BehaviorParser::Condition_EventContext *context) = 0;

    virtual antlrcpp::Any visitCondition_Event_Occurring(BehaviorParser::Condition_Event_OccurringContext *context) = 0;

    virtual antlrcpp::Any visitState_Check(BehaviorParser::State_CheckContext *context) = 0;

    virtual antlrcpp::Any visitState_Set(BehaviorParser::State_SetContext *context) = 0;

    virtual antlrcpp::Any visitObject(BehaviorParser::ObjectContext *context) = 0;

    virtual antlrcpp::Any visitPed_Selector(BehaviorParser::Ped_SelectorContext *context) = 0;

    virtual antlrcpp::Any visitSelector_Percent(BehaviorParser::Selector_PercentContext *context) = 0;

    virtual antlrcpp::Any visitSelector_Exactly_N_Random(BehaviorParser::Selector_Exactly_N_RandomContext *context) = 0;

    virtual antlrcpp::Any visitSelector_Everyone(BehaviorParser::Selector_EveryoneContext *context) = 0;

    virtual antlrcpp::Any visitAction(BehaviorParser::ActionContext *context) = 0;

    virtual antlrcpp::Any visitConditional_action(BehaviorParser::Conditional_actionContext *context) = 0;

    virtual antlrcpp::Any visitUn_conditional_action(BehaviorParser::Un_conditional_actionContext *context) = 0;

    virtual antlrcpp::Any visitSub_action(BehaviorParser::Sub_actionContext *context) = 0;

    virtual antlrcpp::Any visitAction_atom(BehaviorParser::Action_atomContext *context) = 0;

    virtual antlrcpp::Any visitAction_Stop(BehaviorParser::Action_StopContext *context) = 0;

    virtual antlrcpp::Any visitAction_atom_Percent_Walk_Speed(BehaviorParser::Action_atom_Percent_Walk_SpeedContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(BehaviorParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitDecl_Ped(BehaviorParser::Decl_PedContext *context) = 0;

    virtual antlrcpp::Any visitDecl_Ped_State(BehaviorParser::Decl_Ped_StateContext *context) = 0;

    virtual antlrcpp::Any visitDecl_Env_State(BehaviorParser::Decl_Env_StateContext *context) = 0;

    virtual antlrcpp::Any visitDecl_Parameters(BehaviorParser::Decl_ParametersContext *context) = 0;


};
