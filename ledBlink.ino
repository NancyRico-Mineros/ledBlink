int ledPin = 29;
int ledPin2 = 30;
int switchPin = 31;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(switchPin, INPUT);

}

void loop() {
  if (digitalRead(switchPin) == HIGH) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2, HIGH);
    delay (500);
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin2, LOW);
    delay(500);
  }
}
