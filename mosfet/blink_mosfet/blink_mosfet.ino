int pin = 9;
int i = 0;
bool up = true;
void setup() {
  // put your setup code here, to run once:
  pinMode(pin, OUTPUT);
}

// void loop() {
//   // put your main code here, to run repeatedly:
//   digitalWrite(pin, HIGH);
//   delay(1000);
//   digitalWrite(pin, LOW);
//   delay(1000);
// }

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(pin, i);
  delay(50);
  if (up == true) {
    i++;
  }
  if (up == false) {
    i--;
  }
  if (i == 0) {
    up = true;
  }
  if (i == 255) {
    up = false;
  }
}