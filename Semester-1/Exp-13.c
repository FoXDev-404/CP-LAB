/* AIM:- WAP to find factorial of a given number. */

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    int i, fact = 1, number;

    printf("Enter a number :- ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of %d is: %d", number, fact);

    return 0;
}