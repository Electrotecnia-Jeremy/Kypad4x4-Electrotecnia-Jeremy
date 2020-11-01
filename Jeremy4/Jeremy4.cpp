#include "Jeremy4.h"
Jeremy4::Jeremy4(byte _Fila1,byte _Fila2,byte _Fila3,byte _Fila4,byte _Columna1,byte _Columna2,byte _Columna3,byte _Columna4,String _C1,String _C2,String _C3,String _C4,String _C5,String _C6,String _C7,String _C8,String _C9,String _C10,String _C11,String _C12,String _C13,String _C14,String _C15,String _C16,int _estado,int _estado1,int _estado2,int _estado3,int _Momento){
  Fila1=_Fila1;
  Fila2=_Fila2;
  Fila3=_Fila3;
  Fila4=_Fila4;
  Columna1=_Columna1;
  Columna2=_Columna2;
  Columna3=_Columna3;
  Columna4=_Columna4;
  C1=_C1;
  C2=_C2;
  C3=_C3;
  C4=_C4;
  C5=_C5;
  C6=_C6;
  C7=_C7;
  C8=_C8;
  C9=_C9;
  C10=_C10;
  C11=_C11;
  C12=_C12;
  C13=_C13;
  C14=_C14;
  C15=_C15;
  C16=_C16;
  estado=_estado;
  estado1=_estado1;
  estado2=_estado2;
  estado3=_estado3;
  Momento=_Momento;
  }
  
  void Jeremy4::definirpines4(){
    pinMode(Fila1,OUTPUT);
    pinMode(Fila2,OUTPUT);
    pinMode(Fila3,OUTPUT);
    pinMode(Fila4,OUTPUT);
    pinMode(Columna1,INPUT_PULLUP);
    pinMode(Columna2,INPUT_PULLUP);
    pinMode(Columna3,INPUT_PULLUP);
    pinMode(Columna4,INPUT_PULLUP);
    }
    
  void Jeremy4::escribirJeremyseparado(){
  switch(Momento){
    case 0: digitalWrite(Fila1,LOW);
           digitalWrite(Fila2,HIGH);
           digitalWrite(Fila3,HIGH);
           digitalWrite(Fila4,HIGH);
             if(digitalRead(Columna1)==LOW){if(estado==0){Serial.println(C1);estado=1;}
             }else{if(digitalRead(Columna2)==LOW){if(estado==0){Serial.println(C2);estado=1;}
             }else{if(digitalRead(Columna3)==LOW){if(estado==0){Serial.println(C3);estado=1;}
             }else{if(digitalRead(Columna4)==LOW){if(estado==0){Serial.println(C4);estado=1;}
             }else{estado=0;}}}}
    break;  
    
    case 1: digitalWrite(Fila1,HIGH);
            digitalWrite(Fila2,LOW);
            digitalWrite(Fila3,HIGH);
            digitalWrite(Fila4,HIGH);
            if(digitalRead(Columna1)==LOW){if(estado1==0){Serial.println(C5);estado1=1;}
             }else{if(digitalRead(Columna2)==LOW){if(estado1==0){Serial.println(C6);estado1=1;}
             }else{if(digitalRead(Columna3)==LOW){if(estado1==0){ Serial.println(C7);estado1=1;}
             }else{if(digitalRead(Columna4)==LOW){if(estado1==0){Serial.println(C8);estado1=1;}
             }else{estado1=0;}}}}
    break;
    
    case 2:  digitalWrite(Fila1,HIGH);
             digitalWrite(Fila2,HIGH);
             digitalWrite(Fila3,LOW);
             digitalWrite(Fila4,HIGH);
             if(digitalRead(Columna1)==LOW){if(estado2==0){Serial.println(C9);estado2=1;}
             }else{if(digitalRead(Columna2)==LOW){if(estado2==0){Serial.println(C10);estado2=1;}
             }else{if(digitalRead(Columna3)==LOW){if(estado2==0){ Serial.println(C11);estado2=1;}
             }else{if(digitalRead(Columna4)==LOW){if(estado2==0){Serial.println(C12);estado2=1;}
             }else{estado2=0;}}}}
    break;

    case 3:  digitalWrite(Fila1,HIGH);
             digitalWrite(Fila2,HIGH);
             digitalWrite(Fila3,HIGH);
             digitalWrite(Fila4,LOW);
             if(digitalRead(Columna1)==LOW){if(estado3==0){Serial.println(C13);estado3=1;}
             }else{if(digitalRead(Columna2)==LOW){if(estado3==0){Serial.println(C14);estado3=1;}
             }else{if(digitalRead(Columna3)==LOW){if(estado3==0){ Serial.println(C15);estado3=1;}
             }else{if(digitalRead(Columna4)==LOW){if(estado3==0){Serial.println(C16);estado3=1;}
             }else{estado3=0;}}}}
    break;
   }
  Momento++;
  if(Momento==4){Momento=0;}
}

void Jeremy4::escribirJeremyjunto(){
  switch(Momento){
    case 0: digitalWrite(Fila1,LOW);
           digitalWrite(Fila2,HIGH);
           digitalWrite(Fila3,HIGH);
           digitalWrite(Fila4,HIGH);
             if(digitalRead(Columna1)==LOW){if(estado==0){Serial.print(C1);estado=1;}
             }else{if(digitalRead(Columna2)==LOW){if(estado==0){Serial.print(C2);estado=1;}
             }else{if(digitalRead(Columna3)==LOW){if(estado==0){Serial.print(C3);estado=1;}
             }else{if(digitalRead(Columna4)==LOW){if(estado==0){Serial.print(C4);estado=1;}
             }else{estado=0;}}}}
    break;  
    
    case 1: digitalWrite(Fila1,HIGH);
            digitalWrite(Fila2,LOW);
            digitalWrite(Fila3,HIGH);
            digitalWrite(Fila4,HIGH);
            if(digitalRead(Columna1)==LOW){if(estado1==0){Serial.print(C5);estado1=1;}
             }else{if(digitalRead(Columna2)==LOW){if(estado1==0){Serial.print(C6);estado1=1;}
             }else{if(digitalRead(Columna3)==LOW){if(estado1==0){ Serial.print(C7);estado1=1;}
             }else{if(digitalRead(Columna4)==LOW){if(estado1==0){Serial.print(C8);estado1=1;}
             }else{estado1=0;}}}}
    break;
    
    case 2:  digitalWrite(Fila1,HIGH);
             digitalWrite(Fila2,HIGH);
             digitalWrite(Fila3,LOW);
             digitalWrite(Fila4,HIGH);
             if(digitalRead(Columna1)==LOW){if(estado2==0){Serial.print(C9);estado2=1;}
             }else{if(digitalRead(Columna2)==LOW){if(estado2==0){Serial.print(C10);estado2=1;}
             }else{if(digitalRead(Columna3)==LOW){if(estado2==0){ Serial.print(C11);estado2=1;}
             }else{if(digitalRead(Columna4)==LOW){if(estado2==0){Serial.print(C12);estado2=1;}
             }else{estado2=0;}}}}
    break;

    case 3:  digitalWrite(Fila1,HIGH);
             digitalWrite(Fila2,HIGH);
             digitalWrite(Fila3,HIGH);
             digitalWrite(Fila4,LOW);
             if(digitalRead(Columna1)==LOW){if(estado3==0){Serial.print(C13);estado3=1;}
             }else{if(digitalRead(Columna2)==LOW){if(estado3==0){Serial.print(C14);estado3=1;}
             }else{if(digitalRead(Columna3)==LOW){if(estado3==0){ Serial.print(C15);estado3=1;}
             }else{if(digitalRead(Columna4)==LOW){if(estado3==0){Serial.print(C16);estado3=1;}
             }else{estado3=0;}}}}
    break;
   }
  Momento++;
  if(Momento==4){Momento=0;}
}
