//Entiendo que esta funcion deberia ser el main
#include <stdio.h>
#include "conversion.h"
#include <assert.h>

//PROTOTIPOS
void printFahrenheitToCelsiusTable(float, float, float);
void printCelsiusToFahrenheitTable(float, float, float);

// MAIN
int main() {
    float lower = 0;
    float upper = 100;
    float step = 10;

    assert(lower <= upper);

    printFahrenheitToCelsiusTable(lower, upper, step);
    printf("\n");
    printCelsiusToFahrenheitTable(lower, upper, step);

    return 0;
}

//FUNCIONES 
void printFahrenheitToCelsiusTable(float lower, float upper, float step) {
    printf("Fahrenheit\tCelsius\n");
    printf("==========\t=======\n");

    for (float fahr = lower; fahr <= upper; fahr += step) {
        float celsius = fahrenheitToCelsius(fahr);
        printf("%6.1f\t\t%6.1f\n", fahr, celsius);
    }
}

void printCelsiusToFahrenheitTable(float lower, float upper, float step) {
    printf("Celsius\t\tFahrenheit\n");
    printf("=======\t\t==========\n");

    for (float celsius = lower; celsius <= upper; celsius += step) {
        float fahr = celsiusToFahrenheit(celsius);
        printf("%6.1f\t\t%6.1f\n", celsius, fahr);
    }
}