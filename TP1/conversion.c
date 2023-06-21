#include "conversion.h"

double fahrenheitToCelsius (double fahr){
    return (5.0 / 9.0) * (fahr - 32.0);
}

double celsiusToFahrenheit(double celsius){
    return ((5.0 / 9.0) * celsius) + 32.0;
}
