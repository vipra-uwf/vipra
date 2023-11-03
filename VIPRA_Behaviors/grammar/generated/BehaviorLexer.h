
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
    INITIAL = 55, IS = 56, IF = 57, LENGTH = 58, LENGTHS = 59, LEFT = 60, 
    LEAVE = 61, DIMENSIONS = 62, LOCATION = 63, MAX = 64, METERS = 65, NAME = 66, 
    NEAREST = 67, NORMAL = 68, NONE = 69, NOT = 70, OBSTACLE = 71, OCCUR = 72, 
    OCCURRED = 73, OCCURRING = 74, OF = 75, ON = 76, OR = 77, PEDESTRIAN = 78, 
    PEDESTRIANS = 79, POINTS = 80, POSSIBLE = 81, POSITION = 82, RADIUS = 83, 
    RANDOM = 84, REQUIRED = 85, RECTANGLE = 86, RIGHT = 87, RESPONSE = 88, 
    ROTATION = 89, SCALE = 90, SELF = 91, SELECT = 92, SELECTOR = 93, SET = 94, 
    SECOND = 95, SECONDS = 96, STATUS = 97, STARTING = 98, SLOWER = 99, 
    SHAPE = 100, STATES = 101, START = 102, STATE = 103, STARTS = 104, SPEED = 105, 
    SUBTRACT = 106, STIMULUS = 107, TARGET = 108, TO = 109, TOP = 110, THE = 111, 
    THAT = 112, THEN = 113, THEIR = 114, THERES = 115, TYPES = 116, TYPE = 117, 
    UNCONDITIONALLY = 118, VALUE = 119, VELOCITY = 120, WHEN = 121, WHILE = 122, 
    WHOSE = 123, WIDTH = 124, WILL = 125, WITH = 126, WITHIN = 127, ID = 128, 
    NUMBER = 129, FLOAT = 130
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

