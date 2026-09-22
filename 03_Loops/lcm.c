// // LCM means Least Common Multiple.
// Multiples of 4:
// 4, 8, 12, 16, 20...

// Multiples of 6:
// 6, 12, 18, 24...

// First common multiple = 12

// LCM = 12

// LCM of two numbers

// LCM of two numbers

#include <stdio.h>

int main()
{
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            printf("LCM = %d\n", max);
            break;
        }

        max++;
    }

    return 0;
}

// Start from the larger number
//         ↓
// Check if divisible by both numbers
//         ↓
// Yes → LCM found
// No  → increase number