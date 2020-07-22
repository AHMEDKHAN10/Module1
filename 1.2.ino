
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(5,OUTPUT);
  digitalWrite(2,LOW);
  attachInterrupt(0,buttonpressed,RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
}
void buttonpressed()
{
  if(digitalRead(2)==HIGH)
  {
//    Serial.println("active");
    digitalWrite(5,HIGH);
  }
  else
  {
//    Serial.println("inactive");
    digitalWrite(5,LOW);
  }
}
