void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(12,OUTPUT);
  pinMode(2,INPUT_PULLUP);
}

void loop() {
  int s =digitalRead(2);
  if(s==HIGH){
    digitalWrite(12,LOW);
    Serial.println(s);
    delay(1000);
  }else{
    digitalWrite(12,HIGH);
    Serial.println(s);
    delay(1000);
    }
  
  // put your main code here, to run repeatedly:

}
