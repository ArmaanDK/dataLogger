// Encoder - Version: Latest 
#include <Encoder.h>

/*
  Testing sketch for Incremental Rotary Encoder use on the Arduino UNO platform
*/

Encoder yuno(2, 3);

void setup() {
    Serial.begin(9600);
    Serial.println("Readings from YUNO Incremental Encoder:");
}

float position = -999;


void loop() {
  float newPosition = yuno.read();
    
  if (newPosition != position) {
    Serial.print("Pos: ");
    Serial.println(newPosition);
    position = newPosition;
  }
}
