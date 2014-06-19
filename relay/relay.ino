/**
 * Relay
 * This is just like a blink
 * but by controlling an external power source
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
