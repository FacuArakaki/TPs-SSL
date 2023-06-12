#include <stdio.h>
#include "conversion.h"
#include <assert.h>

int main() {
    float lower = -300;
    float upper =  300;
    float step  =   20;

    assert(lower <= upper); //Si el upper es menor al lower me tira error

    printf("Testing Fahrenheit to Celsius conversion:\n");
    for (float fahr = lower; fahr <= upper; fahr += step) {
        float celsius = fahrenheitToCelsius(fahr);
        printf("%6.1f\t= %6.1f\n", fahr, celsius);
    }

    printf("\n");

    printf("Testing Celsius to Fahrenheit conversion:\n");
    for (float celsius = lower; celsius <= upper; celsius += step) {
        float fahr = celsiusToFahrenheit(celsius);
        printf("%6.1f\t= %6.1f\n", celsius, fahr);
    }

    return 0;
}
