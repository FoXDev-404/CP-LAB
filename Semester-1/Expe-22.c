/* AIM: WAP that inputs two arrays and saves sum of corresponding elements of these arrays in a
third array and prints them.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], sum[100], n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements of first array:\n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of second array:\n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n; ++i)
    {
        sum[i] = arr1[i] + arr2[i];
    }

    printf("The sum of corresponding elements is:\n");
    for (i = 0; i < n; ++i)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}