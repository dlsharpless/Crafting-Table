const int red = 10;
const int yellow = 9;
const int green = 8;
const int button = 2;
bool pressed = false;
String light = "red";
unsigned long startTime = 0;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(red, HIGH);
  Serial.begin(9600); // For debugging
}

void loop() {
  // Read the button state
  if (digitalRead(button) == HIGH && !pressed) {
    pressed = true;
    Serial.println("Button pressed!");
  }

  // Red light logic
  if (light == "red" && millis() - startTime >= 8000) {
    light = "green";
    startTime = millis();
    pressed = false;
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    Serial.println("Switched to GREEN");
  }

  // Green light logic
  if (light == "green" && millis() - startTime >= 6000) {
    light = "yellow";
    startTime = millis();
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    Serial.println("Switched to YELLOW");
  }

  // Yellow light logic
  if (light == "yellow" && millis() - startTime >= 2000) {
    light = "red";
    startTime = millis();
    digitalWrite(yellow, LOW);
    digitalWrite(red, HIGH);
    Serial.println("Switched to RED");
  }

  // Button logic for crossing (interrupting green light)
  if (pressed && light == "green" && millis() - startTime >= 2000) {
    light = "yellow";
    startTime = millis();
    digitalWrite(green, LOW);
    digitalWrite(yellow, HIGH);
    Serial.println("Button triggered YELLOW during GREEN");
  }
}
