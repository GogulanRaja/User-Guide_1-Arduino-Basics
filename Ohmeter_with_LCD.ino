// THE OHMMETER: Used to display the ohm of the unknown resistor and display it on the LCD

float R1 = 220.0; //The known Resistor is 220 ohm
float R2 = 0.0;   //The second Resistor is a variable where it can store a value
float Volt = 5.0;  //The voltage input of 5V
float Bit = 0; //A variable where it can store the bit value (0-1023)
float VoltVal = 0; //A variable where it can store the voltage value (0-5)

#include <LiquidCrystal.h> // Includes the LCD code from the library.

LiquidCrystal lcd(12, 11, 5, 4, 3, 2); //Setting up the pins that are being used by the LCD.    

byte customChar[] = {                  //The customised symbol 
  B00000,                              //Paste the code from the website
  B00000,
  B01110,
  B10001,
  B10001,
  B01010,
  B11011,
  B00000
};

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //Establishes a communication 

lcd.begin(16, 2);   //Establishes a communication with the LCD, also allows to use 16 characters and the 2 rows on the LCD
lcd.home();

}

void loop() {
  // put your main code here, to run repeatedly:
 
  // Calculation
BitVal = analogRead(analogInput); //Reads and stores the bit value (Bit)
Serial.print(Bit); //Printing the desired text

Serial.print("\t"); //Printing a gap on the rows
float VolVal = Bit * (Vol / 1023.0); // This calculates the amount to convert the bit value into voltage. 5 Volts equals 1023, you divide it then times it by the given bit value
Serial.print(VoltVal); //Printing the desired text

Serial.print("\t"); //Print a gap on the rows
float R2 = R1 * (1/((Vin/VolVal)-1)); // this calculate the number of the unknow resistor
Serial.println(R2); //Printing the desired text

// print lcd part
lcd.print("Second resistor value") //Print the words on the first row of the LCD
 lcd.setCursor(0, 1); //The cursor to the next row at the left.
 lcd.print("R =") //Print the words ont the second row of the LCD
 lcd.print(R2); //Print the value stored into the R2 variable.
                //Display the symbol after
 lcd.write(byte (0)); 
 lcd.createChar(0, customChar);    //Allows to display the custom symbol

}
