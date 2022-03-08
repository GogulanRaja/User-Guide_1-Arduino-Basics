/* THE NON_DELAY: Being able to control the blink of an LED with a pushbutton without delay being used
 *  Using a Red LED for the non delay and Green LED for the pushbutton and both using 220 ohm resistors.
 *  Unlike the delay, the millis will allow the arduino to perform various actions at once and not freeze the everything.
 */



int PB = 8;            //The PushButton to pin 8
int PBstate;          //A variable where we can store a value
int G = 6;           //Green Led as pin 6

int R = 4;                        //Red Led as pin 4              
int intervalLED = 1000;          //The interval of 1000 millisecond
unsigned long previousmillis = 0;  //We use this over an int since it can store a much greater value
int LEDstate = LOW;            //Setting the starting state of the LED


void setup() {
  // put your setup code here, to run once:
pinMode(R, OUTPUT);  // Set the Red Led as an OUTPUT.
pinMode(G, OUTPUT);  // Set the Yellow Led as an OUTPUT.
pinMode(PB, INPUT);     // Set the PushButton as an INPUT.
}

void loop() {
  // put your main code here, to run repeatedly:


  //LED loop
unsigned long currentMillis = millis(); //Millis work like a stopwatch, it will only commence once the arduino powers up

 if(currentMillis - previousmillis >= intervalLED){ //if the currentMillis subtracted by previousmillis is greater or equal to the intevalLED
  previousmillis = currentMillis;                   //then previousmillis will equal to currentMillis

  if (LEDstate == LOW) {  //If it's true, it will turn ON
    LEDstate = HIGH;  //The state will be high. LED ON
    
  } else {      // Else if it's falsw, it will turn OFF
    LEDstate = LOW;  //The state will be low. LED OFF
}

digitalWrite(R, LEDstate);    //Red LED will Turn ON/OFF based on the state given.



// Push button loop
PBstate= digitalRead(PB);  // The value onto pin 8 will be stored

if (PushBstate == HIGH){           // If it's true, it will turn ON
  digitalWrite(G, HIGH);      // Turn ON the Yellow LED
}
  else{
   digitalWrite(G,LOW);       // Turn OFF the Yellow LED
  
}

}
