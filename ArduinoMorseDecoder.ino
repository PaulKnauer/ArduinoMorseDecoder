#include "MorseDecoder.h"

#include "Arduino.h"

#define BAUD_RATE 115200

MorseDecoder decoder;

void setup() {
  Serial.begin(BAUD_RATE);
  delay(3000);
}

void loop() {
  String *morse = new String("-.- \n- .... .. ... \n.. ... \n.- \n- . ... - \n-- . ... ... .- --. . \n");
  decoder.decodeMorse(morse);
  delay(3000);
}
