#include <stdio.h>

int reverseNumber(int n);

int main()
{
    int n, reversed;

    printf("Enter a number: ");
    scanf("%d", &n);

    reversed = reverseNumber(n);

    if (n == reversed)
        printf("%d is a palindrome number.\n", n);
    else
        printf("%d is not a palindrome number.\n", n);

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