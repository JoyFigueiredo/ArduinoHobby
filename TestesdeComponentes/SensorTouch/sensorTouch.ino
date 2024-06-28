/*------------------------------------------------------------------------------------------
* Projeto: Teste de Componentes
* Autor: Joice Barros de Figueiredo
* Descrição: Este projeto tem como objetivo testar o funcionamento do touch
* e o acionamento de um led.
------------------------------------------------------------------------------------------*/

int ledPin = 6; // Pino do LED
int pinoTouch = 7; // Pino do sensor de toque
int leitura = 0; // Variável para armazenar a leitura do sensor
bool estadoSensor = false; // Variável para armazenar o estado do sensor

void setup() {
  Serial.begin(9600); // Inicializa a comunicação serial
  pinMode(ledPin, OUTPUT); // Define ledPin como saída
  pinMode(pinoTouch, INPUT); // Define pinoTouch como entrada para sensor de toque
}

void loop() {
  leitura = digitalRead(pinoTouch); // Realiza a leitura do sensor de toque

  if (leitura == HIGH) { // Se leitura for igual a HIGH, o toque foi detectado
    digitalWrite(ledPin, HIGH); // Aciona o LED
    if (estadoSensor == false) { // Verifica se o LED acabou de ser ligado
      Serial.println("Toque detectado"); // Imprime a mensagem no monitor serial
      estadoSensor = true; // Atualiza o estado do sensor para true
    }
    delay(5000); // Tempo que o LED fica aceso após o toque

  } else { // Se leitura for igual a LOW, não houve toque detectado
    digitalWrite(ledPin, LOW); // Desliga o LED
    if (estadoSensor == true) { // Verifica se o LED acabou de ser desligado
      Serial.println("Sem toque"); // Imprime a mensagem no monitor serial
      estadoSensor = false; // Atualiza o estado do sensor para false
    }
  }
}
