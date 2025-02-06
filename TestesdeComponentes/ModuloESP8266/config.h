/************************ Configuração Adafruit IO *******************************/

// visite io.adafruit.com se você precisar criar uma conta,
// ou se você precisar da sua chave Adafruit IO.
#define IO_USERNAME   "*****" // Seu nome de usuário no Adafruit IO
#define IO_KEY        "*****" // Sua chave de API no Adafruit IO

/******************************* WIFI **************************************/

#define WIFI_SSID   "*****" // O SSID da sua rede Wi-Fi
#define WIFI_PASS   "*****" // A senha da sua rede Wi-Fi

#include "AdafruitIO_WiFi.h" // Inclui a biblioteca AdafruitIO_WiFi

AdafruitIO_WiFi io(IO_USERNAME, IO_KEY, WIFI_SSID, WIFI_PASS); // Configura a conexão com o Adafruit IO usando Wi-Fi

/****************************************************************************/
