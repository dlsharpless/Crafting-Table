int timer = 500;

void setup() {
  // put your setup code here, to run once:
  for (int thisPin = 3; thisPin < 8; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int thisPin = 3; thisPin <= 7; thisPin++) {
    digitalWrite(thisPin, HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
  }

  for (int thisPin = 7; thisPin >= 3; thisPin--) {
    digitalWrite(thisPin, HIGH);
    delay(timer);
    digitalWrite(thisPin, LOW);
  }
}
