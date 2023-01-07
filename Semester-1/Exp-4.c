/*AIM:- Write a program that accepts the temperature in
Centigrade and converts into Faherenheit using the formula*/

// Author: Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius :- ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%f Celsius = %f Fahrenheit", celsius, fahrenheit);

    return 0;
}