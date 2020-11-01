/* Jeremy Garcia
 *  Electrotécnia Jeremy-Ventas J&A
 */
#include <Jeremy4.h>//INCLUIMOS LA LIBRERIA
Jeremy4 PIN(
  13,12,11,10,//PINES FILAS
  9,8,7,6,//PINES COLUMNAS
  "1","2","3","4",//BOTONES DEL KEYPAP
  "5","6","7","8",
  "9","10","11","12",
  "13","14","15","16",
  0,0,0,0,0);//ESTADO Y MOMENTO
void setup() {
  Serial.begin(9600);//COMUNICACIÓN SERIAL
  PIN.definirpines4();//DEFINE LOS PINES
  pinMode(5,INPUT);//INTERRUPTOR SEPARADO
  pinMode(4,INPUT);//INTERRUPTOR JUNTO
}

void loop(){
if(digitalRead(5)==HIGH){
PIN.escribirJeremyseparado();//PARA ESCRIBIR SEPARADO
}

if(digitalRead(4)==HIGH){//PARA ESCRIBIR JUNTO 
PIN.escribirJeremyjunto();
}
}
