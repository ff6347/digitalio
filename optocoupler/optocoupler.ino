/**
 * optocoupler
 * This is just like a blink
 * but by controlling an external power source / circuit
 * An optocoupler can be used to control a circuit that's 
 * completely isolated from your microcontroller 
 * in order to avoid the risk of short-circuit. 
 * In this case, imagine that the LED + battery pack combo 
 * is a hacked toy that you're turning on and off with the Arduino.
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
