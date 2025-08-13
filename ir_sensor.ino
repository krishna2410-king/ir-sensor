const int irpin = 8;
const int ledpin1 = 4;
const int ledpin2 = 5;
const int ledpin3 = 6;
const int ledpin4 = 7;

void setup() {
  // put your setup code here, to run once:
pinMode(irpin, INPUT);
pinMode(ledpin1 , OUTPUT);
pinMode(ledpin2 , OUTPUT);
pinMode(ledpin3 , OUTPUT);
pinMode(ledpin4 , OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
int irstate = digitalRead(irpin);
 if (irstate == LOW)
 {
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
 }
 else
 {
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
 }

}
