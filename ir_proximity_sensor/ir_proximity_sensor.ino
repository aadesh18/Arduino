int ledPin =13;
int inputPin = 2;
int motion = LOW;
int stat = 0;

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
}

void loop(){
  stat = digitalRead(inputPin);
  if (stat == HIGH){
    digitalWrite(ledPin, LOW);
    motion = HIGH;
  } else {
    digitalWrite(ledPin, HIGH);
    motion = LOW;
  }
}
