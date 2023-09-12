#ifndef VIPRA_BEHAVIORS_DECLARATION_COMPONENTS_HPP
#define VIPRA_BEHAVIORS_DECLARATION_COMPONENTS_HPP

#include <string>

#include <generated/BehaviorParser.h>

namespace BHVR {
using evDuration = BehaviorParser::Event_durationContext*;
using evStart = BehaviorParser::Event_startContext*;
using evProduce = BehaviorParser::Event_produceContext*;
using evWhere = BehaviorParser::Event_whereContext*;
using evName = std::string;

using acStimulus = BehaviorParser::Action_stimulusContext*;
using acResponse = BehaviorParser::Action_responseContext*;
using acDuration = BehaviorParser::Action_durationContext*;
using acTarget = BehaviorParser::Action_targetContext*;
using acProduce = BehaviorParser::Action_produceContext*;

using slType = BehaviorParser::Selector_typeContext*;
using slSelector = BehaviorParser::Selector_selectorContext*;
using slGroup = BehaviorParser::Selector_fromContext*;
using slRequired = BehaviorParser::Selector_requiredContext*;

using lcName = BehaviorParser::Loc_nameContext*;
using lcShape = BehaviorParser::Loc_shapeContext*;
using lcDimensions = BehaviorParser::Loc_dimensionsContext*;
}  // namespace BHVR

#endif
