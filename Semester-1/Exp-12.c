/* AIM:- WAP to print the sum of all numbers up to a given number*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a Number :- ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        sum += i;
    }

    printf("Sum = %d", sum);

    return 0;
}