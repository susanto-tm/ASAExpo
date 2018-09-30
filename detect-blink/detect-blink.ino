const int ledPin = 13;
char serIn;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0) {
    serIn = Serial.read();
    Serial.print(serIn);
    
    if (serIn == 'A') {
      digitalWrite(ledPin, HIGH);
    }
    else if (serIn == 'B') {
      digitalWrite(ledPin, LOW);
    }
  }
}
