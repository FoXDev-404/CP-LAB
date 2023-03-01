/* AIM: WAP to swap two elements using the concept of pointers*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}