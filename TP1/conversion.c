#include "conversion.h"

float fahrenheitToCelsius (float fahr){
    return (5.0 / 9.0) * (fahr - 32.0);
}

float celsiusToFahrenheit(float celsius){
    return ((5.0 / 9.0) * celsius) + 32.0;
}
