const int buttonPin1 = 2;
const int buttonPin2 = 3;
const int ledPin1 = 8;
const int ledPin2 = 9;

bool buttonState1 = false;
bool lastButtonState1 = false;
bool buttonState2 = false;
bool lastButtonState2 = false;
bool ledState1 = false;
bool ledState2 = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(buttonPin1);
  if (buttonState1 != lastButtonState1) {
    if (buttonState1 == true) {
      ledState1 = !ledState1;
      digitalWrite(ledPin1, ledState1);
    }
    delay(50);  // Debounce delay
  }
  lastButtonState1 = buttonState1;

  buttonState2 = digitalRead(buttonPin2);
  if (buttonState2 != lastButtonState2) {
    if (buttonState2 == true) {
      ledState2 = !ledState2;
      digitalWrite(ledPin2, ledState2);
    }
    delay(50);  // Debounce delay
  }
  lastButtonState2 = buttonState2;
}
