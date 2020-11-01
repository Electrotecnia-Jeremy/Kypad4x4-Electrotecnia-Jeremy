/* Jeremy Garcia
 *  Electrotécnia Jeremy-Ventas J&A
 *  https://negociacionesjya.wixsite.com/ventasjyaminegocio
 *  "DEMOSTRACION CARACTERES SEPARADOS"
 */
#include <Jeremy4.h>//INCLUIMOS LA LIBRERIA
Jeremy4 PIN(
  13,12,11,10,//PINES FILAS
  9,8,7,6,//PINES COLUMNAS
  "A","B","1","4",//BOTONES DEL KEYPAP Y PUEDES CAMBIAR LETRAS, NUMERO,ETC.
  "5","6","#","*",
  "S","G","11","12",
  "13","14","15","16",
  0,0,0,0,0);//ESTADO Y MOMENTO
void setup() {
  Serial.begin(9600);//COMUNICACIÓN SERIAL
  PIN.definirpines4();//DEFINE LOS PINES AUTOMATICO
}

void loop() {
  PIN.escribirJeremyseparado();//ESCRIBE LOS CARACTERES SEPARADO

}
