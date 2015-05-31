/**
 * based on this
 * http://playground.arduino.cc/Main/PanasonicIrSensor
 * use with some IR remote control
 *
 *
 *
 */
 int ledpin = 12; // this is just for reference
 int irsensorpin = 3; // read digital

 void setup(){
 Serial.begin(9600);// for seeing whats going on
 pinMode(ledpin, OUTPUT); // init
 pinMode(irsensorpin, INPUT); // init

 }

 void loop(){

   int recieved = digitalRead(irsensorpin); // read from the pin
   /**
    * if there is something it is 0
    * if not it is 1
    */
   if(recieved == 0){
     digitalWrite(ledpin, HIGH);// turn the LED on
     Serial.println("Message recieved");
   }else{
     digitalWrite(ledpin, LOW);// turn the LED off
   }
   delay(10);// wait a bit
 }
