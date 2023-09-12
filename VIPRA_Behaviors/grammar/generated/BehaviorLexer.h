
// Generated from Behavior.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  BehaviorLexer : public antlr4::Lexer {
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

