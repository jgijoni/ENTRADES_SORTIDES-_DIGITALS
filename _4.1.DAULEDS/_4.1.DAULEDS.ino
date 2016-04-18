/******************************************************************
 **                                                              **       
 **                   4.1. DAU DE LEDS                           **
 **                   MOSTRA LA SEQÜENCIA [1,2,3,4,5,6}           ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int i,b,j,;
int num = 4;
int LedPins[]={5,6,7,8};
int cicle =6;

//***************  SETUP   ****************************************
void setup() {
  
}

//*************    LOOP   ******************************************
void loop() {
for (i = 0; i<num; i++){
  pinMode(LedPins[i],OUTPUT);
}

for(i = 0; i<cicle; i++){
b = i+1;
  switch (i){
  
  case 1:
  {
  digitalWrite(LedPins[b], HIGH);
  delay (1000);
  digitalWrite(LedPins[b],LOW);
  delay (1000);}
  break;
  case 2:
  { j = b-i;
  digitalWrite(LedPins[j], HIGH);
  digitalWrite(LedPins[num-j], HIGH);
  delay (1000);
  digitalWrite(LedPins[j],LOW);
  digitalWrite(LedPins[num-j],LOW);
  delay (1000);
  break;
  }
   case 3:
  { j = b-i;
  digitalWrite(LedPins[i-j], HIGH);
  digitalWrite(LedPins[j], HIGH);
  delay (1000);
  digitalWrite(LedPins[i-j],LOW);
  digitalWrite(LedPins[j],LOW);
  delay (1000);
  break;
  }
   case 4:
  { j = b-i;
  digitalWrite(LedPins[num-j], HIGH);
  digitalWrite(LedPins[2*j], HIGH);
  digitalWrite(LedPins[j], HIGH);
  delay (1000);
  digitalWrite(LedPins[num-j],LOW);
  digitalWrite(LedPins[2*j],LOW);
  digitalWrite(LedPins[j],LOW);
  delay (1000);
  break;
  }
    case 5:
  { j = b-i;
   digitalWrite(LedPins[j], HIGH);
  digitalWrite(LedPins[2*j], HIGH);
  digitalWrite(LedPins[0], HIGH);
 
  delay (1000);
   digitalWrite(LedPins[j], LOW);
  digitalWrite(LedPins[2*j], LOW);
  digitalWrite(LedPins[0], LOW);
  delay (1000);
  break;
  }
default:{
  digitalWrite(LedPins[(num-b)], HIGH);
 
  delay (1000);  
  digitalWrite(LedPins[num-b],LOW);
  delay (1000);
  break;
 
}
   
  }}
}  




