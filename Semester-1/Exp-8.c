/*AIM:- Write a program that find whether a given number is even or odd.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    int a;

    printf("Enter Number :- ");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("The given number(%d) is EVEN", a);
    }
    else
    {
        printf("The given number(%d) is ODD", a);
    }
    return 0;
}