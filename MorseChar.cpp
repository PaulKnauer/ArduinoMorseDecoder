#include "MorseChar.h"

MorseChar::MorseChar(char character) {
  _character = character;
}

char MorseChar::getChar() {
  return _character;
}

MorseChar *MorseChar::getDitChild() {
  return _ditChild;
}

MorseChar *MorseChar::getDahChild() {
  return _dahChild;
}

void MorseChar::setChildren(MorseChar *ditChild, MorseChar *dahChild) {
  _ditChild = ditChild;
  _dahChild = dahChild;
}

