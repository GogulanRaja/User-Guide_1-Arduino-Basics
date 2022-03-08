/* Used to blink an LED
 * Resistor (220 ohm currently) and an LED
*/


void setup() {
  // put your setup code here, to run once:

pinMode(12, OUTPUT); // We set the pin 12 as an OUTPUT.
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(12, HIGH); //Set the digital pin 12 HIGH/ON
delay(500);             //Set a time before continuing the loop\
digitalWrite(12, LOW);  //Set the digital pin 12 LOW/OFF
delay(500);             
