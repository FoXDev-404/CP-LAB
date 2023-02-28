/**/

/* AIM : WAP to check whether a given word exists in a file or not. If yes then find the number of
times it occurs.*/

// Author:- Rajpal Nishadc FT-2 Roll No.-23

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
    FILE *file;
    char filename[MAX_LENGTH], word[MAX_LENGTH];
    char buffer[MAX_LENGTH];
    int count = 0;

    printf("Enter the name of the file: ");
    scanf("%s", filename);

    printf("Enter the word to search for: ");
    scanf("%s", word);

    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Could not open %s\n", filename);
        exit(1);
    }

    while (fgets(buffer, MAX_LENGTH, file) != NULL)
    {
        char *pos = buffer;
        while ((pos = strstr(pos, word)) != NULL)
        {
            count++;
            pos += strlen(word);
        }
    }

    printf("The word \"%s\" appears in the file \"%s\" %d times.\n", word, filename, count);

    fclose(file);
    return 0;
}