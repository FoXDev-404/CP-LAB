/* AIM: WAP that simply takes elements of the array from the user and finds the sum of these.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    int arr[100], n, i, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of the elements is %d", sum);

    return 0;
}