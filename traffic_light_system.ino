int x=3000;
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
  delay(x);
  digitalWrite(1,LOW);
  //yellow
  digitalWrite(4,HIGH);
  delay(x);
  digitalWrite(4,LOW);
  //blue
  digitalWrite(8,HIGH);
  delay(x);
  digitalWrite(8,LOW);


}
