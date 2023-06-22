#include <Arduino.h>
#include <WiFi.h>           // WiFi control for ESP32
#include "ThingsBoard.h"    // ThingsBoard SDK

#define ANALOGPIN 1//Cambiar or pin
#define WIFI_SSID ""
#define WIFI_PWD ""

#define TB_SERVER "thingsboard.cloud"
#define TB_DEVICE_TOKEN ""


WiFiClient espClient;
ThingsBoard tb(espClient);
int status = WL_IDLE_STATUS;
bool subscribed = false;

float latitude=0.0;
float longitude=0.0;
int analogValue;


void setup() {
  latitude = 38.78311;
  longitude = -3.04394;
  analogValue=analogRead(ANALOGPIN);
  Serial.begin(9600);
  WiFi.begin(WIFI_SSID,WIFI_PWD);
  InitWiFi();                                 // Init SHT20 Sensor
  delay(1000);
}

void loop() {
connectIoT();

sendData();
printLogs();
delay(60000);
}


void printLogs(){
    Serial.println();
    Serial.println("\n ---------------------------------------------------------------");
    Serial.print("Latitude: ");
    Serial.print(latitude);
    Serial.print("º");
    Serial.println();
    Serial.print("Longitude: ");
    Serial.print(longitude);
    Serial.print("º");
    Serial.println();
    Serial.print("Valor Analog (0-1023): ");
    Serial.print(analogValue);
    Serial.print("bar");
}

void InitWiFi()
{
  Serial.println("Connecting to AP ...");

  WiFi.begin(WIFI_SSID, WIFI_PWD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("Connected to AP");
}

void reconnect() 
{
  status = WiFi.status();
  if ( status != WL_CONNECTED) {
    WiFi.begin(WIFI_SSID, WIFI_PWD);
    while (WiFi.status() != WL_CONNECTED) {
      delay(500);
      Serial.print(".");
    }
    Serial.println("Connected to AP");
  }
}

void connectIoT()
{
 if (WiFi.status() != WL_CONNECTED) {
    reconnect();
    return;
  }
  if (!tb.connected()) {
    subscribed = false;

    // Connect to the ThingsBoard
    Serial.print("Connecting to: ");
    Serial.print(TB_SERVER);
    Serial.print(" with token ");
    Serial.println(TB_DEVICE_TOKEN);
    if (!tb.connect(TB_SERVER, TB_DEVICE_TOKEN)) {
      Serial.println("Failed to connect");
      return;
    }
    else
      Serial.println("Connected!");
  }

}

void sendData()
{
    tb.sendTelemetryFloat("Latitude", latitude);
    tb.sendTelemetryFloat("Longitude", longitude);
    tb.sendTelemetryFloat("AnalogValue", analogValue);
}
