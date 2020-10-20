/*
  Blink
  Enciende y apaga un Led en intervalos
  de un segundo repetidamente.
  Este código de ejemplo es de uso público.
 */

//Configuración de nuestra salida.

void setup(){
pinMode(12, OUTPUT); // Pin 12 como Salida.
}

//Ahora le decimos que hacer con esa salida.

void loop(){
digitalWrite(12, HIGH); // Pone la salida 12 a ON
delay(1000);            // Espera un segundo
digitalWrite(12, LOW);  // Pone la salida 12 a OFF
delay(1000);            // Espera un segundo
}
