#include "MorseChar.h"

MorseChar::MorseChar(char character, MorseChar *parent) {
  _character = character;
  _parent = parent;
}

char MorseChar::getChar() {
  return _character;
}

MorseChar *MorseChar::getParent() {
  return _parent;
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

