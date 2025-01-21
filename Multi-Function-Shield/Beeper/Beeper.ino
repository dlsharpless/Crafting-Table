#include <TimerOne.h>
#include <Wire.h>
#include <MultiFuncShield.h>
#define BUTTON_1 A1 // input button
#define BUZZER 3 // buzzer

void setup() {
  // put your setup code here, to run once:
  pinMode(BUTTON_1, INPUT);
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER, HIGH);

  // NOTE beep control is performed in the background, i.e. beep() is non blocking.
  Timer1.initialize();
  MFS.initialize(&Timer1); // initialize multi-function shield library

  // short beep for 200 milliseconds
  MFS.beep();
  delay(1000);

  // 4 short beeps, repeated 3 times.
  MFS.beep(5, // beep for 50 milliseconds
           5, // silent for 50 milliseconds
           4, // repeat above cycle 4 times
           3, // loop 3 times
           50); // wait 500 milliseconds between loop
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(BUTTON_1) == 0) {
    digitalWrite(BUZZER, LOW); // button is pressed
  } else {
    digitalWrite(BUZZER, HIGH); // button is not pressed
  }
}
