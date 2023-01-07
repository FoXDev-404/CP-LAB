/*AIM:- Write a program to swaps value of two variables using a third variable.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    float var1, var2, temp;

    printf("Enter Variable1 :- ");
    scanf("%f", &var1);
    printf("Enter Variable2 :- ");
    scanf("%f", &var2);

    temp = var1;
    var1 = var2;
    var2 = temp;

    printf("After Swappingn\n");
    printf("First variable = % f\n", var1);
    printf("Second variable = % f", var2);

    return 0;
}