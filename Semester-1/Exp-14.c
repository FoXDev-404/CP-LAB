/* AIM:- WAP to print sum of even and odd numbers from 1 to N numbers. */

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    int i, number, Even_Sum = 0, Odd_Sum = 0;

    printf("Enter the Number :- ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++)
    {
        if (i % 2 == 0)
        {
            Even_Sum = Even_Sum + i;
        }
        else
        {
            Odd_Sum = Odd_Sum + i;
        }
    }
    printf("\nThe Sum of Even Numbers is = %d", Even_Sum);
    printf("\nThe Sum of Odd Numbers is = %d", Odd_Sum);

    return 0;
}