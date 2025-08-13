const int buttonPin = 2;  
const int outputPin = 3;  

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // botão com pull-up interno
  pinMode(outputPin, OUTPUT);
}

void loop() {
  int estadoBotao = digitalRead(buttonPin);

  if (estadoBotao == LOW) { 
    // botão pressionado -> saída HIGH
    digitalWrite(outputPin, HIGH);
  } else {
    // botão solto -> saída LOW
    digitalWrite(outputPin, LOW);
  }
}