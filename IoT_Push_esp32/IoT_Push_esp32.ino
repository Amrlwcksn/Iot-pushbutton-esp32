#include "thingProperties.h"
void setup() {
  pinMode(2, OUTPUT);
  Serial.begin(9600);
  delay(1500);
  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);
  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();
}
void loop() {
  ArduinoCloud.update();
  if (saklar) digitalWrite(2, HIGH);
  else digitalWrite(2, LOW);
}
void onSaklarChange() {
}
