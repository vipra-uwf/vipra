
// Generated from Behavior.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  BehaviorLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, COMMENT = 11, LINE_COMMENT = 12, WS = 13, 
    COMMA = 14, COLON = 15, STATE = 16, ACTION = 17, EVNT = 18, OBJECT = 19, 
    AN = 20, AT = 21, AND = 22, ARE = 23, AFTER = 24, ALWAYS = 25, AROUND = 26, 
    BEHIND = 27, CONSIDER = 28, DECIMAL = 29, DIRECTION = 30, END = 31, 
    ENDS = 32, ENVIRONMENT = 33, EVENT = 34, EXACTLY = 35, EVERY = 36, EVERYONE = 37, 
    FOR = 38, FROM = 39, FRONT = 40, FASTER = 41, GIVEN = 42, HAS = 43, 
    IN = 44, INTEGER = 45, IS = 46, IF = 47, LENGTH = 48, LOCATION = 49, 
    METERS = 50, NORMAL = 51, OBSTACLE = 52, OCCUR = 53, OCCURRED = 54, 
    OCCURRING = 55, OF = 56, OR = 57, PEDESTRIAN = 58, PEDESTRIANS = 59, 
    POSSIBLE = 60, RADIUS = 61, RANDOM = 62, REQUIRED = 63, SECOND = 64, 
    SECONDS = 65, SLOWER = 66, STATES = 67, STARTS = 68, SPEED = 69, TO = 70, 
    THE = 71, THAT = 72, THEN = 73, THEIR = 74, THERES = 75, TYPES = 76, 
    VALUE = 77, WHEN = 78, WHILE = 79, WIDTH = 80, WILL = 81, WITH = 82, 
    WITHIN = 83, ID = 84, NUMBER = 85, FLOAT = 86
  };

  explicit BehaviorLexer(antlr4::CharStream *input);

  ~BehaviorLexer() override;


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

