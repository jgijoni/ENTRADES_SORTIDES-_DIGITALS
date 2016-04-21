/********************************************************************************************************
 **                                                                                                    **       
 **                                1.2. Array 8LEDS SEQUENCIA 01010101 - 10101010                      ** 
 **                                                                                                    ** 
 ********************************************************************************************************/

//***********************************  INCLUDES   ********************************************************


//***********************************  VARIABLES  ********************************************************
int LEDarray [] ={5,6,7,8,9,10,11,12};         // Declaracio leds com  una array
int i,j/*,p*/ ;
 


//***********************************  SETUP   **********************************************************
void setup() {                                //Tan sols s'executa una vegada
for (i=0; i<8; i++){  
pinMode(LEDarray [i],OUTPUT);                // Defineix cada un dels elements de l'array com a SORTIDA
                   }
             }

//*********************************    LOOP   ******************************************
void loop() {

/* for (p=0; p<2; p++) {*/
 delay (5000);       
 
 /*if (p!=1){ 
  /*j =i+1;*/
  for (i=0; i<8; i=i+2) {
  j =i+1;
  digitalWrite (LEDarray[j],LOW);  
  digitalWrite (LEDarray[i], HIGH);
                        }
          }
/*else{*/
  for (i=0; i<8; i=i+2) {      
    j =i+1;
digitalWrite (LEDarray[i],LOW);  
digitalWrite (LEDarray[j], HIGH);
                        }
    }
                    }
            }

