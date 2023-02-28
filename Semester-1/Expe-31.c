/* AIM: WAP to compare the contents of two files and determine whether they are same or not.*/

// Author:- Rajpal Nishadc FT-2 Roll No.-23

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1, *file2;
    char ch1, ch2;
    char filename1[50], filename2[50];

    printf("Enter the name of first file: ");
    scanf("%s", filename1);
    printf("Enter the name of second file: ");
    scanf("%s", filename2);

    file1 = fopen(filename1, "r");
    if (file1 == NULL)
    {
        printf("Could not open %s\n", filename1);
        exit(1);
    }

    file2 = fopen(filename2, "r");
    if (file2 == NULL)
    {
        printf("Could not open %s\n", filename2);
        fclose(file1);
        exit(1);
    }

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF)
    {
        if (ch1 != ch2)
        {
            printf("Files are not the same.\n");
            fclose(file1);
            fclose(file2);
            exit(0);
        }
    }

    if (ch1 == EOF && ch2 == EOF)
    {
        printf("Files are the same.\n");
    }
    else
    {
        printf("Files are not the same.\n");
    }

    fclose(file1);
    fclose(file2);
    return 0;
}