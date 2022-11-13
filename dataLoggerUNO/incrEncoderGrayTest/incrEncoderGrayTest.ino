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
    Serial.print(Anew);
    Serial.print(",");
    Serial.println(Bnew);

    Aold = Anew;
    Bold = Bnew;
  }
  
}
