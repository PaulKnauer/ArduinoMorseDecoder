#include "MorseDecoder.h"

MorseDecoder::MorseDecoder() {
  _bTree = new MorseCharBTree();
}

void MorseDecoder::decodeMorse(String *morse) {
  for (int i = 0; i < morse->length(); i++) {
    char currentChar = morse->charAt(i);
    if ('.' == currentChar) {
      _bTree->dit();
    } else if ('-' == currentChar) {
      _bTree->dah();
    } else if (' ' == currentChar) {
      Serial.print(_bTree->letterSpace());
    } else if ('\n' == currentChar) {
      Serial.println(_bTree->wordSpace());
    }
  }
}

