#ifndef ARCHIVO_H
#define ARCHIVO_H
#include <Arduino.h>
class Jeremy4{
  private:
  byte Fila1;
  byte Fila2;
  byte Fila3;
  byte Fila4;
  byte Columna1;
  byte Columna2;
  byte Columna3;
  byte Columna4;
  String C1;
  String C2;
  String C3;
  String C4;
  String C5;
  String C6;
  String C7;
  String C8;
  String C9;
  String C10;
  String C11;
  String C12;
  String C13;
  String C14;
  String C15;
  String C16;
  int estado;
  int estado1;
  int estado2;
  int estado3;
  int Momento;
  public:
  Jeremy4(byte _Fila1,byte _Fila2,byte _Fila3,byte _Fila4,byte _Columna1,byte _Columna2,byte _Columna3,byte _Columna4,String _C1,String _C2,String _C3,String _C4,String _C5,String _C6,String _C7,String _C8,String _C9,String _C10,String _C11,String _C12,String _C13,String _C14,String _C15,String _C16,int _estado,int _estado1,int _estado2,int _estado3,int _Momento);
  void escribirJeremyseparado();
  void escribirJeremyjunto();
  void definirpines4();
  };
#endif
