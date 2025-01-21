// Sample using LiquidCrystal library
#include <LiquidCrystal.h>

/*******************************************************
This program will test the LCD panel and the buttons
Mark Bramwell, July 2010
********************************************************/

// Select the pins used on the LCD panel
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

// Define some values used by the panel and buttons
int lcd_key = 0;
int adc_key_in = 0;

#define btnRIGHT 0
#define btnUP 1
#define btnDOWN 2
#define btnLEFT 3
#define btnSELECT 4
#define btnNONE 5

// Read the buttons
int read_LCD_buttons() {
  adc_key_in = analogRead(0); // Read the value from the sensor

  // My buttons when read are centered at these values: 0, 144, 329, 504, 741
  // We add approx 50 to those values and check to see if we are close
  if (adc_key_in > 1000) return btnNONE; // We make this the 1st option for speed
  // if (adc_key_in < 50) return btnRIGHT;
  // if (adc_key_in < 250) return btnUP;
  // if (adc_key_in < 450) return btnDOWN;
  // if (adc_key_in < 650) return btnLEFT;
  // if (adc_key_in < 850) return btnSELECT;

  // For V1.0, comment out the above thresholds and use the one below:
  // /*
  if (adc_key_in < 50) return btnRIGHT;
  if (adc_key_in < 195) return btnUP;
  if (adc_key_in < 380) return btnDOWN;
  if (adc_key_in < 555) return btnLEFT;
  if (adc_key_in < 790) return btnSELECT;
  // */

  return btnNONE; // When all others fail, return this
}

void setup() {
  lcd.begin(16, 2); // Start the library
  lcd.setCursor(0, 0);
  lcd.print("Push the buttons"); // Print a simple message
}

void loop() {
  lcd.setCursor(9, 1); // Move cursor to second line "1" and 9 spaces over
  lcd.print(millis() / 1000); // Display seconds elapsed since power-up

  lcd.setCursor(0, 1); // Move to the beginning of the second line
  lcd_key = read_LCD_buttons(); // Read the buttons

  // Depending on which button was pushed, perform an action
  switch (lcd_key) {
    case btnRIGHT:
      lcd.print("RIGHT ");
      break;
    case btnLEFT:
      lcd.print("LEFT  ");
      break;
    case btnUP:
      lcd.print("UP    ");
      break;
    case btnDOWN:
      lcd.print("DOWN  ");
      break;
    case btnSELECT:
      lcd.print("SELECT");
      break;
    case btnNONE:
      lcd.print("NONE  ");
      break;
  }
}
