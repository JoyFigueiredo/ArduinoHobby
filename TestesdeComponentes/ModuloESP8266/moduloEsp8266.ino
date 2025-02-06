/*
     CÓDIGO:  Q0589-Master
     AUTOR:   BrincandoComIdeias
     LINK:    https://www.youtube.com/brincandocomideias ; https://cursodearduino.net/ ; https://cursoderobotica.net
     COMPRE:  https://www.arducore.com.br/
     SKETCH:  Integrando Variaveis entre 2 Arduinos - Esp01 Master
     DATA:    26/01/2020
*/

// INCLUSÃO DE BIBLIOTECAS
#include <A2a.h>
#include "config.h"

// DEFINIÇÕES
#define endereco 0x08              // Endereço do dispositivo I2C
#define tempoAtualizacao 10000     // Tempo de atualização em milissegundos (10 segundos)

// INSTANCIANDO OBJETOS
AdafruitIO_Feed *sensor = io.feed("sensor");          // Feed do sensor no Adafruit IO
AdafruitIO_Feed *displayLED = io.feed("displayLED");  // Feed do display LED no Adafruit IO

A2a arduinoSlave;  // Instanciação do objeto para comunicação I2C com o Arduino escravo

// DECLARAÇÃO DE FUNÇÕES
void configuraMQTT();                       // Função para configurar a conexão MQTT
void retornoDisplayLED(AdafruitIO_Data *data);  // Função de callback para dados recebidos do Adafruit IO
bool monitoraSensor();                      // Função para monitorar o sensor

// DECLARAÇÃO DE VARIÁVEIS
unsigned long controleTempo = 0;            // Variável para controle de tempo
bool comandoRecebido = false;               // Flag para indicar se um comando foi recebido
unsigned int valorSensor;                   // Variável para armazenar o valor do sensor

void setup() {
  Serial.begin(9600);                       // Inicializa a comunicação serial
  while (!Serial);                          // Aguarda a inicialização da comunicação serial

  configuraMQTT();                          // Configura a conexão MQTT

  arduinoSlave.begin(0, 2);                 // Inicializa a comunicação I2C com o Arduino escravo

  Serial.println("Atualizando valor do Display de LED");
  
  displayLED->get();                        // Solicita o valor atual do display LED no Adafruit IO
  io.run();                                 // Executa o serviço Adafruit IO
  
  Serial.println("Fim Setup");
}

void loop() {
  io.run();                                 // Executa o serviço Adafruit IO

  // Monitora o sensor
  if (millis() > controleTempo + tempoAtualizacao) {  // Verifica se o tempo de atualização foi atingido
    if (monitoraSensor()) {                            // Monitora o sensor e verifica se houve mudança
      controleTempo = millis();                        // Atualiza o controle de tempo
      sensor->save(valorSensor);                       // Salva o valor do sensor no Adafruit IO
    }
  }
}

// IMPLEMENTAÇÃO DE FUNÇÕES
void configuraMQTT() {
  Serial.print("Conectando ao Adafruit IO");
  io.connect();                         // Conecta ao Adafruit IO

  displayLED->onMessage(retornoDisplayLED);  // Define a função de callback para mensagens recebidas do Adafruit IO

  while (io.status() < AIO_CONNECTED) {  // Aguarda a conexão ao Adafruit IO
    Serial.print(".");
    delay(500);                          // Delay de 500 ms entre as tentativas de conexão
  }

  Serial.println();
  Serial.println(io.statusText());       // Imprime o status da conexão
}

void retornoDisplayLED(AdafruitIO_Data *data) {
  Serial.print("Controle Recebido <- ");  
  Serial.println(data->value());         // Imprime o valor recebido do Adafruit IO
  
  arduinoSlave.varWireWrite(endereco, 2, byte(data->toInt()));  // Envia o comando para o Arduino escravo via I2C
}

bool monitoraSensor() {
  static int leituraAnt;                 // Variável estática para armazenar a leitura anterior
  
  // Lê dois bytes do Arduino escravo via I2C
  byte byte1 = arduinoSlave.varWireRead(endereco, 0);
  byte byte2 = arduinoSlave.varWireRead(endereco, 1);
  unsigned int leitura = byte1 << 8 | byte2;  // Combina os dois bytes para formar a leitura do sensor
  
  if (leitura != leituraAnt) {           // Verifica se a leitura mudou

    valorSensor = leitura;               // Atualiza o valor do sensor
    
    leituraAnt = leitura;                // Atualiza a leitura anterior
    return true;                         // Retorna true indicando que houve mudança na leitura
  } else {
    return false;                        // Retorna false indicando que n
