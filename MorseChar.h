#ifndef MorseChar_h
#define MorseChar_h

class MorseChar {
  public:
    MorseChar(char character, MorseChar *parent);
    char getChar();
    MorseChar *getParent();
    MorseChar *getDitChild();
    MorseChar *getDahChild();
    void setChildren(MorseChar *ditChild, MorseChar *dahChild);
  private:
    char _character;
    MorseChar *_parent;
    MorseChar *_ditChild;
    MorseChar *_dahChild;
};

#endif
