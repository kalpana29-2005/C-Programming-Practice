#include <stdio.h>

float divide(int a, int b);

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (b != 0)
    {
        printf("Division = %.2f\n", divide(a, b));
    }
    else
    {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}

float divide(int a, int b)
{
    return (float)a / b;
}