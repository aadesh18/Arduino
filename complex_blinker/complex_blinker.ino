int ledPins[] = {8,9,10};

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPins, OUTPUT);
}

void loop() {
blink(ledPins[0], ledPins[1]);
blink(ledPins[1], ledPins[2]);
blink(ledPins[0], ledPins[2]);
}

void blink(int pin1, int pin2){
  for (int i=0; i<10; i++){
    digitalWrite(pin1, HIGH);
    digitalWrite(pin2, HIGH);
    delay(300);
    digitalWrite(pin1, LOW);
    digitalWrite(pin2, LOW);
    delay(300);
    }

}
