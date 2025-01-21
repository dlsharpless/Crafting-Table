void setup() {
  Serial.begin(9600); // Start serial communication for debugging
}

void loop() {
  int sensorValue = analogRead(A0); // Read the value from the photoresistor
  Serial.println(sensorValue); // Print the sensor value to the serial monitor
  delay(500); // Wait for 0.5 second
}
