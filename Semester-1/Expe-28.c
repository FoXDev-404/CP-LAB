/* AIM: WAP to implement strlen (), strcat (), strcpy () using the concept of Functions.*/

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

// Function to calculate the length of a string
int strlen(const char *str)
{
    int len = 0;
    while (*str)
    {
        len++;
        str++;
    }
    return len;
}

// Function to concatenate two strings
char *strcat(char *dest, const char *src)
{
    char *temp = dest;
    while (*dest)
    {
        dest++;
    }
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return temp;
}

// Function to copy one string to another
char *strcpy(char *dest, const char *src)
{
    char *temp = dest;
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return temp;
}

int main()
{
    char str1[100] = "Hello";
    char str2[100] = "World";

    // Calculate the length of str1
    int len1 = strlen(str1);
    printf("Length of str1: %d\n", len1);

    // Concatenate str2 to str1
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Copy str1 to a new string str3
    char str3[100];
    strcpy(str3, str1);
    printf("Copied string: %s\n", str3);

    return 0;
}