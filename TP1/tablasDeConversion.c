//Entiendo que esta funcion deberia ser el main
#include <stdio.h>
#include "conversion.h"
#include <assert.h>

//PROTOTIPOS
int consulta();
void printFahrenheitToCelsiusTable(double, double, double);
void printCelsiusToFahrenheitTable(double, double, double);

// MAIN
int main() {
    int opciones;
    double lower = 0;
    double upper = 100;
    double step = 10;

    assert(lower <= upper);

    opciones = consulta();

    switch(opciones){
    case 1: printFahrenheitToCelsiusTable(lower, upper, step);
            break;
    case 2: printCelsiusToFahrenheitTable(lower, upper, step);
            break;
    case 3: printCelsiusToFahrenheitTable(lower, upper, step);
            printFahrenheitToCelsiusTable(lower, upper, step);
            break;
    case 4: printf("\nsaliendo del programa.");
            break;
    }

    return 0;
}

//FUNCIONES 
int consulta(){ 
int opciones;
    do{
        printf("\n1. Tabla de Fahrenheit a Celsius");
	    printf("\n2. Tabla de Celsius a Fahrenheit");
        printf("\n3. Ambas tablas");
	    printf("\n4. salir del programa");
	    printf("\nOpcion: ");
	    scanf("%i", &opciones);

            if((opciones > 4) && (opciones < 0)){
                printf("\nIngrese un numero entre 0 y 4 Por favor");
            }
    }while((opciones > 4) && (opciones < 0));

    return opciones;
}

void printFahrenheitToCelsiusTable(double lower, double upper, double step) {
    printf("Fahrenheit\tCelsius\n");
    printf("==========\t=======\n");

    for (double fahr = lower; fahr <= upper; fahr += step) {
        double celsius = fahrenheitToCelsius(fahr);
        printf("%6.1lf\t\t%6.1lf\n", fahr, celsius);
    }

void printCelsiusToFahrenheitTable(double lower, double upper, double step) {
    printf("Celsius\t\tFahrenheit\n");
    printf("=======\t\t==========\n");

    for (double celsius = lower; celsius <= upper; celsius += step) {
        double fahr = celsiusToFahrenheit(celsius);
        printf("%6.1lf\t\t%6.1lf\n", celsius, fahr);
    }
}