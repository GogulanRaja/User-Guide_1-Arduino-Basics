  /* ANALOG INPUT RGB: Being able to change the clour of an RGB LED by using a potentiometer
 * Using the potentiometer as an INPUT, the RGB LED as an OUTPUT and 3 resistors
 * We give a range value for each colour so that there are specific moments for the desired colour to appear
 */

    //The Red LED is on pin 7 of the arduino
   //The Green LED is on pin 8 of the arduino
    //The Blue LED is on pin 9 of the 

int R = 11; //The Red LED is on pin 11 of the arduino
int G = 10; //The Green LED is on pin 10 of the arduino
int B = 9; //The Blue LED is on pin 9 of the arduino

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(R,OUTPUT); //The Red LED's pin is an OUTPUT
pinMode(G,OUTPUT); //The Green LED's pin is an OUTPUT 
pinMode(B,OUTPUT); //The Blue LED's pin is an OUTPUT
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(A0);
if(sensorValue < 350){          //If the val is under 350, the R led will be ON
analogWrite(R,sensorValue);
}
else if (sensorValue >= 351){     
analogWrite(G,sensorValue);    //If the val is greater or equal than 351, the G led will be ON
digitalWrite(G, HIGH);
}
else{
analogWrite(B,sensorValue < 750);   //If the val is greater than 750 and less, the B led will be ON
}
}
