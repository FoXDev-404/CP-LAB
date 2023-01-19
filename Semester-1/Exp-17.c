/* AIM:- WAP to find the sum of digits of the entered number.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    int n, t, sum = 0, remainder;

    printf("Enter an Number :- ");
    scanf("%d", &n);

    t = n;

    while (t != 0)
    {
        remainder = t % 10;
        sum = sum + remainder;
        t = t / 10;
    }

    printf("Sum is = %d", sum);

    return 0;
}