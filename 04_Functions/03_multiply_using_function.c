#include <stdio.h>

int multiply(int a, int b);

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = multiply(a, b);

    printf("Product = %d\n", result);

    return 0;
}

int multiply(int a, int b)
{
    return a * b;
}