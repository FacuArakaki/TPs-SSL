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
        printf("%6.1lf\t= %6.1lf\n", fahr, celsius); 
    }                                                
/*
Al estar laburando con %.1f estoy limitando fahr o celsius q son variables double 
a tener una precision de un decimal despues de la coma. Es por esto que el resultado me 
da por ejemplo 17.8 en vez de 17.77777. Esto tambien se puede deber a una limitacion de 
de los bits disponibles para almacenar los digitos y la fraccion del numero que provocan
una cierta imprecision y un ligero cambio en algunas operaciones. 
Si quisiese q el redondeo sea, por ejemplo 17.77777 -> 18, podria aplicar la funcion
"round" y multiplicar por 10.0 y dividir por 10.0 a cada resultado. 
*/                                                  
    printf("\n");

    printf("Testing Celsius to Fahrenheit conversion:\n");
    for (double celsius = lower; celsius <= upper; celsius += step) {
        double fahr = celsiusToFahrenheit(celsius);
        printf("%6.1lf\t= %6.1lf\n", celsius, fahr);
    }

    return 0;
}
