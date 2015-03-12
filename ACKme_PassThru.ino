void setup() {
  // put your setup code here, to run once:
  pinMode(0,INPUT);
  pinMode(1,INPUT);
  pinMode(12,OUTPUT);
  digitalWrite(0,LOW);
  digitalWrite(1,LOW);
  digitalWrite(12,HIGH); // no wifi reset
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(500); // stfu
}

