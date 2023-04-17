int ledPin = 10;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
controlledLedBlink(150, 100);
controlledLedBlink(400, 100);
controlledLedBlink(150, 100);
delay(3000);
}

void controlledLedBlink(int highDelay, int lowDelay){
  digitalWrite(ledPin, HIGH);
  delay(highDelay);
  digitalWrite(ledPin, LOW);
  delay(lowDelay);
}
