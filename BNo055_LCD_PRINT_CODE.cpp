#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BNO055.h>
#include <utility/imumaths.h>
#include <LiquidCrystal.h>

#define BNO055_SAMPLERATE_DELAY_MS (100) // Delay between each data point
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);  // Teensy 4.1 pin configuration (RS, E, D4, D5, D6, D7)
Adafruit_BNO055 bno = Adafruit_BNO055(55, 0x28); // I2C address for BNO055

int scrollDelay = 250; // Delay for scrolling speed
int pauseDelay = 1000; // Pause before restarting loop

void setup() {
  lcd.begin(16, 2); // Initialize LCD with 16 columns and 2 rows
  
  Serial.begin(115200);
  Serial.println("Testing BNO055");

  if (!bno.begin()) {
    Serial.println("The BNO055 is not detected, check I2C wires");
    while (1); // Halt if BNO055 is not detected
  }
  
  bno.setExtCrystalUse(true); // Use external crystal for better accuracy
}

void loop() {
    // Get temperature from the BNO055 sensor
    int8_t temp = bno.getTemp(); 

    // Create the temperature string to be displayed
    String tempString = "Temp= " + String(temp) + "C ";

    // Print the temperature string once at the rightmost position
    lcd.setCursor(15, 0); // Start at the far right of the display
    lcd.print(tempString);

    // Scroll the temperature string to the left
    for (int positionCounter = 0; positionCounter < (tempString.length() + 16); positionCounter++) {
        lcd.scrollDisplayLeft(); // Scroll the entire display left by one position
        delay(scrollDelay);  // Adjust delay as needed for scroll speed
    }

    // Clear the display after scrolling is done
    lcd.clear();
    delay(pauseDelay); // Add some delay before restarting the loop
}



  //Clears the LCD screen and positions the cursor in the upper-left corner.
    /*lcd.setCursor(15,1);  // set the cursor to column 15, line 1
    for (int positionCounter2 = 0; positionCounter2 < 26; positionCounter2++)
    {
      lcd.scrollDisplayLeft();  //Scrolls the contents of the display one space to the left.
      lcd.print(array2[positionCounter2]);  // Print a message to the LCD.
      delay(tim);  
    }



    lcd.clear();





    ////////////////////////////////////////////////////
  
    /*
    imu::Vector<3> euler = bno.getVector(Adafruit_BNO055::VECTOR_EULER);


    Serial.print("X: ");
    Serial.print(euler.x());
    Serial.print(" Y: ");
    Serial.print(euler.y());
    Serial.print(" Z: ");
    Serial.print(euler.z());
    Serial.print("\t\t"); 
    */


    /*int8_t temp=bno.getTemp();
    Serial.print(" Temp = ");
    Serial.print(temp,DEC); Serial.print("");
    uint8_t system, gyro, accel, mag = 0;
    bno.getCalibration(&system, &gyro, &accel, &mag);
    Serial.print("CALIBRATION: Sys=");
    Serial.print(system, DEC);
    Serial.print(" Gyro=");
    Serial.print(gyro, DEC);
    Serial.print(" Accel=");
    Serial.print(accel, DEC);
    Serial.print(" Mag=");
    Serial.println(mag, DEC);

    delay(BNO055_SAMPLERATE_DELAY_MS);

  */









