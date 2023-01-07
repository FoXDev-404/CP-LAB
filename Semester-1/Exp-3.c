/*AIM:- Write a program to calculate area and circumference of circle.*/

// Author: Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    int rad;
    float PI = 3.14, area, ci;

    printf("Enter radius of circle :- ");
    scanf("%d", &rad);

    area = PI * rad * rad;
    printf("\nArea of circle :- %f ", area);

    ci = 2 * PI * rad;
    printf("\nCircumference :- %f ", ci);

    return (0);
}