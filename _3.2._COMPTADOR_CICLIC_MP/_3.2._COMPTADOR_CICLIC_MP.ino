/******************************************************************
 **                                                              **       
 **                       DISPLAY: SEQÜENCIA 0 a 9                  ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int display []={5,6,7,8,9,10,11};
int i,j,v;
int start = A0;
int marxa_paro;
//***************  SETUP   ****************************************
void setup() {

for (i=0; i<7; i++){
  pinMode (display[i],OUTPUT);
}
}
//*************    LOOP   ******************************************

void loop() {

for (j=0; j<10; j++){
delay (1000);
marxa_paro = analogRead (start);
 
if (marxa_paro ==0){
j=0;    
}
else{
  j=2;
} 
switch (j){
  case 0:// count 0
  resetdisplay();
  digitalWrite (display[0], HIGH);
  digitalWrite (display[1], HIGH);
  digitalWrite (display[2], HIGH);
  digitalWrite (display[3], HIGH);
  digitalWrite (display[4], HIGH);
  digitalWrite (display[5], HIGH);
  break;
  
  case 1: // count =1
  resetdisplay();
  digitalWrite (display[1], HIGH);
  digitalWrite (display[2], HIGH);
  break;
  
  case 2: //count = 2
  resetdisplay();
  digitalWrite (display[0], HIGH);
  digitalWrite (display[1], HIGH);
  digitalWrite (display[3], HIGH);
  digitalWrite (display[4], HIGH);
  digitalWrite (display[6], HIGH);
  break;

  case 3: //count = 3
  resetdisplay();
  digitalWrite (display[0], HIGH);
  digitalWrite (display[1], HIGH);
  digitalWrite (display[2], HIGH);
  digitalWrite (display[3], HIGH);
  digitalWrite (display[6], HIGH);
  break;

  case 4: //count = 4
  resetdisplay();
  digitalWrite (display[1], HIGH);
  digitalWrite (display[2], HIGH);
  digitalWrite (display[5], HIGH);
  digitalWrite (display[6], HIGH);
  break;

  case 5: //count = 5
  resetdisplay();
  digitalWrite (display[0], HIGH);
  digitalWrite (display[2], HIGH);
  digitalWrite (display[3], HIGH);
  digitalWrite (display[5], HIGH);
  digitalWrite (display[6], HIGH);
  break;
  case 6: //count = 6
  resetdisplay();
  digitalWrite (display[2], HIGH);
  digitalWrite (display[3], HIGH);
  digitalWrite (display[4], HIGH);
  digitalWrite (display[5], HIGH);
  digitalWrite (display[6], HIGH);
  break;
  case 7: //count = 7
  resetdisplay();
  digitalWrite (display[0], HIGH);
  digitalWrite (display[1], HIGH);
  digitalWrite (display[2], HIGH);
  break;
  
  case 8: //count = 8
  resetdisplay();
  for (v=0; v<7;v++){
  digitalWrite (display[v], HIGH);
  }
  break;
  
  case 9: //count = 9
  resetdisplay();
  digitalWrite (display[0], HIGH);
  digitalWrite (display[1], HIGH);
  digitalWrite (display[2], HIGH);
  digitalWrite (display[5], HIGH);
  digitalWrite (display[6], HIGH);
  break;
  
}
} 
}
//****** Funcions *************************************************************
void resetdisplay(){
 
 for (i=0; i<7; i++){
 digitalWrite (display [i], LOW);
/*delay (1000);*/
 }

}
