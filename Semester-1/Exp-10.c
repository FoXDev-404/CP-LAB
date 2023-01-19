/* AIM:- WAP that accepts marks of five subjects and finds percentage and prints grades
according to the following criteria. */

// Author:- Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    float phy, chem, math, cp, evs, percent;

    printf("Enter the marks of Phy :- ");
    scanf("%f", &phy);
    printf("Enter the marks of Chem :- ");
    scanf("%f", &chem);
    printf("Enter the marks of Math :- ");
    scanf("%f", &math);
    printf("Enter the marks of C. Pro. :- ");
    scanf("%f", &cp);
    printf("Enter the marks of EVS :- ");
    scanf("%f", &evs);

    percent = (phy + chem + math + cp + evs) / 5;

    printf("Percentage = %f", percent);

    if (percent > 90 && percent <= 100)
        printf("\nGrade :- A");
    else if (percent > 80 && percent <= 90)
        printf("\nGrade :- B");
    else if (percent > 60 && percent <= 80)
        printf("\nGrade :- C");
    else
        printf("\nGrade :- D");

    return 0;
}