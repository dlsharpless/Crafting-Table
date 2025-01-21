const byte LED[] = {13, 12, 11, 10};
#define Pot1 0

void setup() {
  Serial.begin(9600);
  /* Set each pin to output */
  for (int i = 0; i < 4; i++) {
    pinMode(LED[i], OUTPUT);
  }
}

void loop() {
  int PotValue = analogRead(Pot1);
  Serial.print("Potentiometer: ");
  Serial.println(PotValue);
  if (PotValue < 400) {
    for (int i = 0; i < 4; i++) {
      digitalWrite(LED[i], LOW);
    }
  } else {
    for (int i = 0; i < 4; i++) {
      digitalWrite(LED[i], HIGH);
    }
  }
  /* Wait 0.5 seconds before reading again */
  delay(500);
}
