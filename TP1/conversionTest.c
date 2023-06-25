#include <stdio.h>
#include "conversion.h"
#include <assert.h>

int main() {
    double lower = -300;
    double upper =  300;
    double step  =   20;
    //Defino yo lower y upper, aunque tambien podria hacer que el usuario ingrese los valores que quiera. 

    assert(lower <= upper); //Si el upper es menor al lower me tira error

    printf("Testing Fahrenheit to Celsius conversion:\n");
    for (double fahr = lower; fahr <= upper; fahr += step) {
        double celsius = fahrenheitToCelsius(fahr);
        printf("%6.1f\t= %6.1f\n", fahr, celsius); //Al estar laburando con %6.1f estoy limitando fahr o celsius q es son double a que
    }                                              //solo me aparezca un digito luego del punto. 

    printf("\n");

    printf("Testing Celsius to Fahrenheit conversion:\n");
    for (double celsius = lower; celsius <= upper; celsius += step) {
        double fahr = celsiusToFahrenheit(celsius);
        printf("%6.1f\t= %6.1f\n", celsius, fahr);
    }

    return 0;
}
