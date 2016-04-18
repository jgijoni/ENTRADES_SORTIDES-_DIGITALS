/******************************************************************
 **                                                              **       
 **                  4.2. CRUÏLLA DE SEMAFORS                      ** 
 **                                                              ** 
 ******************************************************************/

//***************  INCLUDES   **************************************


//***************  VARIABLES  **************************************
int semafor[6] ={7,8,9,10,11,12};
const int b =4;
int i, N,j,a;


//***************  SETUP   ****************************************
void setup() {
for (i=0, i<6; i++;){  
pinMode(semafor[i],OUTPUT);  
}
a =0;
 

}

//*************    LOOP   ******************************************
void loop() {
  N= a%2;
 if (N ==1){
  j =3;
 }
 else {j =0;
 }
 digitalWrite(semafor[j], HIGH);
 
 digitalWrite(semafor[3-j], HIGH);
 delay (1000);
 digitalWrite(semafor[3-j], LOW);
 
 digitalWrite(semafor[5-j], HIGH);
 delay (b *1000);
 
 digitalWrite(semafor[5-j], LOW);
 digitalWrite(semafor[4-j], HIGH);
 delay (1000);
 digitalWrite(semafor[4-j], LOW);
 a++; 
  
  delay (1000);
}
