/* AIM: WAP that finds the sum of diagonal elements of a mxn matrix.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

#define M 3 // Number of rows
#define N 3 // Number of columns

int main()
{
    int matrix[M][N];
    int sum = 0;

    // Input the elements of the matrix
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of the diagonal elements
    for (int i = 0; i < M && i < N; i++)
    {
        sum += matrix[i][i];
    }

    // Print the sum of the diagonal elements
    printf("The sum of the diagonal elements is: %d\n", sum);

    return 0;
}