
// Generated from Behavior.g4 by ANTLR 4.13.0

#pragma once


#include "antlr4-runtime.h"




class  BehaviorLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    COMMENT = 8, LINE_COMMENT = 9, WS = 10, COMMA = 11, COLON = 12, STATE_VAL = 13, 
    EVNT = 14, AN = 15, AT = 16, ADD = 17, AND = 18, ARE = 19, AFTER = 20, 
    ALWAYS = 21, AROUND = 22, ACTION = 23, BEHIND = 24, CONSIDER = 25, DECIMAL = 26, 
    DIRECTION = 27, DURATION = 28, END = 29, ENDS = 30, ENVIRONMENT = 31, 
    EVENT = 32, EXACTLY = 33, EVERY = 34, EVERYONE = 35, ENDING = 36, FOR = 37, 
    FROM = 38, FRONT = 39, FASTER = 40, GIVEN = 41, GOAL = 42, GROUP = 43, 
    HAS = 44, IN = 45, INTEGER = 46, IS = 47, IF = 48, LENGTH = 49, LOCATION = 50, 
    METERS = 51, NAME = 52, NEAREST = 53, NORMAL = 54, OBSTACLE = 55, OCCUR = 56, 
    OCCURRED = 57, OCCURRING = 58, OF = 59, ON = 60, OR = 61, PEDESTRIAN = 62, 
    PEDESTRIANS = 63, POSSIBLE = 64, POSITION = 65, RADIUS = 66, RANDOM = 67, 
    REQUIRED = 68, RESPONSE = 69, SELF = 70, SELECT = 71, SELECTOR = 72, 
    SET = 73, SECOND = 74, SECONDS = 75, STATUS = 76, STARTING = 77, SLOWER = 78, 
    STATES = 79, START = 80, STATE = 81, STARTS = 82, SPEED = 83, SUBTRACT = 84, 
    STIMULUS = 85, TARGET = 86, TO = 87, THE = 88, THAT = 89, THEN = 90, 
    THEIR = 91, THERES = 92, TYPES = 93, TYPE = 94, UNCONDITIONALLY = 95, 
    VALUE = 96, VELOCITY = 97, WHEN = 98, WHILE = 99, WIDTH = 100, WILL = 101, 
    WITH = 102, WITHIN = 103, ID = 104, NUMBER = 105, FLOAT = 106
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

