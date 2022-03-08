/* LIGHT CHASER: Allowing three LEDS turning ON or OFF with a rythm 
 * Three resistors and three different cooloured LEDS being used
 */


int R = 7;    //The Red LED is on pin 7 of the arduino
int G = 8;    //The Green LED is on pin 8 of the arduino
int B = 9;    //The Blue LED is on pin 9 of the arduino

void setup() {
  // put your setup code here, to run once:
pinMode(R, OUTPUT);    //The Red LED's pin is an OUTPUT
pinMode(G, OUTPUT); //The Green LED's pin is an OUTPUT 
pinMode(B, OUTPUT);   //The Blue LED's pin is an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(R, HIGH);     //The Red led will turn ON.
delay(1000);               //Wait 1000 millisecond (1 second) before it will turn on the next LED
digitalWrite(R, LOW);      //The Red led will turn OFF.
delay(1000)
digitalWrite(G, HIGH);    //The Green led will turn ON.
delay(1000);
digitalWrite(G, LOW);     //The Green led will turn OFF.
delay(1000)
digitalWrite(B, HIGH);    //The Blue led will turn ON.
delay(1000);
digitalWrite(B, LOW);     //The BLue led will turn OFF.
delay(1000);              
}
