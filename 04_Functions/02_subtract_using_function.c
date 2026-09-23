#include <stdio.h>

int subtract(int a, int b);

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = subtract(a, b);

    printf("Difference = %d\n", result);

    return 0;
}

int subtract(int a, int b)
{
    return a - b;
}