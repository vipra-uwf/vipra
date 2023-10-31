
// Generated from Behavior.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  BehaviorLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    COMMENT = 8, LINE_COMMENT = 9, WS = 10, COMMA = 11, COLON = 12, STATE_VAL = 13, 
    EVNT = 14, LOC_NAME = 15, AN = 16, AT = 17, ADD = 18, AND = 19, ARE = 20, 
    AFTER = 21, ALWAYS = 22, AROUND = 23, ACTION = 24, BEHIND = 25, BOTTOM = 26, 
    CONSIDER = 27, CIRCLE = 28, CENTER = 29, CONDITION = 30, DECIMAL = 31, 
    DIRECTION = 32, DURATION = 33, END = 34, ENDS = 35, ENVIRONMENT = 36, 
    ENTER = 37, EXIT = 38, EXISTS = 39, EVENT = 40, EXACTLY = 41, EVERY = 42, 
    EVERYONE = 43, ENDING = 44, FOR = 45, FROM = 46, FRONT = 47, FASTER = 48, 
    GIVEN = 49, GOAL = 50, GROUP = 51, HAS = 52, IN = 53, INTEGER = 54, 
    INITIAL = 55, IS = 56, IF = 57, LENGTH = 58, LEFT = 59, LEAVE = 60, 
    DIMENSIONS = 61, LOCATION = 62, MAX = 63, METERS = 64, NAME = 65, NEAREST = 66, 
    NORMAL = 67, NONE = 68, NOT = 69, OBSTACLE = 70, OCCUR = 71, OCCURRED = 72, 
    OCCURRING = 73, OF = 74, ON = 75, OR = 76, PEDESTRIAN = 77, PEDESTRIANS = 78, 
    POINTS = 79, POSSIBLE = 80, POSITION = 81, RADIUS = 82, RANDOM = 83, 
    REQUIRED = 84, RECTANGLE = 85, RIGHT = 86, RESPONSE = 87, SCALE = 88, 
    SELF = 89, SELECT = 90, SELECTOR = 91, SET = 92, SECOND = 93, SECONDS = 94, 
    STATUS = 95, STARTING = 96, SLOWER = 97, SHAPE = 98, STATES = 99, START = 100, 
    STATE = 101, STARTS = 102, SPEED = 103, SUBTRACT = 104, STIMULUS = 105, 
    TARGET = 106, TO = 107, TOP = 108, THE = 109, THAT = 110, THEN = 111, 
    THEIR = 112, THERES = 113, TYPES = 114, TYPE = 115, UNCONDITIONALLY = 116, 
    VALUE = 117, VELOCITY = 118, WHEN = 119, WHILE = 120, WHOSE = 121, WIDTH = 122, 
    WILL = 123, WITH = 124, WITHIN = 125, ID = 126, NUMBER = 127, FLOAT = 128
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

