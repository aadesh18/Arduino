int ledPins[] = {2,3,4,5,6};

void setup() {
  for (int j=0; j<5; j++){
      pinMode(ledPins[j], OUTPUT);
  }
}

void loop() {
  for (int i=0; i<4; i++){
    turnOn(ledPins[i], ledPins[i+1]);
  }
  for(int i=5; i>0; i--){
    turnOn(ledPins[i], ledPins[i-1]);
    }
}

void turnOn(int ledPin1, int ledPin2){
  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  delay(100);
  digitalWrite(ledPin1, LOW);
  digitalWrite(ledPin2, LOW);
}
