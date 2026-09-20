// int     → whole numbers size =2
// float   → decimal numbers size =4
// double  → larger/more precise decimal numbers size =8
// char    → single character  size =1


#include <stdio.h>

int main()
{
    int age = 20;
    float percentage = 92.5;
    double salary = 45000.75;
    char grade = 'A';

    printf("Integer value: %d\n", age);
    printf("Float value: %.2f\n", percentage);
    printf("Double value: %.2lf\n", salary);
    printf("Character value: %c\n", grade);

    return 0;
}