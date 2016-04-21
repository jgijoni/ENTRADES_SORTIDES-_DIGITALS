/*****************************************************************************************************
 **                                                                                                 **       
 **     1.1. Array 8LEDS SEQUENCIA 11111111 - 00000000                                              ** 
 **                                                                                                 ** 
 *****************************************************************************************************/

//****************************  INCLUDES   ***********************************************************


//********************************  VARIABLES  *******************************************************
int LEDarray [] ={5,6,7,8,9,10,11,12};    // Declaracio leds com  una array

int i;


//*******************************  SETUP   ***********************************************************
void setup() {                            //Tan sols s'executa una vegada
for (i=0; i<8; i++)
{  
pinMode(LEDarray [i],OUTPUT);             // Defineix cada un dels elements de l'array com a SORTIDA 
}

 

}

//****************************    LOOP   *************************************************************
void loop() {                            //S'executa indefinidament (bucle)
 delay (2000);                           //Espera 2s   
 for (i=0; i<8; i++) {
 digitalWrite (LEDarray[i], HIGH);       //1a part SEQUENCIA 11111111     

                    }
 delay (2000);                           //Espera 2s
 for (i=0; i<8; i++) {
 digitalWrite (LEDarray[i], LOW);        //2a part SEQUENCIA 00000000 
                    }
            }
