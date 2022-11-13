/*
  Testing the output of A/B gray-code from an incremental rotary encoder.
*/
int Aold = HIGH;
int Bold = HIGH;

int Anew = HIGH;
int Bnew = HIGH;


void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  Serial.begin(9600);
  Serial.println("Arduino Connected!");
  Serial.println("Encoder readings:");
}

void loop() {

  Bnew = digitalRead(3);
  Anew = digitalRead(2);
  
  if (Anew != Aold || Bnew != Bold) {

    /*
      Given previous values for two readings, four changes are possible:
        1. "A" voltage changes
          a) From HIGH to LOW <- aFall
          b) From LOW to HIGH <- aRise
        2. "B" voltage changes
          a) From HIGH to LOW <- bFall
          b) From LOW to HIGH <- bRise
    */

    Serial.print(Anew);
    Serial.print(",");
    Serial.println(Bnew);

    Aold = Anew;
    Bold = Bnew;
  }
  
}
