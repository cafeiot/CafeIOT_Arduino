void setup() {
  for (int i = 2; i < 8; i = i + 1) {
    pinMode(i, OUTPUT);
  }
}

void loop() {

  for (int i = 2; i < 8; i = i + 1) {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
  for (int i = 6; i > 2; i = i - 1) {
    digitalWrite(i, HIGH);
    delay(100);
    digitalWrite(i, LOW);
  }
  for (int i = 2; i < 5; i = i + 1) {
    digitalWrite(i, HIGH);
  }
  delay(250);
  for (int i = 2; i < 5; i = i + 1) {
    digitalWrite(i, LOW);
  }
  delay(250);
  for (int i = 2; i < 5; i = i + 1) {
    digitalWrite(i, HIGH);
  }
  delay(250);
  for (int i = 2; i < 5; i = i + 1) {
    digitalWrite(i, LOW);
  }
  delay(250);
  for (int i = 5; i < 8; i = i + 1) {
    digitalWrite(i, HIGH);
  }
  delay(250);
  for (int i = 5; i < 8; i = i + 1) {
    digitalWrite(i, LOW);
  }
  delay(250);
  for (int i = 5; i < 8; i = i + 1) {
    digitalWrite(i, HIGH);
  }
  delay(250);
  for (int i = 5; i < 8; i = i + 1) {
    digitalWrite(i, LOW);
  }
}
