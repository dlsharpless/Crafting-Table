int LEDPIN = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(LEDPIN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LEDPIN, HIGH); // HIGH = 5V
  delay(500);
  digitalWrite(LEDPIN, LOW); // LOW = GROUND VOLTAGE
  delay(500);
}
