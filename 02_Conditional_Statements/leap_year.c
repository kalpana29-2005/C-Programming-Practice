//Leap year checker using conditional statements
#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0)// leap year are divisible by 400
    {
        printf("Leap year");
    }
    else if (year % 4 == 0 && year % 100 != 0) // leap year are divisible by 4 but not by 100
    {
        printf("Leap year");
    }
    else
    {
        printf("Not a leap year");
    }

    return 0;
}