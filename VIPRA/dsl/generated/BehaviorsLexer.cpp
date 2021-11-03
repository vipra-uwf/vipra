
// Generated from Behaviors.g4 by ANTLR 4.9.2


#include "BehaviorsLexer.h"


using namespace antlr4;


BehaviorsLexer::BehaviorsLexer(CharStream *input) : Lexer(input) {
  _interpreter = new atn::LexerATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

BehaviorsLexer::~BehaviorsLexer() {
  delete _interpreter;
}

std::string BehaviorsLexer::getGrammarFileName() const {
  return "Behaviors.g4";
}

const std::vector<std::string>& BehaviorsLexer::getRuleNames() const {
  return _ruleNames;
}

const std::vector<std::string>& BehaviorsLexer::getChannelNames() const {
  return _channelNames;
}

const std::vector<std::string>& BehaviorsLexer::getModeNames() const {
  return _modeNames;
}

const std::vector<std::string>& BehaviorsLexer::getTokenNames() const {
  return _tokenNames;
}

dfa::Vocabulary& BehaviorsLexer::getVocabulary() const {
  return _vocabulary;
}

const std::vector<uint16_t> BehaviorsLexer::getSerializedATN() const {
  return _serializedATN;
}

const atn::ATN& BehaviorsLexer::getATN() const {
  return _atn;
}




// Static vars and initialization.
std::vector<dfa::DFA> BehaviorsLexer::_decisionToDFA;
atn::PredictionContextCache BehaviorsLexer::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN BehaviorsLexer::_atn;
std::vector<uint16_t> BehaviorsLexer::_serializedATN;

std::vector<std::string> BehaviorsLexer::_ruleNames = {
  "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
  "PERSON_TYPE", "NUMBER", "NEWLINE", "WHITESPACE"
};

std::vector<std::string> BehaviorsLexer::_channelNames = {
  "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
};

std::vector<std::string> BehaviorsLexer::_modeNames = {
  "DEFAULT_MODE"
};

std::vector<std::string> BehaviorsLexer::_literalNames = {
  "", "'Consider a '", "'.'", "'Consider an '", "'% of the population are a '", 
  "'% of the population are an '", "'A '", "' pauses movement randomly for 1 minute.'", 
  "'AWAKE'", "'SLEEPING'", "", "", "", "' '"
};

std::vector<std::string> BehaviorsLexer::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "PERSON_TYPE", "NUMBER", "NEWLINE", 
  "WHITESPACE"
};

dfa::Vocabulary BehaviorsLexer::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> BehaviorsLexer::_tokenNames;

BehaviorsLexer::Initializer::Initializer() {
  // This code could be in a static initializer lambda, but VS doesn't allow access to private class members from there.
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x2, 0xf, 0xbc, 0x8, 0x1, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 
       0x4, 0x4, 0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 
       0x7, 0x9, 0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 
       0x9, 0xa, 0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 
       0xd, 0x4, 0xe, 0x9, 0xe, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 
       0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x3, 
       0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
       0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
       0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 
       0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
       0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
       0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
       0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
       0xb, 0x6, 0xb, 0xab, 0xa, 0xb, 0xd, 0xb, 0xe, 0xb, 0xac, 0x3, 0xc, 
       0x6, 0xc, 0xb0, 0xa, 0xc, 0xd, 0xc, 0xe, 0xc, 0xb1, 0x3, 0xd, 0x5, 
       0xd, 0xb5, 0xa, 0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 
       0xe, 0x3, 0xe, 0x2, 0x2, 0xf, 0x3, 0x3, 0x5, 0x4, 0x7, 0x5, 0x9, 
       0x6, 0xb, 0x7, 0xd, 0x8, 0xf, 0x9, 0x11, 0xa, 0x13, 0xb, 0x15, 0xc, 
       0x17, 0xd, 0x19, 0xe, 0x1b, 0xf, 0x3, 0x2, 0x4, 0x4, 0x2, 0x43, 0x5c, 
       0x63, 0x7c, 0x3, 0x2, 0x32, 0x3b, 0x2, 0xbe, 0x2, 0x3, 0x3, 0x2, 
       0x2, 0x2, 0x2, 0x5, 0x3, 0x2, 0x2, 0x2, 0x2, 0x7, 0x3, 0x2, 0x2, 
       0x2, 0x2, 0x9, 0x3, 0x2, 0x2, 0x2, 0x2, 0xb, 0x3, 0x2, 0x2, 0x2, 
       0x2, 0xd, 0x3, 0x2, 0x2, 0x2, 0x2, 0xf, 0x3, 0x2, 0x2, 0x2, 0x2, 
       0x11, 0x3, 0x2, 0x2, 0x2, 0x2, 0x13, 0x3, 0x2, 0x2, 0x2, 0x2, 0x15, 
       0x3, 0x2, 0x2, 0x2, 0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x2, 0x19, 0x3, 
       0x2, 0x2, 0x2, 0x2, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x3, 0x1d, 0x3, 0x2, 
       0x2, 0x2, 0x5, 0x29, 0x3, 0x2, 0x2, 0x2, 0x7, 0x2b, 0x3, 0x2, 0x2, 
       0x2, 0x9, 0x38, 0x3, 0x2, 0x2, 0x2, 0xb, 0x53, 0x3, 0x2, 0x2, 0x2, 
       0xd, 0x6f, 0x3, 0x2, 0x2, 0x2, 0xf, 0x72, 0x3, 0x2, 0x2, 0x2, 0x11, 
       0x9a, 0x3, 0x2, 0x2, 0x2, 0x13, 0xa0, 0x3, 0x2, 0x2, 0x2, 0x15, 0xaa, 
       0x3, 0x2, 0x2, 0x2, 0x17, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x19, 0xb4, 0x3, 
       0x2, 0x2, 0x2, 0x1b, 0xb8, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1e, 0x7, 0x45, 
       0x2, 0x2, 0x1e, 0x1f, 0x7, 0x71, 0x2, 0x2, 0x1f, 0x20, 0x7, 0x70, 
       0x2, 0x2, 0x20, 0x21, 0x7, 0x75, 0x2, 0x2, 0x21, 0x22, 0x7, 0x6b, 
       0x2, 0x2, 0x22, 0x23, 0x7, 0x66, 0x2, 0x2, 0x23, 0x24, 0x7, 0x67, 
       0x2, 0x2, 0x24, 0x25, 0x7, 0x74, 0x2, 0x2, 0x25, 0x26, 0x7, 0x22, 
       0x2, 0x2, 0x26, 0x27, 0x7, 0x63, 0x2, 0x2, 0x27, 0x28, 0x7, 0x22, 
       0x2, 0x2, 0x28, 0x4, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x30, 0x2, 
       0x2, 0x2a, 0x6, 0x3, 0x2, 0x2, 0x2, 0x2b, 0x2c, 0x7, 0x45, 0x2, 0x2, 
       0x2c, 0x2d, 0x7, 0x71, 0x2, 0x2, 0x2d, 0x2e, 0x7, 0x70, 0x2, 0x2, 
       0x2e, 0x2f, 0x7, 0x75, 0x2, 0x2, 0x2f, 0x30, 0x7, 0x6b, 0x2, 0x2, 
       0x30, 0x31, 0x7, 0x66, 0x2, 0x2, 0x31, 0x32, 0x7, 0x67, 0x2, 0x2, 
       0x32, 0x33, 0x7, 0x74, 0x2, 0x2, 0x33, 0x34, 0x7, 0x22, 0x2, 0x2, 
       0x34, 0x35, 0x7, 0x63, 0x2, 0x2, 0x35, 0x36, 0x7, 0x70, 0x2, 0x2, 
       0x36, 0x37, 0x7, 0x22, 0x2, 0x2, 0x37, 0x8, 0x3, 0x2, 0x2, 0x2, 0x38, 
       0x39, 0x7, 0x27, 0x2, 0x2, 0x39, 0x3a, 0x7, 0x22, 0x2, 0x2, 0x3a, 
       0x3b, 0x7, 0x71, 0x2, 0x2, 0x3b, 0x3c, 0x7, 0x68, 0x2, 0x2, 0x3c, 
       0x3d, 0x7, 0x22, 0x2, 0x2, 0x3d, 0x3e, 0x7, 0x76, 0x2, 0x2, 0x3e, 
       0x3f, 0x7, 0x6a, 0x2, 0x2, 0x3f, 0x40, 0x7, 0x67, 0x2, 0x2, 0x40, 
       0x41, 0x7, 0x22, 0x2, 0x2, 0x41, 0x42, 0x7, 0x72, 0x2, 0x2, 0x42, 
       0x43, 0x7, 0x71, 0x2, 0x2, 0x43, 0x44, 0x7, 0x72, 0x2, 0x2, 0x44, 
       0x45, 0x7, 0x77, 0x2, 0x2, 0x45, 0x46, 0x7, 0x6e, 0x2, 0x2, 0x46, 
       0x47, 0x7, 0x63, 0x2, 0x2, 0x47, 0x48, 0x7, 0x76, 0x2, 0x2, 0x48, 
       0x49, 0x7, 0x6b, 0x2, 0x2, 0x49, 0x4a, 0x7, 0x71, 0x2, 0x2, 0x4a, 
       0x4b, 0x7, 0x70, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x22, 0x2, 0x2, 0x4c, 
       0x4d, 0x7, 0x63, 0x2, 0x2, 0x4d, 0x4e, 0x7, 0x74, 0x2, 0x2, 0x4e, 
       0x4f, 0x7, 0x67, 0x2, 0x2, 0x4f, 0x50, 0x7, 0x22, 0x2, 0x2, 0x50, 
       0x51, 0x7, 0x63, 0x2, 0x2, 0x51, 0x52, 0x7, 0x22, 0x2, 0x2, 0x52, 
       0xa, 0x3, 0x2, 0x2, 0x2, 0x53, 0x54, 0x7, 0x27, 0x2, 0x2, 0x54, 0x55, 
       0x7, 0x22, 0x2, 0x2, 0x55, 0x56, 0x7, 0x71, 0x2, 0x2, 0x56, 0x57, 
       0x7, 0x68, 0x2, 0x2, 0x57, 0x58, 0x7, 0x22, 0x2, 0x2, 0x58, 0x59, 
       0x7, 0x76, 0x2, 0x2, 0x59, 0x5a, 0x7, 0x6a, 0x2, 0x2, 0x5a, 0x5b, 
       0x7, 0x67, 0x2, 0x2, 0x5b, 0x5c, 0x7, 0x22, 0x2, 0x2, 0x5c, 0x5d, 
       0x7, 0x72, 0x2, 0x2, 0x5d, 0x5e, 0x7, 0x71, 0x2, 0x2, 0x5e, 0x5f, 
       0x7, 0x72, 0x2, 0x2, 0x5f, 0x60, 0x7, 0x77, 0x2, 0x2, 0x60, 0x61, 
       0x7, 0x6e, 0x2, 0x2, 0x61, 0x62, 0x7, 0x63, 0x2, 0x2, 0x62, 0x63, 
       0x7, 0x76, 0x2, 0x2, 0x63, 0x64, 0x7, 0x6b, 0x2, 0x2, 0x64, 0x65, 
       0x7, 0x71, 0x2, 0x2, 0x65, 0x66, 0x7, 0x70, 0x2, 0x2, 0x66, 0x67, 
       0x7, 0x22, 0x2, 0x2, 0x67, 0x68, 0x7, 0x63, 0x2, 0x2, 0x68, 0x69, 
       0x7, 0x74, 0x2, 0x2, 0x69, 0x6a, 0x7, 0x67, 0x2, 0x2, 0x6a, 0x6b, 
       0x7, 0x22, 0x2, 0x2, 0x6b, 0x6c, 0x7, 0x63, 0x2, 0x2, 0x6c, 0x6d, 
       0x7, 0x70, 0x2, 0x2, 0x6d, 0x6e, 0x7, 0x22, 0x2, 0x2, 0x6e, 0xc, 
       0x3, 0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x43, 0x2, 0x2, 0x70, 0x71, 
       0x7, 0x22, 0x2, 0x2, 0x71, 0xe, 0x3, 0x2, 0x2, 0x2, 0x72, 0x73, 0x7, 
       0x22, 0x2, 0x2, 0x73, 0x74, 0x7, 0x72, 0x2, 0x2, 0x74, 0x75, 0x7, 
       0x63, 0x2, 0x2, 0x75, 0x76, 0x7, 0x77, 0x2, 0x2, 0x76, 0x77, 0x7, 
       0x75, 0x2, 0x2, 0x77, 0x78, 0x7, 0x67, 0x2, 0x2, 0x78, 0x79, 0x7, 
       0x75, 0x2, 0x2, 0x79, 0x7a, 0x7, 0x22, 0x2, 0x2, 0x7a, 0x7b, 0x7, 
       0x6f, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x71, 0x2, 0x2, 0x7c, 0x7d, 0x7, 
       0x78, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x67, 0x2, 0x2, 0x7e, 0x7f, 0x7, 
       0x6f, 0x2, 0x2, 0x7f, 0x80, 0x7, 0x67, 0x2, 0x2, 0x80, 0x81, 0x7, 
       0x70, 0x2, 0x2, 0x81, 0x82, 0x7, 0x76, 0x2, 0x2, 0x82, 0x83, 0x7, 
       0x22, 0x2, 0x2, 0x83, 0x84, 0x7, 0x74, 0x2, 0x2, 0x84, 0x85, 0x7, 
       0x63, 0x2, 0x2, 0x85, 0x86, 0x7, 0x70, 0x2, 0x2, 0x86, 0x87, 0x7, 
       0x66, 0x2, 0x2, 0x87, 0x88, 0x7, 0x71, 0x2, 0x2, 0x88, 0x89, 0x7, 
       0x6f, 0x2, 0x2, 0x89, 0x8a, 0x7, 0x6e, 0x2, 0x2, 0x8a, 0x8b, 0x7, 
       0x7b, 0x2, 0x2, 0x8b, 0x8c, 0x7, 0x22, 0x2, 0x2, 0x8c, 0x8d, 0x7, 
       0x68, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x71, 0x2, 0x2, 0x8e, 0x8f, 0x7, 
       0x74, 0x2, 0x2, 0x8f, 0x90, 0x7, 0x22, 0x2, 0x2, 0x90, 0x91, 0x7, 
       0x33, 0x2, 0x2, 0x91, 0x92, 0x7, 0x22, 0x2, 0x2, 0x92, 0x93, 0x7, 
       0x6f, 0x2, 0x2, 0x93, 0x94, 0x7, 0x6b, 0x2, 0x2, 0x94, 0x95, 0x7, 
       0x70, 0x2, 0x2, 0x95, 0x96, 0x7, 0x77, 0x2, 0x2, 0x96, 0x97, 0x7, 
       0x76, 0x2, 0x2, 0x97, 0x98, 0x7, 0x67, 0x2, 0x2, 0x98, 0x99, 0x7, 
       0x30, 0x2, 0x2, 0x99, 0x10, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 
       0x43, 0x2, 0x2, 0x9b, 0x9c, 0x7, 0x59, 0x2, 0x2, 0x9c, 0x9d, 0x7, 
       0x43, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x4d, 0x2, 0x2, 0x9e, 0x9f, 0x7, 
       0x47, 0x2, 0x2, 0x9f, 0x12, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x7, 
       0x55, 0x2, 0x2, 0xa1, 0xa2, 0x7, 0x4e, 0x2, 0x2, 0xa2, 0xa3, 0x7, 
       0x47, 0x2, 0x2, 0xa3, 0xa4, 0x7, 0x47, 0x2, 0x2, 0xa4, 0xa5, 0x7, 
       0x52, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x4b, 0x2, 0x2, 0xa6, 0xa7, 0x7, 
       0x50, 0x2, 0x2, 0xa7, 0xa8, 0x7, 0x49, 0x2, 0x2, 0xa8, 0x14, 0x3, 
       0x2, 0x2, 0x2, 0xa9, 0xab, 0x9, 0x2, 0x2, 0x2, 0xaa, 0xa9, 0x3, 0x2, 
       0x2, 0x2, 0xab, 0xac, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 
       0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0x16, 0x3, 0x2, 0x2, 0x2, 
       0xae, 0xb0, 0x9, 0x3, 0x2, 0x2, 0xaf, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb0, 
       0xb1, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb2, 
       0x3, 0x2, 0x2, 0x2, 0xb2, 0x18, 0x3, 0x2, 0x2, 0x2, 0xb3, 0xb5, 0x7, 
       0xf, 0x2, 0x2, 0xb4, 0xb3, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x3, 0x2, 
       0x2, 0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb7, 0x7, 0xc, 0x2, 
       0x2, 0xb7, 0x1a, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xb9, 0x7, 0x22, 0x2, 
       0x2, 0xb9, 0xba, 0x3, 0x2, 0x2, 0x2, 0xba, 0xbb, 0x8, 0xe, 0x2, 0x2, 
       0xbb, 0x1c, 0x3, 0x2, 0x2, 0x2, 0x6, 0x2, 0xac, 0xb1, 0xb4, 0x3, 
       0x8, 0x2, 0x2, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

BehaviorsLexer::Initializer BehaviorsLexer::_init;
