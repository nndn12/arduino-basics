void setup() {
  // put your setup code here, to run once:
  pinMode(1,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(8,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  //red
  digitalWrite(1,HIGH);
  delay(10000);
  digitalWrite(1,LOW);
  //yellow
  digitalWrite(4,HIGH);
  delay(2000);
  digitalWrite(4,LOW);
  //blue
  digitalWrite(8,HIGH);
  delay(10000);
  digitalWrite(8,LOW);


}
