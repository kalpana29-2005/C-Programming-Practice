#include <stdio.h>

int reverseNumber(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reversed number = %d\n", reverseNumber(n));

    return 0;
}

int reverseNumber(int n)
{
    int reversed = 0, remainder;

    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    return reversed;
}