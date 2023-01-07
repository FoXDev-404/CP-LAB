/*AIM: Write a program that calculate the Simple Interest and
Compound Interest. The Principal, amount and
Rate of interest and Time are intered through user*/

// Author: Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, a, si, ci;
    printf("Enter Principle :- ");
    scanf("%f", &p);
    printf("Enter Rate :- ");
    scanf("%f", &r);
    printf("Enter Time :- ");
    scanf("%f", &t);

    si = (p * r * t) / 100;
    printf("Simple Interest :- %f", si);

    a = p * (pow((1 + r / 100), t));
    ci = a - p;
    printf("\nCompound Interest :- %f", ci);

    return 0;
}