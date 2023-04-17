// Comment the unused method before running. 
 
 // Method 1

int led = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(led, HIGH);
delay(500);
digitalWrite(led, LOW);
delay(500);
}


// Method 2

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop(){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
