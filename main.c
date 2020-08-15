//program floorFunction
//Rückgabewert,Diese Funktion gibt die größte Integer-Wert nicht größer als x.



#include <stdio.h>
#include <math.h>



int main(){

    float wert;
    
    printf("Programm zur Floorfunkion \n");
    
    printf("Bitte geben Sie einen Wert ein: \n");
    scanf("%f",&wert);
    
    printf("Der Floorwert von %.2f ist: %.2f",wert,floor(wert));
    
    return 0;
}
