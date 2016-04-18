/******************************************************************
 **                                                              **       
 **                   4.2. DAU DE LEDS                           **
 **                   MOSTRA NOMBRE ALEATORI  [1,2,3,4,5,6}           ** 
 **                   AL PREMER PULSADOR                                            ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int i,b,j;
int num = 4;
int LedPins[]={5,6,7,8};
long randomNumber;
int analogPin=2;
bool val =0;
//***************  SETUP   ****************************************
void setup() {
  
}

//*************    LOOP   ******************************************
void loop() {
for (i = 0; i<num; i++){
  pinMode(LedPins[i],OUTPUT);
}
val= analogRead(analogPin);
if (val== 0){
 randomSeed(analogRead (analogPin));

randomNumber = random (-1,4);
}
else{
  randomNumber = randomNumber;

}
 b = randomNumber + 1;
j = 1;


  

  switch (randomNumber){
  
  case 1:
  {
  digitalWrite(LedPins[b], HIGH);
  delay (1000);
  digitalWrite(LedPins[b],LOW);
  delay (1000);}
  break;
  case 2:
  { 
  digitalWrite(LedPins[j], HIGH);
  digitalWrite(LedPins[num-j], HIGH);
  delay (1000);
  digitalWrite(LedPins[j],LOW);
  digitalWrite(LedPins[num-j],LOW);
  delay (1000);
  break;
  }
   case 3:
  { 
  digitalWrite(LedPins[2*j], HIGH);
  digitalWrite(LedPins[j], HIGH);
  delay (1000);
  digitalWrite(LedPins[2*j],LOW);
  digitalWrite(LedPins[j],LOW);
  delay (1000);
  break;
  }
   case 4:
  { 
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
    case -1:
  { 
   digitalWrite(LedPins[j], HIGH);
  digitalWrite(LedPins[2], HIGH);
  digitalWrite(LedPins[0], HIGH);
 
  delay (1000);
   digitalWrite(LedPins[j], LOW);
  digitalWrite(LedPins[2], LOW);
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

   
  }
}  




