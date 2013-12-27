/*
Adafruit Arduino - Lesson 4. 8 LEDs and a Shift Register
http://learn.adafruit.com/adafruit-arduino-lesson-4-eight-leds/arduino-code

Shiftout tutorial

http://arduino.cc/en/tutorial/ShiftOut

PINS 1-7, 15	 Q0 " Q7	 Output Pins
PIN 8	 GND	 Ground, Vss
PIN 9	 Q7"	 Serial Out
PIN 10	 MR	 Master Reclear, active low
PIN 11	 SH_CP	 Shift register clock pin
PIN 12	 ST_CP	 Storage register clock pin (latch pin)
PIN 13	 OE	 Output enable, active low
PIN 14	 DS	 Serial data input
PIN 16	 Vcc	 Positive supply voltage
  
*/
 
//Pin connected to ST_CP of 74HC595
int latchPin = 8;
//Pin connected to SH_CP of 74HC595
int clockPin = 12;
////Pin connected to DS of 74HC595
int dataPin = 11;

byte leds = 0;
 
void setup() {

  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);  
  pinMode(clockPin, OUTPUT);
  setGraph(B10000111);
//  setBarGraph(0);
//  setBarGraphOf();
}
 
void loop(){
//loopGraph();
}
void loopGraph(){
    leds = 0;
  updateShiftRegister();
  delay(500);
 for (int i = 0; i < 8; i++){

    bitSet(leds, i);
   updateShiftRegister();
    delay(500);
  }
}
void setGraph(byte val){
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, val);
   digitalWrite(latchPin, HIGH);
}

void setBarGraphOf(){
      leds = 0;
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}
void setBarGraph(int i){
//      leds = 0;
      bitSet(leds, i);
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
   
}
void updateShiftRegister(){
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}
