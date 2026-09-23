#include <stdio.h>

int largest(int a, int b, int c);

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Largest = %d\n", largest(a, b, c));

    return 0;
}

int largest(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else
        return c;
}