 /******************************************************************
 **                                                              **       
 **                       DISPLAY: SEQÜENCIA NOM                    ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int display []={5,6,7,8,9,10,11};
int i;
int j=0;

//***************  SETUP   ****************************************
void setup() {

for (i=0; i<7; i++){
  pinMode (display[i],OUTPUT);
}
}

//*************    LOOP   ******************************************
void loop() {
for(j=0;j<4;j++){
delay (2000);

switch (j){
  case 0:
  resetdisplay ();
  digitalWrite (display[1], HIGH);
  digitalWrite (display[2], HIGH);
  digitalWrite (display[3], HIGH);
  digitalWrite (display[4], HIGH);
 break;
  
  case 1:
  resetdisplay ();
  digitalWrite (display[2], HIGH);
  digitalWrite (display[3], HIGH);
  digitalWrite (display[4], HIGH);
  break;
  
  case 2:
  resetdisplay ();
  digitalWrite (display[0], HIGH);
  digitalWrite (display[1], HIGH);
  digitalWrite (display[2], HIGH);
  digitalWrite (display[4], HIGH);
  digitalWrite (display[5], HIGH);
  digitalWrite (display[6], HIGH);
  break;

  case 3:
  resetdisplay ();
  digitalWrite (display[2], HIGH);
  digitalWrite (display[4], HIGH);
  digitalWrite (display[6], HIGH);
 break;
}
   
}
}
//****** Funcions *************************************************************
void resetdisplay()
{
for (i=0; i<7; i++){
   
  
digitalWrite (display [i], LOW);

  }
}
