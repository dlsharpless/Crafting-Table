/*******************************************************************
 * File: Photoresistor V2
 *
 * (Standard Night-Light)
 *
 * Non-Constant LED light, where it is max brightness if
 * the amount of light read in with photoresistor (or room)
 * is less than a specific value (128 in our case).
 *
/******************************************************************/
// Start by naming the pins we will use
const int sensorPin = 0;
const int ledPin = 9;
const int ContrainedMaxLightLevel = 255;
 
// We'll also set up some global variables for the light level:
int lightLevel;
int maxThreshold = 0;     // used for setting the "max" light level
int minThreshold = 1023;   // used for setting the "min" light level
 
void setup()
{
  pinMode(ledPin, OUTPUT);    // Set up the LED pin to be an output.
  Serial.begin(9600); // 9600 is the baud rate, used in the Serial Monior to read light levels.
}
 
void loop()
{
  lightLevel = analogRead(sensorPin);  // reads the voltage on the sensorPin
  calibrateToRoom();  // sets the the min / max values for light value ranges you see in your room.
  Serial.print("\t"); // tab character for better output formatting
  Serial.print(lightLevel); // prints to the "Serial Monitor" button in top right
 
  if(lightLevel < ContrainedMaxLightLevel/2){
    analogWrite(ledPin, ContrainedMaxLightLevel); // turn LED on
  }
  else{
    analogWrite(ledPin, 0); // turn LED off
  }
}
/******************************************************************
 * void calibrateToRoom()
 *
 * This function sets a minThreshold and maxThreshold value for the
 * light levels in your setting. Move your hand / light source / etc
 * so that your light sensor sees a full range of values. This will
 * "autoCalibrate" to your range of input values.
/*****************************************************************/
 
void calibrateToRoom()
{
  if (lightLevel < minThreshold)  // minThreshold was initialized to 1023 -- so, if it's less, reset the threshold level.
    minThreshold = lightLevel;
 
  if (lightLevel > maxThreshold)  // maxThreshold was initialized to 0 -- so, if it's bigger, reset the threshold level.
    maxThreshold = lightLevel;
 
  // Once we have the highest and lowest values, we can stick them
  // directly into the map() function.
  // This function must run a few times to get a good range of bright and dark values in order to work.
 
  lightLevel = map(lightLevel, minThreshold, maxThreshold, 0, ContrainedMaxLightLevel);
  lightLevel = constrain(lightLevel, 0, ContrainedMaxLightLevel);
}
