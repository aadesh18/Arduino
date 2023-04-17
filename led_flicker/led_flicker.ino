int ledPin = 10;
byte flicker[] = {10,30,90,150,200,255};

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<=5; i++){
    analogWrite(ledPin, flicker[i]);
    delay(1000);
    }
}
