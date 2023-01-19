/* AIM:- WAP to print the Fibonacci series. */

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{

    int i, n, Next_Term, Term_1 = 0, Term_2 = 1;

    Next_Term = Term_1 + Term_2;

    printf("Enter the number of terms :- ");
    scanf("%d", &n);

    printf("Fibonacci Series :- %d, %d, ", Term_1, Term_2);

    for (i = 3; i <= n; ++i)
    {
        printf("%d, ", Next_Term);
        Term_1 = Term_2;
        Term_2 = Next_Term;
        Next_Term = Term_1 + Term_2;
    }

    return 0;
}