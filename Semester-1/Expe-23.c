/* AIM: WAP to find the minimum and maximum element of the array.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    int arr[100], n, i, min, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is both the minimum and maximum
    min = max = arr[0];

    // Find the minimum and maximum element
    for (i = 1; i < n; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    printf("The minimum element is %d\n", min);
    printf("The maximum element is %d\n", max);

    return 0;
}