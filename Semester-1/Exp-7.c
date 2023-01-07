/*AIM:- Write a program to find greatest of three numbers.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{

    int n1, n2, n3;

    printf("Enter First Number :- ");
    scanf("%d", &n1);
    printf("Enter Second Number :- ");
    scanf("%d", &n2);
    printf("Enter Third Number :- ");
    scanf("%d", &n3);

    if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest number.", n1);

    if (n2 >= n1 && n2 >= n3)
        printf("%d is the largest number.", n2);

    if (n3 >= n1 && n3 >= n2)
        printf("%d is the largest number.", n3);

    return 0;
}