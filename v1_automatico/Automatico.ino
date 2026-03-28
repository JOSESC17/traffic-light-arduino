int rojo = 12;
int amarillo = 13;
int verde = 8;
void setup() {
	pinMode(rojo,OUTPUT);
  	pinMode(amarillo,OUTPUT);
  	pinMode(verde,OUTPUT);
}

void loop() {
  digitalWrite(rojo, HIGH);
  delay(5000);
  digitalWrite(rojo,LOW);
  delay(1000);
  digitalWrite(amarillo, HIGH);

  delay(2000);
  digitalWrite(amarillo,LOW);
  delay(1000);

  digitalWrite(verde, HIGH);
  delay(5000);
  digitalWrite(verde,LOW);
  delay(1000);
  
}
