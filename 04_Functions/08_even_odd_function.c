#include <stdio.h>

void checkEvenOdd(int n);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    checkEvenOdd(n);

    return 0;
}

void checkEvenOdd(int n)
{
    if (n % 2 == 0)
        printf("%d is even.\n", n);
    else
        printf("%d is odd.\n", n);
}