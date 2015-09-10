
int led = 13;

void setup() {
  
  Serial.begin(9600); // initalize Serial Communication
  
  pinMode(led, OUTPUT);
}

void loop() {

  
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  Serial.println("I'm on");  // write to the serial Monitor
  delay(1000);    
  
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  Serial.println("I'm off"); // write to the Serial Monitor
  delay(1000);               // wait for a second
}
