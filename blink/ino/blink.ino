/**
 * Hello blink
 */
int ledpin = 13; // the LED pin 13 needs no resistor

void setup(){
  pinMode(ledpin,OUTPUT); // swtup the pin for output
}

void loop(){
  digitalWrite(ledpin, HIGH);// on
  delay(500); // wait
    digitalWrite(ledpin, LOW); // of
  delay(500);// wait
}
