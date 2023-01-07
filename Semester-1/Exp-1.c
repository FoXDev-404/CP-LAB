/*AIM: Writing a program that accept the marks of 5 subjects
and finds the sum and percentage marks obtaied*/

// Author: Rajpal Nishad FT-2 Roll No.-23

#include <stdio.h>

int main()
{
    float eng, phy, chem, math, comp;
    float total, average, percentage;

    printf("Enter marks of English :- ");
    scanf("%f", &eng);
    printf("Enter marks of Physics :- ");
    scanf("%f", &phy);
    printf("Enter marks of Chemistry :- ");
    scanf("%f", &chem);
    printf("Enter marks of Math :- ");
    scanf("%f", &math);
    printf("Enter marks of Computer :- ");
    scanf("%f", &comp);

    /*OR we can also write like that
    printf("Enter marks of five subjects :- ");
    scanf("%f%f%f%f%f",&eng,&phy,&chem,&math,&comp);  */

    total = eng + phy + chem + math + comp;
    percentage = (total / 500.0) * 100;

    printf("Total marks = %f\n", total);
    printf("Percentage = %f", percentage);

    return 0;
}