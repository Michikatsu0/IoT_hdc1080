#include <Arduino.h>
#include <Wire.h>
#include "ClosedCube_HDC1080.h"

ClosedCube_HDC1080 sensor;

void setup() {
  
  // configuracion de todas las variables para ser inicializada. ocurren 1 vez
  Serial.begin(115200);// put your setup code here, to run once:
  Serial.println("Iniciando la configuración del dispositivo");
  sensor.begin(0x40);

}

void loop() {
  Serial.println("Hola mundo");
  Serial.print("Temperatura es: ");
  Serial.println(sensor.readTemperature());
  Serial.print("Humedad es: ");
  Serial.println(sensor.readHumidity());
  
  delay(2000);  
}
