int led = LED_BUILTIN;
int ir = 7;
int ir_value = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
  pinMode(ir, INPUT);
}

void loop() {
  ir_value = digitalRead(ir);
  if (ir_value > 0) {
    Serial.println(ir_value);
    digitalWrite(led, ir_value);
  }
}