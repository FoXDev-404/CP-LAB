/* AIM: WAP to search an element in a array using Linear Search.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    int arr[100], n, i, search, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &search);

    // Perform linear search
    for (i = 0; i < n; ++i)
    {
        if (arr[i] == search)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        printf("%d found at index %d\n", search, i);
    }
    else
    {
        printf("%d not found in the array\n", search);
    }

    return 0;
}