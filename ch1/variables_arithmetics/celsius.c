#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300 */


int main () 

{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
        printf("Fahrenheit\t Celsius\n");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);    

        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

      printf("Fahrenheit\t Celsius\n\n");

   /* corresponding celsius to fahrenheit table - Swithcing to capital letters*/

    float Fahr, Celsius;

    float Lower, Upper, Step;

    Lower = -20;
    Upper =  150;
    Step = 10;

    Celsius = Lower;
        printf("Celsius\t Fahrenheit\n");

        while (Celsius <= Upper) {
            Fahr = (9.0/5.0) * (Celsius + 32.0);    
            printf("%3.0f\t\t%6.1f\n", Celsius, Fahr);
            Celsius = Celsius + Step;
        }


    return 0;
}