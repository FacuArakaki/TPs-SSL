#include "conversion.h"
#include <math.h>

double fahrenheitToCelsius (double fahr){
    double resultadoEnCelsius =  (5.0 / 9.0) * (fahr - 32.0);
    double redondeado = round(resultadoEnCelsius * 10.0) / 10.0;
    return redondeado;  
}

/*
el redondeo hay que revisarlo, ya que al estar laburando con una variable de tipo double
al dividir, corro el riesgo de que el resultado sea un numero con muchos numeros por detras 
de la coma, por ende, si quiero trabajar unicamente con un numero luego de la coma, necesito 
el proceso de redondeo.
Round me permite ese proceso, ya que me redondea el primer numero despues de la coma
Por ejemplo, si ingresa el 15.6, al estar mas cerca del 16, me lo deja en 16.
En el caso de q ingrese un 12.3, va a estar mas cerca del 12, por ende el resultado
va a ser 12. Por todo esto, decido multiplicar y dividir por 10 durante el proceso de 
redondeo, para que el primer numero luego de la coma no se vea afectado. 
*/

double celsiusToFahrenheit(double celsius){
    double resultadoEnFahrenheit = ((5.0 / 9.0) * celsius) + 32.0;
    double redondeado = round(resultadoEnFahrenheit * 10.0) / 10.0;
    return redondeado;
}
