﻿## Índice
- [Descrição](#descrição);
    - [Motor de Passo](#motor-de-passostepper-motor-nema-17---17hs4440---jk42hs40-1704);
    - [Driver A4988](#driver-a4988);
    - [Regulador de Tensão](#regulador-de-tensão-lm2596);
    - []();
- [Imagens dos Materiais](#imagens-dos-materiais);
- [Requisitos](#requisitos);
- [Instalação](#instalação);
- [Uso](#uso);
- [Inicialização](#inicialização);


## Descrição 

 ### 📌 Motor de Passo(Stepper Motor) Nema 17 - 17HS4440 - JK42HS40-1704
> [!IMPORTANT]
> Verifique se esta com o Motor de passo correspondente, e verifique suas informações no Datasheet: [Motor de Passo Nema 17 - DataSheet](Datasheet%20-%2017HS4401S.pdf).

- O que é um motor de passo?
Um **motor de passo** é um tipo de motor elétrico que se move em pequenos passos fixos. Diferente de motores comuns, que giram continuamente, ele avança em **passos discretos**, permitindo um controle preciso de posição e velocidade.  
🔹 **Aplicações:** Impressoras 3D, CNCs, robôs, automação industrial, etc.  

🔹 **Vantagens:** Controle preciso sem sensores extras. 

---

- 🎯 Como Funciona?  

O motor de passo tem várias bobinas internas organizadas em fases. Quando uma corrente elétrica passa por essas bobinas, o rotor (parte móvel do motor) gira em pequenos passos.  

- 🔄 Tipos de Movimento  

1️⃣ **Passo Completo**: Move-se um passo por vez.  
2️⃣ **Meio Passo**: Aumenta a precisão dividindo cada passo.  
3️⃣ **Micro Passo**: Movimento mais suave e silencioso.  

![Funcionamento do Motor de Passo](https://upload.wikimedia.org/wikipedia/commons/4/4f/StepperMotor.gif)  

---

- 🖥 Ligando o Motor ao Arduino  

Para controlar um motor de passo com **Arduino**, usamos um **driver A4988**. Ele converte sinais elétricos em pulsos precisos para movimentar o motor.  

 ### 📌Driver A4988

 ### 📌Regulador de Tensão LM2596

## Requisitos

### Imagens dos Materiais

## Instalação

## Uso

## Inicialização

## Vídeo Demonstrativo do Funcionamento


