#ifndef MorseCharBTree_h
#define MorseCharBTree_h

#include "MorseChar.h"

class MorseCharBTree {
  public:
    MorseCharBTree();
    void dit();
    void dah();
    char letterSpace();
    char wordSpace();
  private:
    MorseChar *_root;
    MorseChar *_cursor;
};

#endif
