/* AIM: WAP to compare the contents of two files and determine whether they are same or not.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f_ptr_1, *f_ptr_2;
    char path[256];
    char string_1[20];
    char string_2[20];
    // Input file 1 path.
    printf("Input first file name: ");
    scanf("%s", path);

    // Try to open first file
    f_ptr_1 = fopen(path, "r");
    if (f_ptr_1 == NULL)
    {
        printf("Error! Unable to open the path.");
        return 1;
    }

    // Input file 2 path.
    printf("Input second file path: ");
    scanf("%s", path);

    // Try to open second file
    f_ptr_2 = fopen(path, "r");
    if (f_ptr_2 == NULL)
    {
        printf("Error! Unable to open the file.");
        fclose(f_ptr_1);
        return 1;
    }

    // Finding whether the content of files are the same or not.
    while ((!feof(f_ptr_1)) && (!feof(f_ptr_2)))
    {
        fscanf(f_ptr_1, "%s", string_1);
        fscanf(f_ptr_2, "%s", string_2);
        if (strcmp(string_1, string_2) != 0)
        {
            printf("The content of files are not the same.");
            fclose(f_ptr_1);
            fclose(f_ptr_2);
            return 0;
        }
    }
    printf("The content of the files are the same.");
    fclose(f_ptr_1);
    fclose(f_ptr_2);

    return 0;
}