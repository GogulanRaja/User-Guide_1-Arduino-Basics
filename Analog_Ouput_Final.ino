/* ANALOG OUTPUT: Fading an LED
 * Using a resistor of 220 ohms and an LED
 * Values keep going up until the maximum of 255 since the bit range of an LED is 0-255
 */

void setup() {
  // put your setup code here, to run once:
pinMode(0, OUTPUT); //Analog pin 0 will be an OUPUT
}

void loop() {
  // put your main code here, to run repeatedly:

analogWrite(0, 30);   //These values between 0 and 255 will determine the brightness of the LED
analogWrite(0, 60);
analogWrite(0, 120);
analogWrite(0, 180);
analogWrite(0, 220);   
analogWrite(0, 240);
analogWrite(0, 255);

}
