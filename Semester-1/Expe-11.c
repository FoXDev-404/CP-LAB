/* AIM: Write a program that takes two operands and one operator from the user, perform the
operation, and prints the result by using Switch statement.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    double operand1, operand2, result;
    char operator;

    printf("Enter first operand: ");
    scanf("%lf", &operand1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second operand: ");
    scanf("%lf", &operand2);

    switch (operator)
    {
    case '+':
        result = operand1 + operand2;
        printf("%f + %f = %f", operand1, operand2, result);
        break;
    case '-':
        result = operand1 - operand2;
        printf("%f - %f = %f", operand1, operand2, result);
        break;
    case '*':
        result = operand1 * operand2;
        printf("%f * %f = %f", operand1, operand2, result);
        break;
    case '/':
        if (operand2 == 0)
        {
            printf("Error: division by zero");
        }
        else
        {
            result = operand1 / operand2;
            printf("%f / %f = %f", operand1, operand2, result);
        }
        break;
    default:
        printf("Invalid operator");
        break;
    }

    return 0;
}