#ifndef VIPRA_BEHAVIORS_DECLARATION_COMPONENTS_HPP
#define VIPRA_BEHAVIORS_DECLARATION_COMPONENTS_HPP

#include <generated/BehaviorParser.h>
#include <string>

namespace BHVR {
using evEnd = BehaviorParser::Event_endContext*;
using evStart = BehaviorParser::Event_startContext*;
using evName = std::string;

using acStimulus = BehaviorParser::Action_stimulusContext*;
using acResponse = BehaviorParser::Action_responseContext*;
using acDuration = BehaviorParser::Action_durationContext*;
using acTarget = BehaviorParser::Action_targetContext*;

using slType = BehaviorParser::Selector_typeContext*;
using slSelector = BehaviorParser::Selector_selectorContext*;
using slGroup = BehaviorParser::Selector_fromContext*;
using slRequired = BehaviorParser::Selector_requiredContext*;

using lcName = BehaviorParser::Loc_nameContext*;
using lcDimensions = BehaviorParser::Loc_dimensionsContext*;
}  // namespace BHVR

#endif
