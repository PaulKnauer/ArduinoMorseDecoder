#ifndef MorseDecoder_h
#define MorseDecoder_h

#include "MorseCharBTree.h"

class MorseDecoder {
  public:
    MorseDecoder();
  private:
    MorseCharBTree *_bTree;
};

#endif
