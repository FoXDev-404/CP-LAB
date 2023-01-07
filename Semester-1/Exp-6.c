/*AIM:- Write a program that check whether two
numbers enetred by user are equal or not.*/

// Author: Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>
int main()
{
    int m, n;

    printf("Enter First Number :- ");
    scanf("%d", &m);
    printf("Enter Second Number :- ");
    scanf("%d", &n);

    if (m == n)
        printf("%d is equal %d\n", m, n);
    else
        printf("%d is not equal %d\n", m, n);

    return 0;
}