/**
 * simple setup that shows how to use internal pull up
 */
int inpin = 2;
int outpin = 13;
void setup(){
  pinMode(inpin, INPUT_PULLUP);
  pinMode(outpin, OUTPUT);
}
void loop(){
  if(digitalRead(inpin)== HIGH){
    digitalWrite(outpin, LOW);
  }else{
    digitalWrite(outpin, HIGH);
  }
}