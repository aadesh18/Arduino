// Program to make the LED flicker 10 times
int ledPin = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<10; i++){
     for (int fadeLevel=0; fadeLevel<=255; fadeLevel+=5){
    analogWrite(ledPin, fadeLevel);
    delay(100);
    }
  for (int dfadeLevel=255; dfadeLevel>=0; dfadeLevel-=5){
    analogWrite(ledPin, dfadeLevel);
    delay(100);
  }
  
  }
}
