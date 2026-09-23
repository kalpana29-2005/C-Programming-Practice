#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main()
{
    int a, b;
    char choice;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &choice);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch (choice)
    {
        case '+':
            printf("Result = %d\n", add(a, b));
            break;

        case '-':
            printf("Result = %d\n", subtract(a, b));
            break;

        case '*':
            printf("Result = %d\n", multiply(a, b));
            break;

        case '/':
            if (b != 0)
                printf("Result = %.2f\n", divide(a, b));
            else
                printf("Division by zero is not possible.\n");
            break;

        default:
            printf("Invalid operator.\n");
    }

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(int a, int b)
{
    return (float)a / b;
}