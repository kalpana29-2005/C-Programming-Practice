#include <stdio.h>

int sumDigits(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n", sumDigits(n));

    return 0;
}

int sumDigits(int n)
{
    int sum = 0, remainder;

    while (n != 0)
    {
        remainder = n % 10;
        sum = sum + remainder;
        n = n / 10;
    }

    return sum;
}