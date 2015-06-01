int outpin = 12;

void setup(){
  Serial.begin(9600);
  pinMode(outpin, OUTPUT);
  digitalWrite(outpin, LOW);
}
void loop(){
  if(Serial.available() > 0){
    char ctrl = Serial.read();
    if(ctrl == '0'){
      digitalWrite(outpin, HIGH);
    }else{
      digitalWrite(outpin, LOW);
    }
  }

}
