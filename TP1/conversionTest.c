#include <stdio.h>
#include "conversion.h"
#include <assert.h>

/*
Entiendo que aca en los test, deberia probar si funcionan las funciones de conversion Por 
eso, voy a utilizar dos assert, para probar dos veces, con valores hardcodeados, q las 
funciones de conversion funcionan adecuadamente
*/

int main(){
    double celsius1 = 0.0, celsius2 = -17.8, fahr1 = 32.0, fahr2 = 0.0;
//Aplicando la funcion celsiusToFahrenheit y pasando celsius1 me deberia devolver el mismo valor que fahr1
///Y asi tambien con fahr2 aplicando la funcion fahrenheitToCelsius.

    assert(fahr1 == celsiusToFahrenheit(celsius1));
    assert(celsius2 == fahrenheitToCelsius(fahr2));

    return 0;
}