#include <LiquidCrystal.h>
 
const int RS = 8;
const int EN = 9;
const int d4 = 4;
const int d5 = 5;
const int d6 = 6;
const int d7 = 7;
const int pin_BL = 10; // arduino pin wired to LCD backlight circuit

LiquidCrystal lcd(RS, EN, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  lcd.print("InventrKits");
  lcd.setCursor(0, 1);
  lcd.print("LCD Shield");
}

void loop() {

}
