﻿Olá,
> Venho compartilhar meu conhecimento, de forma a também deixar de fácil acesso exemplos e formas de uso de componentes, um portfólio pessoal dos meus componentes.

# 🚶‍♂️ Teste Sensor de Presença

## 📌 Índice
- [🚶‍♂️ Teste Sensor de Presença](#️-teste-sensor-de-presença)
  - [📌 Índice](#-índice)
  - [📌 Descrição](#-descrição)
    - [🎯 Sensor de Presença HC-SR501](#-sensor-de-presença-hc-sr501)
      - [📍 O que é um Sensor de Presença?](#-o-que-é-um-sensor-de-presença)
      - [🔧 Especificações do Sensor](#-especificações-do-sensor)
    - [🎯 Como Funciona?](#-como-funciona)
  - [📌 Imagens dos Materiais](#-imagens-dos-materiais)
  - [📌 Requisitos](#-requisitos)
  - [📌 Instalação](#-instalação)
  - [📌 Uso](#-uso)
  - [Vídeo Demonstrativo do Funcionamento](#vídeo-demonstrativo-do-funcionamento)

---

## 📌 Descrição  

### 🎯 Sensor de Presença HC-SR501  

> **IMPORTANTE:** Certifique-se de conectar corretamente os pinos do sensor HC-SR501 conforme as instruções a seguir.

#### 📍 O que é um Sensor de Presença?  

Um **sensor de presença** é um dispositivo eletrônico usado para detectar movimento em uma área. O sensor HC-SR501 é um sensor PIR (infravermelho passivo), ideal para detectar movimento e acionar dispositivos como LEDs, motores ou alarmes.

🔹 **Aplicações:** Automação residencial, sistemas de segurança, controle de iluminação, robótica.  
🔹 **Vantagens:** Fácil de integrar, baixo consumo de energia.

#### 🔧 Especificações do Sensor  

- **Tensão de operação:** 5V  
- **Corrente de operação:** 10mA  
- **Distância de detecção:** 3 a 7 metros  
- **Ângulo de detecção:** 120°  
- **Saída:** Digital (HIGH/LOW)

<p align="center">
  <img src="imagensEvideos/sensor1.jpg" alt="Sensor HC-SR501" width="250">
  <img src="imagensEvideos/sensor2.jpg" alt="Sensor HC-SR501" width="260">
</p>

---

### 🎯 Como Funciona?  

O sensor HC-SR501 detecta variações de infravermelho em seu campo de visão, acionando sua saída digital quando detecta movimento.

---
## 📌 Imagens dos Materiais  

Aqui estão os principais componentes utilizados no projeto:  

| Componente              | Imagem                              |
|-------------------------|-------------------------------------|
| **Sensor de Presença HC-SR501** | <img src="imagensEvideos/sensor2.jpg" width="250"> |
| **LED**                  | <img src="imagensEvideos/Led.jpg" width="250"> |
| **Arduino Uno**          | <img src="imagensEvideos/Arduino.jpg" width="250"> |
| **Resistor de 220Ω**     | <img src="imagensEvideos/resistor.jpg" width="150"> |

---

## 📌 Requisitos  

✔ **Sensor de Presença HC-SR501**  
✔ **Arduino Uno ou similar**  
✔ **LED**  
✔ **Resistor de 220Ω**  
✔ **Jumpers e Protoboard**  
✔ **Cabo USB para conectar o Arduino**  
✔ **Software Arduino IDE**

---

## 📌 Instalação  

1️⃣ **Conecte o Sensor HC-SR501 ao Arduino:**

| Pino | Função                |
|------|-----------------------|
| VCC  | 5V                    |
| GND  | GND                   |
| OUT  | Pino digital do Arduino (ex: pino 7) |

2️⃣ **Conecte o LED:**
   - Anodo do LED ao pino digital `6` do Arduino.
   - Catodo do LED ao GND com um resistor de 220Ω.

---

## 📌 Uso  

1️⃣ **Código de Teste:**

```cpp
#define SENSOR_PIN 7
#define LED_PIN 6

void setup() {
  pinMode(SENSOR_PIN, INPUT);  // Sensor de presença
  pinMode(LED_PIN, OUTPUT);    // LED
}

void loop() {
  int sensorState = digitalRead(SENSOR_PIN);
  
  if (sensorState == HIGH) {  // Movimento detectado
    digitalWrite(LED_PIN, HIGH);  // Aciona o LED
  } else {
    digitalWrite(LED_PIN, LOW);   // Desliga o LED
  }
}
```


## Vídeo Demonstrativo do Funcionamento

https://github.com/JoyFigueiredo/ArduinoHobby/assets/87450298/6761174e-ef0a-4d2b-aa69-04409154db7c

