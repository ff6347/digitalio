/**
 * Simple push button sketch.
 * Turns a LED on pin 13 on and off
 *
 */
int ledpin = 12; // for output
int pushpin = 2; // pushbutton input
int is_on = 0;// boolean

void setup(){
pinMode(ledpin, OUTPUT); // init
pinMode(pushpin, INPUT); // inti
  
}
void loop(){
  is_on = digitalRead(pushpin); // read from the button

  if(is_on){
  digitalWrite(ledpin,HIGH); // on
  }else{
    digitalWrite(ledpin,LOW); // off
  }
}
