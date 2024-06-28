﻿# Teste Sensor de Toque

## Índice
- [Descrição](#descrição)
- [Requisitos](#requisitos)
- [Instalação](#instalação)
- [Uso](#uso)
- [Inicialização](#inicialização)
- [Imagens dos Materiais](#imagens-dos-materiais)

## Descrição

Este projeto tem como objetivo testar o funcionamento de um sensor de toque e o acionamento de um LED quando o sensor detectar um toque. O sensor de toque é utilizado para detectar o toque em uma superfície e acionar um LED correspondente.

## Requisitos

Para executar este projeto, você precisará de:

- Arduino (por exemplo, Arduino Uno)
- Sensor de toque capacitivo (ex: TTP223)
- LED
- Resistor de 220Ω para o LED
- Jumpers e protoboard
- Cabo USB para conectar o Arduino ao computador
- Software Arduino IDE

### Imagens dos Materiais

- Arduino: 

  <img src="imagensEvideos/Arduino.jpg" alt="Arduino Uno" width="200">

- Led Azul:

  <img src="imagensEvideos/Led.jpg" alt="Led Azul" width="200">

- Sensor de Toque:

  <img src="imagensEvideos/sensorTouch.jpg" alt="Sensor de Toque" width="190">

## Instalação

1. **Instale o Arduino IDE**:
   - Baixe e instale o Arduino IDE a partir do [site oficial](https://www.arduino.cc/en/software).

2. **Baixe o Código**:
   - Clone este repositório ou baixe o código manualmente.
     ```bash
     git clone https://github.com/seu-usuario/teste-componentes.git
     ```

3. **Abra o Código no Arduino IDE**:
   - Abra o arquivo `.ino` no Arduino IDE.

4. **Conecte o Arduino ao Computador**:
   - Conecte seu Arduino ao computador usando um cabo USB.

5. **Configure o Arduino IDE**:
   - Selecione a placa correta (por exemplo, Arduino Uno) em **Ferramentas > Placa**.
   - Selecione a porta correta em **Ferramentas > Porta**.

6. **Faça o Upload do Código**:
   - Clique no botão de upload (seta para a direita) para carregar o código no Arduino.

## Uso

1. **Conecte o Sensor e o LED**:
   - **Sensor de Toque**: Conecte o pino de saída do sensor ao pino digital `7` do Arduino.
   - **LED**: Conecte o anodo do LED ao pino digital `6` do Arduino e o catodo ao GND, com um resistor de 220Ω em série.

2. **Monitore o Serial**:
   - Abra o monitor serial no Arduino IDE em **Ferramentas > Monitor Serial** para ver as leituras do sensor.

3. **Testar o Sensor**:
   - Toque no sensor e observe o comportamento do LED e as mensagens no monitor serial.

## Inicialização

Para iniciar o monitoramento, siga estas etapas no Arduino IDE:

1. **Conectar e Subir o Código**:
   ```bash
   # Conectar o Arduino ao computador e subir o código
   # No Arduino IDE, clique em Upload para carregar o código no Arduino.


## Vídeo Demonstrativo do Funcionamento

https://github.com/JoyFigueiredo/ArduinoHobby/assets/87450298/07a08eba-10fd-4d6d-8f5a-3f352e77d485


