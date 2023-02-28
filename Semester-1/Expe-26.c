/* AIM: WAP to add and multiply two matrices of order n x n.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

#define N 3 // Change this to change the order of the matrices

int main()
{
    int A[N][N] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};

    int B[N][N] = {{9, 8, 7},
                   {6, 5, 4},
                   {3, 2, 1}};

    int C[N][N] = {{0}};

    // Add the matrices A and B
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print the resulting matrix
    printf("A + B =\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    // Multiply the matrices A and B
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            for (int k = 0; k < N; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print the resulting matrix
    printf("A * B =\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}