#ifndef MorseChar_h
#define MorseChar_h

class MorseChar {
  public:
    MorseChar(char character);
    char getChar();
    MorseChar *getDitChild();
    MorseChar *getDahChild();
    void setChildren(MorseChar *ditChild, MorseChar *dahChild);
  private:
    char _character;
    MorseChar *_ditChild;
    MorseChar *_dahChild;
};

#endif
