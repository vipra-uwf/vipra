
// Generated from Behavior.g4 by ANTLR 4.12.0

#pragma once


#include "antlr4-runtime.h"




class  BehaviorLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, COMMENT = 9, LINE_COMMENT = 10, WS = 11, COMMA = 12, COLON = 13, 
    STATE = 14, ACTION = 15, PARAMETER = 16, EVNT = 17, OBJECT = 18, AN = 19, 
    AT = 20, AND = 21, ARE = 22, AFTER = 23, ALWAYS = 24, AROUND = 25, BEHIND = 26, 
    CONSIDER = 27, DECIMAL = 28, DIRECTION = 29, END = 30, ENDS = 31, ENVIRONMENT = 32, 
    EVENT = 33, EXACTLY = 34, EVERY = 35, EVERYONE = 36, FASTER = 37, FROM = 38, 
    FRONT = 39, GIVEN = 40, HAS = 41, IN = 42, INTEGER = 43, IS = 44, METERS = 45, 
    NORMAL = 46, OBSTACLE = 47, OCCUR = 48, OCCURRED = 49, OCCURRING = 50, 
    OF = 51, OR = 52, PEDESTRIAN = 53, PEDESTRIANS = 54, POSSIBLE = 55, 
    RANDOM = 56, REQUIRED = 57, SECONDS = 58, SLOWER = 59, STATES = 60, 
    STARTS = 61, SPEED = 62, TO = 63, THE = 64, THAT = 65, THEN = 66, THEIR = 67, 
    TYPES = 68, VALUE = 69, WHEN = 70, WHILE = 71, WILL = 72, WITHIN = 73, 
    ID = 74, NUMBER = 75, FLOAT = 76, LOC = 77, POINTX = 78, POINTY = 79
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

