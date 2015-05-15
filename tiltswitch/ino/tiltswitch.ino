/**
 * Simple tilt switch sketch.
 * Turns a LED on pin 13 on and off
 *
 */
int ledpin = 12; // for output
int tiltpin = 2; // tiltswitch in put
int is_on = 0;// boolean

void setup(){
pinMode(ledpin, OUTPUT); // init
pinMode(tiltpin, INPUT); // init
}

void loop(){
  is_on = digitalRead(tiltpin); // read from the switch

  if(is_on){
  digitalWrite(ledpin,HIGH); // on
  }else{
    digitalWrite(ledpin,LOW); // off
  }
}
