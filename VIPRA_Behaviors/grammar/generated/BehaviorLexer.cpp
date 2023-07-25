
// Generated from Behavior.g4 by ANTLR 4.13.0


#include "BehaviorLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct BehaviorLexerStaticData final {
  BehaviorLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  BehaviorLexerStaticData(const BehaviorLexerStaticData&) = delete;
  BehaviorLexerStaticData(BehaviorLexerStaticData&&) = delete;
  BehaviorLexerStaticData& operator=(const BehaviorLexerStaticData&) = delete;
  BehaviorLexerStaticData& operator=(BehaviorLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag behaviorlexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
BehaviorLexerStaticData *behaviorlexerLexerStaticData = nullptr;

void behaviorlexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (behaviorlexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(behaviorlexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<BehaviorLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "COMMENT", 
      "LINE_COMMENT", "WS", "A", "B", "C", "D", "E", "F", "G", "H", "I", 
      "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", 
      "X", "Y", "Z", "COMMA", "COLON", "STATE_VAL", "EVNT", "AN", "AT", 
      "ADD", "AND", "ARE", "AFTER", "ALWAYS", "AROUND", "ACTION", "BEHIND", 
      "CONSIDER", "DECIMAL", "DIRECTION", "DURATION", "END", "ENDS", "ENVIRONMENT", 
      "EVENT", "EXACTLY", "EVERY", "EVERYONE", "ENDING", "FOR", "FROM", 
      "FRONT", "FASTER", "GIVEN", "GOAL", "GROUP", "HAS", "IN", "INTEGER", 
      "IS", "IF", "LENGTH", "LOCATION", "MAX", "METERS", "NAME", "NEAREST", 
      "NORMAL", "NONE", "OBSTACLE", "OCCUR", "OCCURRED", "OCCURRING", "OF", 
      "ON", "OR", "PEDESTRIAN", "PEDESTRIANS", "POSSIBLE", "POSITION", "RADIUS", 
      "RANDOM", "REQUIRED", "RESPONSE", "SCALE", "SELF", "SELECT", "SELECTOR", 
      "SET", "SECOND", "SECONDS", "STATUS", "STARTING", "SLOWER", "STATES", 
      "START", "STATE", "STARTS", "SPEED", "SUBTRACT", "STIMULUS", "TARGET", 
      "TO", "THE", "THAT", "THEN", "THEIR", "THERES", "TYPES", "TYPE", "UNCONDITIONALLY", 
      "VALUE", "VELOCITY", "WHEN", "WHILE", "WIDTH", "WILL", "WITH", "WITHIN", 
      "ID", "NUMBER", "FLOAT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'.'", "'-'", "'{'", "'}'", "'%'", "'('", "')'", "", "", "", "','", 
      "':'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "COMMENT", "LINE_COMMENT", "WS", "COMMA", 
      "COLON", "STATE_VAL", "EVNT", "AN", "AT", "ADD", "AND", "ARE", "AFTER", 
      "ALWAYS", "AROUND", "ACTION", "BEHIND", "CONSIDER", "DECIMAL", "DIRECTION", 
      "DURATION", "END", "ENDS", "ENVIRONMENT", "EVENT", "EXACTLY", "EVERY", 
      "EVERYONE", "ENDING", "FOR", "FROM", "FRONT", "FASTER", "GIVEN", "GOAL", 
      "GROUP", "HAS", "IN", "INTEGER", "IS", "IF", "LENGTH", "LOCATION", 
      "MAX", "METERS", "NAME", "NEAREST", "NORMAL", "NONE", "OBSTACLE", 
      "OCCUR", "OCCURRED", "OCCURRING", "OF", "ON", "OR", "PEDESTRIAN", 
      "PEDESTRIANS", "POSSIBLE", "POSITION", "RADIUS", "RANDOM", "REQUIRED", 
      "RESPONSE", "SCALE", "SELF", "SELECT", "SELECTOR", "SET", "SECOND", 
      "SECONDS", "STATUS", "STARTING", "SLOWER", "STATES", "START", "STATE", 
      "STARTS", "SPEED", "SUBTRACT", "STIMULUS", "TARGET", "TO", "THE", 
      "THAT", "THEN", "THEIR", "THERES", "TYPES", "TYPE", "UNCONDITIONALLY", 
      "VALUE", "VELOCITY", "WHEN", "WHILE", "WIDTH", "WILL", "WITH", "WITHIN", 
      "ID", "NUMBER", "FLOAT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,109,1020,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,
  	7,6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,
  	14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,
  	21,7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,
  	28,7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,
  	35,7,35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,
  	42,7,42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,2,48,7,48,2,
  	49,7,49,2,50,7,50,2,51,7,51,2,52,7,52,2,53,7,53,2,54,7,54,2,55,7,55,2,
  	56,7,56,2,57,7,57,2,58,7,58,2,59,7,59,2,60,7,60,2,61,7,61,2,62,7,62,2,
  	63,7,63,2,64,7,64,2,65,7,65,2,66,7,66,2,67,7,67,2,68,7,68,2,69,7,69,2,
  	70,7,70,2,71,7,71,2,72,7,72,2,73,7,73,2,74,7,74,2,75,7,75,2,76,7,76,2,
  	77,7,77,2,78,7,78,2,79,7,79,2,80,7,80,2,81,7,81,2,82,7,82,2,83,7,83,2,
  	84,7,84,2,85,7,85,2,86,7,86,2,87,7,87,2,88,7,88,2,89,7,89,2,90,7,90,2,
  	91,7,91,2,92,7,92,2,93,7,93,2,94,7,94,2,95,7,95,2,96,7,96,2,97,7,97,2,
  	98,7,98,2,99,7,99,2,100,7,100,2,101,7,101,2,102,7,102,2,103,7,103,2,104,
  	7,104,2,105,7,105,2,106,7,106,2,107,7,107,2,108,7,108,2,109,7,109,2,110,
  	7,110,2,111,7,111,2,112,7,112,2,113,7,113,2,114,7,114,2,115,7,115,2,116,
  	7,116,2,117,7,117,2,118,7,118,2,119,7,119,2,120,7,120,2,121,7,121,2,122,
  	7,122,2,123,7,123,2,124,7,124,2,125,7,125,2,126,7,126,2,127,7,127,2,128,
  	7,128,2,129,7,129,2,130,7,130,2,131,7,131,2,132,7,132,2,133,7,133,2,134,
  	7,134,1,0,1,0,1,1,1,1,1,2,1,2,1,3,1,3,1,4,1,4,1,5,1,5,1,6,1,6,1,7,1,7,
  	1,7,1,7,5,7,290,8,7,10,7,12,7,293,9,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,
  	1,8,5,8,304,8,8,10,8,12,8,307,9,8,1,8,1,8,1,9,4,9,312,8,9,11,9,12,9,313,
  	1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,
  	16,1,16,1,17,1,17,1,18,1,18,1,19,1,19,1,20,1,20,1,21,1,21,1,22,1,22,1,
  	23,1,23,1,24,1,24,1,25,1,25,1,26,1,26,1,27,1,27,1,28,1,28,1,29,1,29,1,
  	30,1,30,1,31,1,31,1,32,1,32,1,33,1,33,1,34,1,34,1,35,1,35,1,36,1,36,1,
  	37,1,37,1,38,1,38,4,38,376,8,38,11,38,12,38,377,1,39,1,39,4,39,382,8,
  	39,11,39,12,39,383,1,40,1,40,1,40,1,40,3,40,390,8,40,1,41,1,41,1,41,1,
  	42,1,42,1,42,1,42,1,43,1,43,1,43,1,43,1,44,1,44,1,44,1,44,1,45,1,45,1,
  	45,1,45,1,45,1,45,1,46,1,46,1,46,1,46,1,46,1,46,1,46,1,47,1,47,1,47,1,
  	47,1,47,1,47,1,47,1,48,1,48,1,48,1,48,1,48,1,48,1,48,1,49,1,49,1,49,1,
  	49,1,49,1,49,1,49,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,50,1,51,1,
  	51,1,51,1,51,1,51,1,51,1,51,1,51,1,52,1,52,1,52,1,52,1,52,1,52,1,52,1,
  	52,1,52,1,52,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,53,1,54,1,54,1,
  	54,1,54,1,55,1,55,1,55,1,55,1,55,1,56,1,56,1,56,1,56,1,56,1,56,1,56,1,
  	56,1,56,1,56,1,56,1,56,1,57,1,57,1,57,1,57,1,57,1,57,1,58,1,58,1,58,1,
  	58,1,58,1,58,1,58,1,58,1,59,1,59,1,59,1,59,1,59,1,59,1,60,1,60,1,60,1,
  	60,1,60,1,60,1,60,1,60,1,60,1,61,1,61,1,61,1,61,1,61,1,61,1,61,1,62,1,
  	62,1,62,1,62,1,63,1,63,1,63,1,63,1,63,1,64,1,64,1,64,1,64,1,64,1,64,1,
  	65,1,65,1,65,1,65,1,65,1,65,1,65,1,66,1,66,1,66,1,66,1,66,1,66,1,67,1,
  	67,1,67,1,67,1,67,1,68,1,68,1,68,1,68,1,68,1,68,1,69,1,69,1,69,1,69,1,
  	70,1,70,1,70,1,71,1,71,1,71,1,71,1,71,1,71,1,71,1,71,1,72,1,72,1,72,1,
  	73,1,73,1,73,1,74,1,74,1,74,1,74,1,74,1,74,1,74,1,75,1,75,1,75,1,75,1,
  	75,1,75,1,75,1,75,1,75,1,76,1,76,1,76,1,76,1,77,1,77,1,77,1,77,1,77,1,
  	77,1,77,1,78,1,78,1,78,1,78,1,78,1,79,1,79,1,79,1,79,1,79,1,79,1,79,1,
  	79,1,80,1,80,1,80,1,80,1,80,1,80,1,80,1,81,1,81,1,81,1,81,1,81,1,82,1,
  	82,1,82,1,82,1,82,1,82,1,82,1,82,1,82,1,83,1,83,1,83,1,83,1,83,1,83,1,
  	84,1,84,1,84,1,84,1,84,1,84,1,84,1,84,1,84,1,85,1,85,1,85,1,85,1,85,1,
  	85,1,85,1,85,1,85,1,85,1,86,1,86,1,86,1,87,1,87,1,87,1,88,1,88,1,88,1,
  	89,1,89,1,89,1,89,1,89,1,89,1,89,1,89,1,89,1,89,1,89,1,90,1,90,1,90,1,
  	90,1,90,1,90,1,90,1,90,1,90,1,90,1,90,1,90,1,91,1,91,1,91,1,91,1,91,1,
  	91,1,91,1,91,1,91,1,92,1,92,1,92,1,92,1,92,1,92,1,92,1,92,1,92,1,93,1,
  	93,1,93,1,93,1,93,1,93,1,93,1,94,1,94,1,94,1,94,1,94,1,94,1,94,1,95,1,
  	95,1,95,1,95,1,95,1,95,1,95,1,95,1,95,1,96,1,96,1,96,1,96,1,96,1,96,1,
  	96,1,96,1,96,1,97,1,97,1,97,1,97,1,97,1,97,1,98,1,98,1,98,1,98,1,98,1,
  	99,1,99,1,99,1,99,1,99,1,99,1,99,1,100,1,100,1,100,1,100,1,100,1,100,
  	1,100,1,100,1,100,1,101,1,101,1,101,1,101,1,102,1,102,1,102,1,102,1,102,
  	1,102,1,102,1,103,1,103,1,103,1,103,1,103,1,103,1,103,1,103,1,104,1,104,
  	1,104,1,104,1,104,1,104,1,104,1,105,1,105,1,105,1,105,1,105,1,105,1,105,
  	1,105,1,105,1,106,1,106,1,106,1,106,1,106,1,106,1,106,1,107,1,107,1,107,
  	1,107,1,107,1,107,1,107,1,108,1,108,1,108,1,108,1,108,1,108,1,109,1,109,
  	1,109,1,109,1,109,1,109,1,110,1,110,1,110,1,110,1,110,1,110,1,110,1,111,
  	1,111,1,111,1,111,1,111,1,111,1,112,1,112,1,112,1,112,1,112,1,112,1,112,
  	1,112,1,112,1,113,1,113,1,113,1,113,1,113,1,113,1,113,1,113,1,113,1,114,
  	1,114,1,114,1,114,1,114,1,114,1,114,1,115,1,115,1,115,1,116,1,116,1,116,
  	1,116,1,117,1,117,1,117,1,117,1,117,1,118,1,118,1,118,1,118,1,118,1,119,
  	1,119,1,119,1,119,1,119,1,119,1,120,1,120,1,120,1,120,1,120,1,120,1,120,
  	1,121,1,121,1,121,1,121,1,121,1,121,1,122,1,122,1,122,1,122,1,122,1,123,
  	1,123,1,123,1,123,1,123,1,123,1,123,1,123,1,123,1,123,1,123,1,123,1,123,
  	1,123,1,123,1,123,1,124,1,124,1,124,1,124,1,124,1,124,1,125,1,125,1,125,
  	1,125,1,125,1,125,1,125,1,125,1,125,1,126,1,126,1,126,1,126,1,126,1,127,
  	1,127,1,127,1,127,1,127,1,127,1,128,1,128,1,128,1,128,1,128,1,128,1,129,
  	1,129,1,129,1,129,1,129,1,130,1,130,1,130,1,130,1,130,1,131,1,131,1,131,
  	1,131,1,131,1,131,1,131,1,132,4,132,995,8,132,11,132,12,132,996,1,133,
  	3,133,1000,8,133,1,133,4,133,1003,8,133,11,133,12,133,1004,1,134,3,134,
  	1008,8,134,1,134,4,134,1011,8,134,11,134,12,134,1012,1,134,1,134,4,134,
  	1017,8,134,11,134,12,134,1018,1,291,0,135,1,1,3,2,5,3,7,4,9,5,11,6,13,
  	7,15,8,17,9,19,10,21,0,23,0,25,0,27,0,29,0,31,0,33,0,35,0,37,0,39,0,41,
  	0,43,0,45,0,47,0,49,0,51,0,53,0,55,0,57,0,59,0,61,0,63,0,65,0,67,0,69,
  	0,71,0,73,11,75,12,77,13,79,14,81,15,83,16,85,17,87,18,89,19,91,20,93,
  	21,95,22,97,23,99,24,101,25,103,26,105,27,107,28,109,29,111,30,113,31,
  	115,32,117,33,119,34,121,35,123,36,125,37,127,38,129,39,131,40,133,41,
  	135,42,137,43,139,44,141,45,143,46,145,47,147,48,149,49,151,50,153,51,
  	155,52,157,53,159,54,161,55,163,56,165,57,167,58,169,59,171,60,173,61,
  	175,62,177,63,179,64,181,65,183,66,185,67,187,68,189,69,191,70,193,71,
  	195,72,197,73,199,74,201,75,203,76,205,77,207,78,209,79,211,80,213,81,
  	215,82,217,83,219,84,221,85,223,86,225,87,227,88,229,89,231,90,233,91,
  	235,92,237,93,239,94,241,95,243,96,245,97,247,98,249,99,251,100,253,101,
  	255,102,257,103,259,104,261,105,263,106,265,107,267,108,269,109,1,0,30,
  	2,0,10,10,13,13,3,0,9,10,13,13,32,32,2,0,65,65,97,97,2,0,66,66,98,98,
  	2,0,67,67,99,99,2,0,68,68,100,100,2,0,69,69,101,101,2,0,70,70,102,102,
  	2,0,71,71,103,103,2,0,72,72,104,104,2,0,73,73,105,105,2,0,74,74,106,106,
  	2,0,75,75,107,107,2,0,76,76,108,108,2,0,77,77,109,109,2,0,78,78,110,110,
  	2,0,79,79,111,111,2,0,80,80,112,112,2,0,81,81,113,113,2,0,82,82,114,114,
  	2,0,83,83,115,115,2,0,84,84,116,116,2,0,85,85,117,117,2,0,86,86,118,118,
  	2,0,87,87,119,119,2,0,88,88,120,120,2,0,89,89,121,121,2,0,90,90,122,122,
  	4,0,45,45,65,90,95,95,97,122,1,0,48,57,1005,0,1,1,0,0,0,0,3,1,0,0,0,0,
  	5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,
  	0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,73,1,0,0,0,0,75,1,0,0,0,0,77,1,0,0,0,
  	0,79,1,0,0,0,0,81,1,0,0,0,0,83,1,0,0,0,0,85,1,0,0,0,0,87,1,0,0,0,0,89,
  	1,0,0,0,0,91,1,0,0,0,0,93,1,0,0,0,0,95,1,0,0,0,0,97,1,0,0,0,0,99,1,0,
  	0,0,0,101,1,0,0,0,0,103,1,0,0,0,0,105,1,0,0,0,0,107,1,0,0,0,0,109,1,0,
  	0,0,0,111,1,0,0,0,0,113,1,0,0,0,0,115,1,0,0,0,0,117,1,0,0,0,0,119,1,0,
  	0,0,0,121,1,0,0,0,0,123,1,0,0,0,0,125,1,0,0,0,0,127,1,0,0,0,0,129,1,0,
  	0,0,0,131,1,0,0,0,0,133,1,0,0,0,0,135,1,0,0,0,0,137,1,0,0,0,0,139,1,0,
  	0,0,0,141,1,0,0,0,0,143,1,0,0,0,0,145,1,0,0,0,0,147,1,0,0,0,0,149,1,0,
  	0,0,0,151,1,0,0,0,0,153,1,0,0,0,0,155,1,0,0,0,0,157,1,0,0,0,0,159,1,0,
  	0,0,0,161,1,0,0,0,0,163,1,0,0,0,0,165,1,0,0,0,0,167,1,0,0,0,0,169,1,0,
  	0,0,0,171,1,0,0,0,0,173,1,0,0,0,0,175,1,0,0,0,0,177,1,0,0,0,0,179,1,0,
  	0,0,0,181,1,0,0,0,0,183,1,0,0,0,0,185,1,0,0,0,0,187,1,0,0,0,0,189,1,0,
  	0,0,0,191,1,0,0,0,0,193,1,0,0,0,0,195,1,0,0,0,0,197,1,0,0,0,0,199,1,0,
  	0,0,0,201,1,0,0,0,0,203,1,0,0,0,0,205,1,0,0,0,0,207,1,0,0,0,0,209,1,0,
  	0,0,0,211,1,0,0,0,0,213,1,0,0,0,0,215,1,0,0,0,0,217,1,0,0,0,0,219,1,0,
  	0,0,0,221,1,0,0,0,0,223,1,0,0,0,0,225,1,0,0,0,0,227,1,0,0,0,0,229,1,0,
  	0,0,0,231,1,0,0,0,0,233,1,0,0,0,0,235,1,0,0,0,0,237,1,0,0,0,0,239,1,0,
  	0,0,0,241,1,0,0,0,0,243,1,0,0,0,0,245,1,0,0,0,0,247,1,0,0,0,0,249,1,0,
  	0,0,0,251,1,0,0,0,0,253,1,0,0,0,0,255,1,0,0,0,0,257,1,0,0,0,0,259,1,0,
  	0,0,0,261,1,0,0,0,0,263,1,0,0,0,0,265,1,0,0,0,0,267,1,0,0,0,0,269,1,0,
  	0,0,1,271,1,0,0,0,3,273,1,0,0,0,5,275,1,0,0,0,7,277,1,0,0,0,9,279,1,0,
  	0,0,11,281,1,0,0,0,13,283,1,0,0,0,15,285,1,0,0,0,17,299,1,0,0,0,19,311,
  	1,0,0,0,21,317,1,0,0,0,23,319,1,0,0,0,25,321,1,0,0,0,27,323,1,0,0,0,29,
  	325,1,0,0,0,31,327,1,0,0,0,33,329,1,0,0,0,35,331,1,0,0,0,37,333,1,0,0,
  	0,39,335,1,0,0,0,41,337,1,0,0,0,43,339,1,0,0,0,45,341,1,0,0,0,47,343,
  	1,0,0,0,49,345,1,0,0,0,51,347,1,0,0,0,53,349,1,0,0,0,55,351,1,0,0,0,57,
  	353,1,0,0,0,59,355,1,0,0,0,61,357,1,0,0,0,63,359,1,0,0,0,65,361,1,0,0,
  	0,67,363,1,0,0,0,69,365,1,0,0,0,71,367,1,0,0,0,73,369,1,0,0,0,75,371,
  	1,0,0,0,77,373,1,0,0,0,79,379,1,0,0,0,81,389,1,0,0,0,83,391,1,0,0,0,85,
  	394,1,0,0,0,87,398,1,0,0,0,89,402,1,0,0,0,91,406,1,0,0,0,93,412,1,0,0,
  	0,95,419,1,0,0,0,97,426,1,0,0,0,99,433,1,0,0,0,101,440,1,0,0,0,103,449,
  	1,0,0,0,105,457,1,0,0,0,107,467,1,0,0,0,109,476,1,0,0,0,111,480,1,0,0,
  	0,113,485,1,0,0,0,115,497,1,0,0,0,117,503,1,0,0,0,119,511,1,0,0,0,121,
  	517,1,0,0,0,123,526,1,0,0,0,125,533,1,0,0,0,127,537,1,0,0,0,129,542,1,
  	0,0,0,131,548,1,0,0,0,133,555,1,0,0,0,135,561,1,0,0,0,137,566,1,0,0,0,
  	139,572,1,0,0,0,141,576,1,0,0,0,143,579,1,0,0,0,145,587,1,0,0,0,147,590,
  	1,0,0,0,149,593,1,0,0,0,151,600,1,0,0,0,153,609,1,0,0,0,155,613,1,0,0,
  	0,157,620,1,0,0,0,159,625,1,0,0,0,161,633,1,0,0,0,163,640,1,0,0,0,165,
  	645,1,0,0,0,167,654,1,0,0,0,169,660,1,0,0,0,171,669,1,0,0,0,173,679,1,
  	0,0,0,175,682,1,0,0,0,177,685,1,0,0,0,179,688,1,0,0,0,181,699,1,0,0,0,
  	183,711,1,0,0,0,185,720,1,0,0,0,187,729,1,0,0,0,189,736,1,0,0,0,191,743,
  	1,0,0,0,193,752,1,0,0,0,195,761,1,0,0,0,197,767,1,0,0,0,199,772,1,0,0,
  	0,201,779,1,0,0,0,203,788,1,0,0,0,205,792,1,0,0,0,207,799,1,0,0,0,209,
  	807,1,0,0,0,211,814,1,0,0,0,213,823,1,0,0,0,215,830,1,0,0,0,217,837,1,
  	0,0,0,219,843,1,0,0,0,221,849,1,0,0,0,223,856,1,0,0,0,225,862,1,0,0,0,
  	227,871,1,0,0,0,229,880,1,0,0,0,231,887,1,0,0,0,233,890,1,0,0,0,235,894,
  	1,0,0,0,237,899,1,0,0,0,239,904,1,0,0,0,241,910,1,0,0,0,243,917,1,0,0,
  	0,245,923,1,0,0,0,247,928,1,0,0,0,249,944,1,0,0,0,251,950,1,0,0,0,253,
  	959,1,0,0,0,255,964,1,0,0,0,257,970,1,0,0,0,259,976,1,0,0,0,261,981,1,
  	0,0,0,263,986,1,0,0,0,265,994,1,0,0,0,267,999,1,0,0,0,269,1007,1,0,0,
  	0,271,272,5,46,0,0,272,2,1,0,0,0,273,274,5,45,0,0,274,4,1,0,0,0,275,276,
  	5,123,0,0,276,6,1,0,0,0,277,278,5,125,0,0,278,8,1,0,0,0,279,280,5,37,
  	0,0,280,10,1,0,0,0,281,282,5,40,0,0,282,12,1,0,0,0,283,284,5,41,0,0,284,
  	14,1,0,0,0,285,286,5,47,0,0,286,287,5,42,0,0,287,291,1,0,0,0,288,290,
  	9,0,0,0,289,288,1,0,0,0,290,293,1,0,0,0,291,292,1,0,0,0,291,289,1,0,0,
  	0,292,294,1,0,0,0,293,291,1,0,0,0,294,295,5,42,0,0,295,296,5,47,0,0,296,
  	297,1,0,0,0,297,298,6,7,0,0,298,16,1,0,0,0,299,300,5,47,0,0,300,301,5,
  	47,0,0,301,305,1,0,0,0,302,304,8,0,0,0,303,302,1,0,0,0,304,307,1,0,0,
  	0,305,303,1,0,0,0,305,306,1,0,0,0,306,308,1,0,0,0,307,305,1,0,0,0,308,
  	309,6,8,0,0,309,18,1,0,0,0,310,312,7,1,0,0,311,310,1,0,0,0,312,313,1,
  	0,0,0,313,311,1,0,0,0,313,314,1,0,0,0,314,315,1,0,0,0,315,316,6,9,1,0,
  	316,20,1,0,0,0,317,318,7,2,0,0,318,22,1,0,0,0,319,320,7,3,0,0,320,24,
  	1,0,0,0,321,322,7,4,0,0,322,26,1,0,0,0,323,324,7,5,0,0,324,28,1,0,0,0,
  	325,326,7,6,0,0,326,30,1,0,0,0,327,328,7,7,0,0,328,32,1,0,0,0,329,330,
  	7,8,0,0,330,34,1,0,0,0,331,332,7,9,0,0,332,36,1,0,0,0,333,334,7,10,0,
  	0,334,38,1,0,0,0,335,336,7,11,0,0,336,40,1,0,0,0,337,338,7,12,0,0,338,
  	42,1,0,0,0,339,340,7,13,0,0,340,44,1,0,0,0,341,342,7,14,0,0,342,46,1,
  	0,0,0,343,344,7,15,0,0,344,48,1,0,0,0,345,346,7,16,0,0,346,50,1,0,0,0,
  	347,348,7,17,0,0,348,52,1,0,0,0,349,350,7,18,0,0,350,54,1,0,0,0,351,352,
  	7,19,0,0,352,56,1,0,0,0,353,354,7,20,0,0,354,58,1,0,0,0,355,356,7,21,
  	0,0,356,60,1,0,0,0,357,358,7,22,0,0,358,62,1,0,0,0,359,360,7,23,0,0,360,
  	64,1,0,0,0,361,362,7,24,0,0,362,66,1,0,0,0,363,364,7,25,0,0,364,68,1,
  	0,0,0,365,366,7,26,0,0,366,70,1,0,0,0,367,368,7,27,0,0,368,72,1,0,0,0,
  	369,370,5,44,0,0,370,74,1,0,0,0,371,372,5,58,0,0,372,76,1,0,0,0,373,375,
  	5,35,0,0,374,376,7,28,0,0,375,374,1,0,0,0,376,377,1,0,0,0,377,375,1,0,
  	0,0,377,378,1,0,0,0,378,78,1,0,0,0,379,381,5,33,0,0,380,382,7,28,0,0,
  	381,380,1,0,0,0,382,383,1,0,0,0,383,381,1,0,0,0,383,384,1,0,0,0,384,80,
  	1,0,0,0,385,390,3,21,10,0,386,387,3,21,10,0,387,388,3,47,23,0,388,390,
  	1,0,0,0,389,385,1,0,0,0,389,386,1,0,0,0,390,82,1,0,0,0,391,392,3,21,10,
  	0,392,393,3,59,29,0,393,84,1,0,0,0,394,395,3,21,10,0,395,396,3,27,13,
  	0,396,397,3,27,13,0,397,86,1,0,0,0,398,399,3,21,10,0,399,400,3,47,23,
  	0,400,401,3,27,13,0,401,88,1,0,0,0,402,403,3,21,10,0,403,404,3,55,27,
  	0,404,405,3,29,14,0,405,90,1,0,0,0,406,407,3,21,10,0,407,408,3,31,15,
  	0,408,409,3,59,29,0,409,410,3,29,14,0,410,411,3,55,27,0,411,92,1,0,0,
  	0,412,413,3,21,10,0,413,414,3,43,21,0,414,415,3,65,32,0,415,416,3,21,
  	10,0,416,417,3,69,34,0,417,418,3,57,28,0,418,94,1,0,0,0,419,420,3,21,
  	10,0,420,421,3,55,27,0,421,422,3,49,24,0,422,423,3,61,30,0,423,424,3,
  	47,23,0,424,425,3,27,13,0,425,96,1,0,0,0,426,427,3,21,10,0,427,428,3,
  	25,12,0,428,429,3,59,29,0,429,430,3,37,18,0,430,431,3,49,24,0,431,432,
  	3,47,23,0,432,98,1,0,0,0,433,434,3,23,11,0,434,435,3,29,14,0,435,436,
  	3,35,17,0,436,437,3,37,18,0,437,438,3,47,23,0,438,439,3,27,13,0,439,100,
  	1,0,0,0,440,441,3,25,12,0,441,442,3,49,24,0,442,443,3,47,23,0,443,444,
  	3,57,28,0,444,445,3,37,18,0,445,446,3,27,13,0,446,447,3,29,14,0,447,448,
  	3,55,27,0,448,102,1,0,0,0,449,450,3,27,13,0,450,451,3,29,14,0,451,452,
  	3,25,12,0,452,453,3,37,18,0,453,454,3,45,22,0,454,455,3,21,10,0,455,456,
  	3,43,21,0,456,104,1,0,0,0,457,458,3,27,13,0,458,459,3,37,18,0,459,460,
  	3,55,27,0,460,461,3,29,14,0,461,462,3,25,12,0,462,463,3,59,29,0,463,464,
  	3,37,18,0,464,465,3,49,24,0,465,466,3,47,23,0,466,106,1,0,0,0,467,468,
  	3,27,13,0,468,469,3,61,30,0,469,470,3,55,27,0,470,471,3,21,10,0,471,472,
  	3,59,29,0,472,473,3,37,18,0,473,474,3,49,24,0,474,475,3,47,23,0,475,108,
  	1,0,0,0,476,477,3,29,14,0,477,478,3,47,23,0,478,479,3,27,13,0,479,110,
  	1,0,0,0,480,481,3,29,14,0,481,482,3,47,23,0,482,483,3,27,13,0,483,484,
  	3,57,28,0,484,112,1,0,0,0,485,486,3,29,14,0,486,487,3,47,23,0,487,488,
  	3,63,31,0,488,489,3,37,18,0,489,490,3,55,27,0,490,491,3,49,24,0,491,492,
  	3,47,23,0,492,493,3,45,22,0,493,494,3,29,14,0,494,495,3,47,23,0,495,496,
  	3,59,29,0,496,114,1,0,0,0,497,498,3,29,14,0,498,499,3,63,31,0,499,500,
  	3,29,14,0,500,501,3,47,23,0,501,502,3,59,29,0,502,116,1,0,0,0,503,504,
  	3,29,14,0,504,505,3,67,33,0,505,506,3,21,10,0,506,507,3,25,12,0,507,508,
  	3,59,29,0,508,509,3,43,21,0,509,510,3,69,34,0,510,118,1,0,0,0,511,512,
  	3,29,14,0,512,513,3,63,31,0,513,514,3,29,14,0,514,515,3,55,27,0,515,516,
  	3,69,34,0,516,120,1,0,0,0,517,518,3,29,14,0,518,519,3,63,31,0,519,520,
  	3,29,14,0,520,521,3,55,27,0,521,522,3,69,34,0,522,523,3,49,24,0,523,524,
  	3,47,23,0,524,525,3,29,14,0,525,122,1,0,0,0,526,527,3,29,14,0,527,528,
  	3,47,23,0,528,529,3,27,13,0,529,530,3,37,18,0,530,531,3,47,23,0,531,532,
  	3,33,16,0,532,124,1,0,0,0,533,534,3,31,15,0,534,535,3,49,24,0,535,536,
  	3,55,27,0,536,126,1,0,0,0,537,538,3,31,15,0,538,539,3,55,27,0,539,540,
  	3,49,24,0,540,541,3,45,22,0,541,128,1,0,0,0,542,543,3,31,15,0,543,544,
  	3,55,27,0,544,545,3,49,24,0,545,546,3,47,23,0,546,547,3,59,29,0,547,130,
  	1,0,0,0,548,549,3,31,15,0,549,550,3,21,10,0,550,551,3,57,28,0,551,552,
  	3,59,29,0,552,553,3,29,14,0,553,554,3,55,27,0,554,132,1,0,0,0,555,556,
  	3,33,16,0,556,557,3,37,18,0,557,558,3,63,31,0,558,559,3,29,14,0,559,560,
  	3,47,23,0,560,134,1,0,0,0,561,562,3,33,16,0,562,563,3,49,24,0,563,564,
  	3,21,10,0,564,565,3,43,21,0,565,136,1,0,0,0,566,567,3,33,16,0,567,568,
  	3,55,27,0,568,569,3,49,24,0,569,570,3,61,30,0,570,571,3,51,25,0,571,138,
  	1,0,0,0,572,573,3,35,17,0,573,574,3,21,10,0,574,575,3,57,28,0,575,140,
  	1,0,0,0,576,577,3,37,18,0,577,578,3,47,23,0,578,142,1,0,0,0,579,580,3,
  	37,18,0,580,581,3,47,23,0,581,582,3,59,29,0,582,583,3,29,14,0,583,584,
  	3,33,16,0,584,585,3,29,14,0,585,586,3,55,27,0,586,144,1,0,0,0,587,588,
  	3,37,18,0,588,589,3,57,28,0,589,146,1,0,0,0,590,591,3,37,18,0,591,592,
  	3,31,15,0,592,148,1,0,0,0,593,594,3,43,21,0,594,595,3,29,14,0,595,596,
  	3,47,23,0,596,597,3,33,16,0,597,598,3,59,29,0,598,599,3,35,17,0,599,150,
  	1,0,0,0,600,601,3,43,21,0,601,602,3,49,24,0,602,603,3,25,12,0,603,604,
  	3,21,10,0,604,605,3,59,29,0,605,606,3,37,18,0,606,607,3,49,24,0,607,608,
  	3,47,23,0,608,152,1,0,0,0,609,610,3,45,22,0,610,611,3,21,10,0,611,612,
  	3,67,33,0,612,154,1,0,0,0,613,614,3,45,22,0,614,615,3,29,14,0,615,616,
  	3,59,29,0,616,617,3,29,14,0,617,618,3,55,27,0,618,619,3,57,28,0,619,156,
  	1,0,0,0,620,621,3,47,23,0,621,622,3,21,10,0,622,623,3,45,22,0,623,624,
  	3,29,14,0,624,158,1,0,0,0,625,626,3,47,23,0,626,627,3,29,14,0,627,628,
  	3,21,10,0,628,629,3,55,27,0,629,630,3,29,14,0,630,631,3,57,28,0,631,632,
  	3,59,29,0,632,160,1,0,0,0,633,634,3,47,23,0,634,635,3,49,24,0,635,636,
  	3,55,27,0,636,637,3,45,22,0,637,638,3,21,10,0,638,639,3,43,21,0,639,162,
  	1,0,0,0,640,641,3,47,23,0,641,642,3,49,24,0,642,643,3,47,23,0,643,644,
  	3,29,14,0,644,164,1,0,0,0,645,646,3,49,24,0,646,647,3,23,11,0,647,648,
  	3,57,28,0,648,649,3,59,29,0,649,650,3,21,10,0,650,651,3,25,12,0,651,652,
  	3,43,21,0,652,653,3,29,14,0,653,166,1,0,0,0,654,655,3,49,24,0,655,656,
  	3,25,12,0,656,657,3,25,12,0,657,658,3,61,30,0,658,659,3,55,27,0,659,168,
  	1,0,0,0,660,661,3,49,24,0,661,662,3,25,12,0,662,663,3,25,12,0,663,664,
  	3,61,30,0,664,665,3,55,27,0,665,666,3,55,27,0,666,667,3,29,14,0,667,668,
  	3,27,13,0,668,170,1,0,0,0,669,670,3,49,24,0,670,671,3,25,12,0,671,672,
  	3,25,12,0,672,673,3,61,30,0,673,674,3,55,27,0,674,675,3,55,27,0,675,676,
  	3,37,18,0,676,677,3,47,23,0,677,678,3,33,16,0,678,172,1,0,0,0,679,680,
  	3,49,24,0,680,681,3,31,15,0,681,174,1,0,0,0,682,683,3,49,24,0,683,684,
  	3,47,23,0,684,176,1,0,0,0,685,686,3,49,24,0,686,687,3,55,27,0,687,178,
  	1,0,0,0,688,689,3,51,25,0,689,690,3,29,14,0,690,691,3,27,13,0,691,692,
  	3,29,14,0,692,693,3,57,28,0,693,694,3,59,29,0,694,695,3,55,27,0,695,696,
  	3,37,18,0,696,697,3,21,10,0,697,698,3,47,23,0,698,180,1,0,0,0,699,700,
  	3,51,25,0,700,701,3,29,14,0,701,702,3,27,13,0,702,703,3,29,14,0,703,704,
  	3,57,28,0,704,705,3,59,29,0,705,706,3,55,27,0,706,707,3,37,18,0,707,708,
  	3,21,10,0,708,709,3,47,23,0,709,710,3,57,28,0,710,182,1,0,0,0,711,712,
  	3,51,25,0,712,713,3,49,24,0,713,714,3,57,28,0,714,715,3,57,28,0,715,716,
  	3,37,18,0,716,717,3,23,11,0,717,718,3,43,21,0,718,719,3,29,14,0,719,184,
  	1,0,0,0,720,721,3,51,25,0,721,722,3,49,24,0,722,723,3,57,28,0,723,724,
  	3,37,18,0,724,725,3,59,29,0,725,726,3,37,18,0,726,727,3,49,24,0,727,728,
  	3,47,23,0,728,186,1,0,0,0,729,730,3,55,27,0,730,731,3,21,10,0,731,732,
  	3,27,13,0,732,733,3,37,18,0,733,734,3,61,30,0,734,735,3,57,28,0,735,188,
  	1,0,0,0,736,737,3,55,27,0,737,738,3,21,10,0,738,739,3,47,23,0,739,740,
  	3,27,13,0,740,741,3,49,24,0,741,742,3,45,22,0,742,190,1,0,0,0,743,744,
  	3,55,27,0,744,745,3,29,14,0,745,746,3,53,26,0,746,747,3,61,30,0,747,748,
  	3,37,18,0,748,749,3,55,27,0,749,750,3,29,14,0,750,751,3,27,13,0,751,192,
  	1,0,0,0,752,753,3,55,27,0,753,754,3,29,14,0,754,755,3,57,28,0,755,756,
  	3,51,25,0,756,757,3,49,24,0,757,758,3,47,23,0,758,759,3,57,28,0,759,760,
  	3,29,14,0,760,194,1,0,0,0,761,762,3,57,28,0,762,763,3,25,12,0,763,764,
  	3,21,10,0,764,765,3,43,21,0,765,766,3,29,14,0,766,196,1,0,0,0,767,768,
  	3,57,28,0,768,769,3,29,14,0,769,770,3,43,21,0,770,771,3,31,15,0,771,198,
  	1,0,0,0,772,773,3,57,28,0,773,774,3,29,14,0,774,775,3,43,21,0,775,776,
  	3,29,14,0,776,777,3,25,12,0,777,778,3,59,29,0,778,200,1,0,0,0,779,780,
  	3,57,28,0,780,781,3,29,14,0,781,782,3,43,21,0,782,783,3,29,14,0,783,784,
  	3,25,12,0,784,785,3,59,29,0,785,786,3,49,24,0,786,787,3,55,27,0,787,202,
  	1,0,0,0,788,789,3,57,28,0,789,790,3,29,14,0,790,791,3,59,29,0,791,204,
  	1,0,0,0,792,793,3,57,28,0,793,794,3,29,14,0,794,795,3,25,12,0,795,796,
  	3,49,24,0,796,797,3,47,23,0,797,798,3,27,13,0,798,206,1,0,0,0,799,800,
  	3,57,28,0,800,801,3,29,14,0,801,802,3,25,12,0,802,803,3,49,24,0,803,804,
  	3,47,23,0,804,805,3,27,13,0,805,806,3,57,28,0,806,208,1,0,0,0,807,808,
  	3,57,28,0,808,809,3,59,29,0,809,810,3,21,10,0,810,811,3,59,29,0,811,812,
  	3,61,30,0,812,813,3,57,28,0,813,210,1,0,0,0,814,815,3,57,28,0,815,816,
  	3,59,29,0,816,817,3,21,10,0,817,818,3,55,27,0,818,819,3,59,29,0,819,820,
  	3,37,18,0,820,821,3,47,23,0,821,822,3,33,16,0,822,212,1,0,0,0,823,824,
  	3,57,28,0,824,825,3,43,21,0,825,826,3,49,24,0,826,827,3,65,32,0,827,828,
  	3,29,14,0,828,829,3,55,27,0,829,214,1,0,0,0,830,831,3,57,28,0,831,832,
  	3,59,29,0,832,833,3,21,10,0,833,834,3,59,29,0,834,835,3,29,14,0,835,836,
  	3,57,28,0,836,216,1,0,0,0,837,838,3,57,28,0,838,839,3,59,29,0,839,840,
  	3,21,10,0,840,841,3,55,27,0,841,842,3,59,29,0,842,218,1,0,0,0,843,844,
  	3,57,28,0,844,845,3,59,29,0,845,846,3,21,10,0,846,847,3,59,29,0,847,848,
  	3,29,14,0,848,220,1,0,0,0,849,850,3,57,28,0,850,851,3,59,29,0,851,852,
  	3,21,10,0,852,853,3,55,27,0,853,854,3,59,29,0,854,855,3,57,28,0,855,222,
  	1,0,0,0,856,857,3,57,28,0,857,858,3,51,25,0,858,859,3,29,14,0,859,860,
  	3,29,14,0,860,861,3,27,13,0,861,224,1,0,0,0,862,863,3,57,28,0,863,864,
  	3,61,30,0,864,865,3,23,11,0,865,866,3,59,29,0,866,867,3,55,27,0,867,868,
  	3,21,10,0,868,869,3,25,12,0,869,870,3,59,29,0,870,226,1,0,0,0,871,872,
  	3,57,28,0,872,873,3,59,29,0,873,874,3,37,18,0,874,875,3,45,22,0,875,876,
  	3,61,30,0,876,877,3,43,21,0,877,878,3,61,30,0,878,879,3,57,28,0,879,228,
  	1,0,0,0,880,881,3,59,29,0,881,882,3,21,10,0,882,883,3,55,27,0,883,884,
  	3,33,16,0,884,885,3,29,14,0,885,886,3,59,29,0,886,230,1,0,0,0,887,888,
  	3,59,29,0,888,889,3,49,24,0,889,232,1,0,0,0,890,891,3,59,29,0,891,892,
  	3,35,17,0,892,893,3,29,14,0,893,234,1,0,0,0,894,895,3,59,29,0,895,896,
  	3,35,17,0,896,897,3,21,10,0,897,898,3,59,29,0,898,236,1,0,0,0,899,900,
  	3,59,29,0,900,901,3,35,17,0,901,902,3,29,14,0,902,903,3,47,23,0,903,238,
  	1,0,0,0,904,905,3,59,29,0,905,906,3,35,17,0,906,907,3,29,14,0,907,908,
  	3,37,18,0,908,909,3,55,27,0,909,240,1,0,0,0,910,911,3,59,29,0,911,912,
  	3,35,17,0,912,913,3,29,14,0,913,914,3,55,27,0,914,915,3,29,14,0,915,916,
  	3,57,28,0,916,242,1,0,0,0,917,918,3,59,29,0,918,919,3,69,34,0,919,920,
  	3,51,25,0,920,921,3,29,14,0,921,922,3,57,28,0,922,244,1,0,0,0,923,924,
  	3,59,29,0,924,925,3,69,34,0,925,926,3,51,25,0,926,927,3,29,14,0,927,246,
  	1,0,0,0,928,929,3,61,30,0,929,930,3,47,23,0,930,931,3,25,12,0,931,932,
  	3,49,24,0,932,933,3,47,23,0,933,934,3,27,13,0,934,935,3,37,18,0,935,936,
  	3,59,29,0,936,937,3,37,18,0,937,938,3,49,24,0,938,939,3,47,23,0,939,940,
  	3,21,10,0,940,941,3,43,21,0,941,942,3,43,21,0,942,943,3,69,34,0,943,248,
  	1,0,0,0,944,945,3,63,31,0,945,946,3,21,10,0,946,947,3,43,21,0,947,948,
  	3,61,30,0,948,949,3,29,14,0,949,250,1,0,0,0,950,951,3,63,31,0,951,952,
  	3,29,14,0,952,953,3,43,21,0,953,954,3,49,24,0,954,955,3,25,12,0,955,956,
  	3,37,18,0,956,957,3,59,29,0,957,958,3,69,34,0,958,252,1,0,0,0,959,960,
  	3,65,32,0,960,961,3,35,17,0,961,962,3,29,14,0,962,963,3,47,23,0,963,254,
  	1,0,0,0,964,965,3,65,32,0,965,966,3,35,17,0,966,967,3,37,18,0,967,968,
  	3,43,21,0,968,969,3,29,14,0,969,256,1,0,0,0,970,971,3,65,32,0,971,972,
  	3,37,18,0,972,973,3,27,13,0,973,974,3,59,29,0,974,975,3,35,17,0,975,258,
  	1,0,0,0,976,977,3,65,32,0,977,978,3,37,18,0,978,979,3,43,21,0,979,980,
  	3,43,21,0,980,260,1,0,0,0,981,982,3,65,32,0,982,983,3,37,18,0,983,984,
  	3,59,29,0,984,985,3,35,17,0,985,262,1,0,0,0,986,987,3,65,32,0,987,988,
  	3,37,18,0,988,989,3,59,29,0,989,990,3,35,17,0,990,991,3,37,18,0,991,992,
  	3,47,23,0,992,264,1,0,0,0,993,995,7,28,0,0,994,993,1,0,0,0,995,996,1,
  	0,0,0,996,994,1,0,0,0,996,997,1,0,0,0,997,266,1,0,0,0,998,1000,5,45,0,
  	0,999,998,1,0,0,0,999,1000,1,0,0,0,1000,1002,1,0,0,0,1001,1003,7,29,0,
  	0,1002,1001,1,0,0,0,1003,1004,1,0,0,0,1004,1002,1,0,0,0,1004,1005,1,0,
  	0,0,1005,268,1,0,0,0,1006,1008,5,45,0,0,1007,1006,1,0,0,0,1007,1008,1,
  	0,0,0,1008,1010,1,0,0,0,1009,1011,7,29,0,0,1010,1009,1,0,0,0,1011,1012,
  	1,0,0,0,1012,1010,1,0,0,0,1012,1013,1,0,0,0,1013,1014,1,0,0,0,1014,1016,
  	5,46,0,0,1015,1017,7,29,0,0,1016,1015,1,0,0,0,1017,1018,1,0,0,0,1018,
  	1016,1,0,0,0,1018,1019,1,0,0,0,1019,270,1,0,0,0,13,0,291,305,313,377,
  	383,389,996,999,1004,1007,1012,1018,2,6,0,0,0,1,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  behaviorlexerLexerStaticData = staticData.release();
}

}

BehaviorLexer::BehaviorLexer(CharStream *input) : Lexer(input) {
  BehaviorLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *behaviorlexerLexerStaticData->atn, behaviorlexerLexerStaticData->decisionToDFA, behaviorlexerLexerStaticData->sharedContextCache);
}

BehaviorLexer::~BehaviorLexer() {
  delete _interpreter;
}

std::string BehaviorLexer::getGrammarFileName() const {
  return "Behavior.g4";
}

const std::vector<std::string>& BehaviorLexer::getRuleNames() const {
  return behaviorlexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& BehaviorLexer::getChannelNames() const {
  return behaviorlexerLexerStaticData->channelNames;
}

const std::vector<std::string>& BehaviorLexer::getModeNames() const {
  return behaviorlexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& BehaviorLexer::getVocabulary() const {
  return behaviorlexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView BehaviorLexer::getSerializedATN() const {
  return behaviorlexerLexerStaticData->serializedATN;
}

const atn::ATN& BehaviorLexer::getATN() const {
  return *behaviorlexerLexerStaticData->atn;
}




void BehaviorLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  behaviorlexerLexerInitialize();
#else
  ::antlr4::internal::call_once(behaviorlexerLexerOnceFlag, behaviorlexerLexerInitialize);
#endif
}
