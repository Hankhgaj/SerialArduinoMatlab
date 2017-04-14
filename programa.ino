#include <SoftwareSerial.h>


String first, second, third, fourth, fifth; //Variables

void setup() {

  Serial.begin(115200);

}


void loop() {
 
  while (Serial.available()) {
    if (Serial.available()){
      first  = Serial.readStringUntil(',').toFloat(); // Leemos el String recibido por serial hasta la coma ',' y lo convertimos a flotante
      second = Serial.readStringUntil(',').toFloat(); // Leemos el String recibido por serial hasta la coma ',' y lo convertimos a flotante
      third = Serial.readStringUntil(',').toFloat(); // Leemos el String recibido por serial hasta la coma ',' y lo convertimos a flotante
      fourth = Serial.readStringUntil(',').toFloat(); // Leemos el String recibido por serial hasta la coma ',' y lo convertimos a flotante
      fifth = Serial.readStringUntil('\n').toFloat(); // Leemos el String recibido por serial hasta el fin de linea '\n' y lo convertimos a flotante

      
      Serial.print(first);
      Serial.print(", ");
      Serial.print(second);
      Serial.print(", ");
      Serial.print(third);
      Serial.print(", ");
      Serial.print(fourth);
      Serial.print(", ");
      Serial.println(fifth);
    }
  }

}

