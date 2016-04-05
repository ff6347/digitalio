/**
 * This programm takes the input of the serial
 * and toggles a LED when it is a 0 or 1
 */
int ledpin = 13;
void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  pinMode(ledpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available() > 0) {
    int value = Serial.read();
    Serial.print("This is what I recieved >> ");
    Serial.println(value);
    if (value == '1') {
      digitalWrite(ledpin, HIGH);
    }
    if (value == '0') {
      digitalWrite(ledpin, LOW);
    }
  }
}
