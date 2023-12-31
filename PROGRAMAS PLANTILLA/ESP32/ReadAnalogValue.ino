#include <Arduino.h>

// Analog Sensor is connected to GPIO 34 (Analog ADC1_CH6) 
const int sensorPin = 34;

// variable for storing the potentiometer value
int sensorValue = 0;

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  // Reading sensor value
  sensorValue = analogRead(sensorPin);
  Serial.print("Sensor analog value: ");
  Serial.println(sensorValue);
  delay(2000);
}