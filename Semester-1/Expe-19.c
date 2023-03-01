/* AIM: Write a program to print Armstrong numbers from 1 to 1000.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum, digit, i;

    printf("Armstrong numbers from 1 to 1000 are: \n");

    for (i = 1; i <= 1000; i++)
    {
        num = i;
        sum = 0;

        // find the sum of the cube of each digit
        while (num > 0)
        {
            digit = num % 10;
            sum += pow(digit, 3);
            num /= 10;
        }

        // if sum is equal to the number, it is an Armstrong number
        if (i == sum)
        {
            printf("%d\t", i);
        }
    }

    return 0;
}
