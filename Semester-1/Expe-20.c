/*AIM: Write a program to convert binary number into decimal number and vice versa.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binaryNum);
int decimalToBinary(int decimalNum);

int main()
{
    int choice, num;

    printf("Select conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter binary number: ");
        scanf("%d", &num);
        printf("Decimal equivalent: %d", binaryToDecimal(num));
        break;
    case 2:
        printf("Enter decimal number: ");
        scanf("%d", &num);
        printf("Binary equivalent: %d", decimalToBinary(num));
        break;
    default:
        printf("Invalid choice");
        break;
    }

    return 0;
}

int binaryToDecimal(int binaryNum)
{
    int decimalNum = 0, remainder, i = 0;

    while (binaryNum != 0)
    {
        remainder = binaryNum % 10;
        binaryNum /= 10;
        decimalNum += remainder * pow(2, i);
        ++i;
    }

    return decimalNum;
}

int decimalToBinary(int decimalNum)
{
    int binaryNum = 0, remainder, i = 1;

    while (decimalNum != 0)
    {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * i;
        i *= 10;
    }

    return binaryNum;
}