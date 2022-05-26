#include "Arduino.h"
#include "example.pb.h"

Example example();
int counter = 0;

void setup() {
  Serial.begin(115200);

  example.set_a_string("Hello world!");
}

void loop() {
  ++counter;
  example.set_an_int(counter);
  Serial.println(example.DebugString());
  delay(1000);
}
