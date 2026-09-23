#include <stdio.h>

void fibonacci(int n);

int main()
{
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}

void fibonacci(int n)
{
    int first = 0, second = 1, next;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }
}