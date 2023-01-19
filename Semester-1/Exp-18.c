/* AIM:- WAP to find the reverse of a number. */

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{

    int n, reverse = 0, remainder;

    printf("Enter an Number :- ");
    scanf("%d", &n);

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    printf("Reversed Number = %d", reverse);

    return 0;
}