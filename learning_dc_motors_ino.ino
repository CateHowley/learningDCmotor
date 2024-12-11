#define ENABLE 5 // pin that the motor to turn on with insensity 
#define DIRECTIONA 3
#define DIRECTIONB 4


void setup() {
  // put your setup code here, to run once:
  pinMode (ENABLE, OUTPUT);
  pinMode(DIRECTIONA,OUTPUT);
  pinMode(DIRECTIONB,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ENABLE,HIGH);
  digitalWrite(DIRECTIONA,HIGH);
  digitalWrite(DIRECTIONB,LOW);
  delay(2000);
  digitalWrite(ENABLE,HIGH);
  digitalWrite(DIRECTIONA,LOW);
  digitalWrite(DIRECTIONB,HIGH);
  delay(2000);
}
