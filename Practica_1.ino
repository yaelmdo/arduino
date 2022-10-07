#include "serial_class.h"

serial_class SC;

void setup() {
  Serial.begin(115200);
}

void loop() {
  SC.get_data();
}
