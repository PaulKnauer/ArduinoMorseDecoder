#ifndef MorseDecoder_h
#define MorseDecoder_h

#include "Arduino.h"

#include "MorseCharBTree.h"

class MorseDecoder {
  public:
    MorseDecoder();
    void decodeMorse(String *morse);
  private:
    MorseCharBTree *_bTree;
};

#endif
