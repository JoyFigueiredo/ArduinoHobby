#define STEP_PIN 9
#define DIR_PIN 8

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
}

void loop() {
  digitalWrite(DIR_PIN, HIGH);  // Define a direção
  for(int i = 0; i < 200; i++) {  // 200 passos = 1 volta completa
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(800);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(800);
  }
  delay(1000);
}