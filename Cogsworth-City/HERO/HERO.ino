void setup() {
  pinMode(13, OUTPUT); // Set pin 13 as an output for the LED
  Serial.begin(9600); // Start serial communication for debugging
}

void loop() {
  int sensorValue = analogRead(A0); // Read the value from the photoresistor
  Serial.println(sensorValue); // Print the sensor value to the serial monitor
  if (sensorValue < 500) { // If the sensor value is less than 500
    digitalWrite(13, HIGH); // Turn the LED on
  } else {
    digitalWrite(13, LOW); // Turn the LED off
  }
  delay(100); // Wait for 100 milliseconds
}
