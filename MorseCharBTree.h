#ifndef MorseCharBTree_h
#define MorseCharBTree_h

#include "MorseChar.h"

class MorseCharBTree {
  public:
    MorseCharBTree();
    MorseChar *getRoot();
  private:
    MorseChar *_root;
};

#endif
