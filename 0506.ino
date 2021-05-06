void setup() {
  // put your setup code here, to run once:
  pinMode(12,OUTPUT);
  pinMode(2,INPUT_PULLUP);
}

void loop() {
  if(digitalRead(2)==HIGH){
    digitalWrite(12,LOW);
  }else{
    digitalWrite(12,HIGH);
    }
  
  // put your main code here, to run repeatedly:

}
