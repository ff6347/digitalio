/**
 * transistor
 * This is just like a blink
 * but controlling the current flow with a transistor
 * it is like a digital switch
 *
 */
int pin = 13;
 void setup(){
 pinMode(pin,OUTPUT);
 }
 
 void loop(){
 
   digitalWrite(pin,HIGH);
   delay(500);
   digitalWrite(pin,LOW);
   delay(500);   
 
 }
