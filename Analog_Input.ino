/* ANALOG INPUT: It is used to vary the OUTPUT
 * Our INPUT is a potentiometer and an LED as an OUTPUT
 * The bit range of the potentiometer is 0-1023
 * The bit range of an LED is 0-255
 * Since the range for the potentiometer is much bigger than the LED, we need to lower it by division to match the scale
 * To have it to the closest range, we divide the value on the potentiometer by 4 (potentiometer / 4)
 */



int ledPin = 10; //the PWM pin the LED is attached to

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(ledPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int sensorValue = analogRead(A0);
Serial.print(sensorValue);
Serial.print("\t");
delay(1);

float voltage = sensorValue * (5.0 / 1023.0);
Serial.println(voltage);
delay(1);
analogWrite(ledPin, sensorValue/4);


}
