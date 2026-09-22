// // GCD means Greatest Common Divisor.
// Factors of 12:
// 1, 2, 3, 4, 6, 12

// Factors of 18:
// 1, 2, 3, 6, 9, 18

// Greatest common factor = 6

// GCD of two numbers

#include <stdio.h>

int main()
{
    int a, b, gcd = 1;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }

    printf("GCD = %d\n", gcd);

    return 0;
}