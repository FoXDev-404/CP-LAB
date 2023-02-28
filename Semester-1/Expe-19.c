/* AIM: Write a program to print Armstrong numbers from 1 to 1000.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    printf("Armstrong numbers from 1 to 1000:\n");

    for (num = 1; num <= 1000; ++num)
    {
        originalNum = num;

        // count number of digits
        while (originalNum != 0)
        {
            originalNum /= 10;
            ++n;
        }

        originalNum = num;

        // calculate result
        while (originalNum != 0)
        {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        // check if num is Armstrong number
        if ((int)result == num)
        {
            printf("%d\t", num);
        }

        // reset variables for next iteration
        n = 0;
        result = 0;
    }

    return 0;
}