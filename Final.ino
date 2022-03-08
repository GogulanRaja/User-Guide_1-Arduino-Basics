/*DIGITAL INPUT: Print a value coming from a pushbutton
 * A 220 resistor with a pushbutton are being used
 */

int val; //Variable where a value can be stored

void setup() {
// put your setup code here, to run once:
pinMode(12, INPUT);  //The digital pin 12 will be an INPUT
Serial.begin(9600); //A communication will be established to be able to print the value
}

void loop() {
// put your main code here, to run repeatedly:
val = digitalRead(12);  //The value on pin 12 will be read and stored in val
println(val);           //The desired value will be printed

}
