/* Jeremy Garcia
 *  Electrotécnia Jeremy-Ventas J&A
 *  https://negociacionesjya.wixsite.com/ventasjyaminegocio
 *  "DEMOSTRACION CARACTERES JUNTOS"
 *  HECHO EN PERU
 */
#include <Jeremy4.h>//INCLUIMOS LA LIBRERIA
Jeremy4 PIN(
  13,12,11,10,//PINES FILAS
  9,8,7,6,//PINES COLUMNAS
  "J","E","R","E",//BOTONES DEL KEYPAP Y PUEDES CAMBIAR LETRAS, NUMERO,ETC. CON MAS LETRAS ☻
  "M","Y","#","*",
  "S","G","$","12",
  "7","14","(","16",
  0,0,0,0,0);//ESTADO Y MOMENTO
  
void setup() {
  Serial.begin(9600);//COMUNICACIÓN SERIAL
  PIN.definirpines4();//DEFINE LOS PINES AUTOMATICO

}

void loop() {
  PIN.escribirJeremyjunto();//ESCRIBE LOS CARACTERES JUNTOS

}
