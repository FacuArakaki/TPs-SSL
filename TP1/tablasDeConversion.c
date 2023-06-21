//Entiendo que esta funcion deberia ser el main
#include <stdio.h>
#include "conversion.h"
#include <assert.h>

//PROTOTIPOS
void printFahrenheitToCelsiusTable(double, double, double);
void printCelsiusToFahrenheitTable(double, double, double);

// MAIN
int main() {
    double lower = 0;
    double upper = 100;
    double step = 10;

    assert(lower <= upper);

    printFahrenheitToCelsiusTable(lower, upper, step);
    printf("\n");
    printCelsiusToFahrenheitTable(lower, upper, step);

    return 0;
}

//FUNCIONES 
void printFahrenheitToCelsiusTable(double lower, double upper, double step) {
    printf("Fahrenheit\tCelsius\n");
    printf("==========\t=======\n");

    for (double fahr = lower; fahr <= upper; fahr += step) {
        double celsius = fahrenheitToCelsius(fahr);
        printf("%6.1f\t\t%6.1f\n", fahr, celsius);
    }
}

void printCelsiusToFahrenheitTable(double lower, double upper, double step) {
    printf("Celsius\t\tFahrenheit\n");
    printf("=======\t\t==========\n");

    for (double celsius = lower; celsius <= upper; celsius += step) {
        double fahr = celsiusToFahrenheit(celsius);
        printf("%6.1f\t\t%6.1f\n", celsius, fahr);
    }
}