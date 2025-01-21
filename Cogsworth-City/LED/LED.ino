void setup() {
  pinMode(2, OUTPUT); // Red LED
  pinMode(3, OUTPUT); // Green LED
  pinMode(4, OUTPUT); // Blue LED
  pinMode(5, OUTPUT); // Yellow LED
}

void loop() {
  digitalWrite(2, HIGH); // Turn on red LED
  delay(500); // Wait for 0.5 second
  digitalWrite(2, LOW); // Turn off red LED
  digitalWrite(3, HIGH); // Turn on green LED
  delay(500); // Wait for 0.5 second
  digitalWrite(3, LOW); // Turn off green LED
  digitalWrite(4, HIGH); // Turn on blue LED
  delay(500); // Wait for 0.5 second
  digitalWrite(4, LOW); // Turn off blue LED
  digitalWrite(5, HIGH); // Turn on yellow LED
  delay(500); // Wait for 0.5 second
  digitalWrite(5, LOW); // Turn off yellow LED
}
