// //Swaping tow numbers using third variable
// #include <stdio.h>
// int main() {
//     int a, b, temp;
    
//     printf("Enter the values of a and b: ");
//     scanf("%d %d", &a, &b);
    
//     printf("Before swapping: a = %d, b = %d\n", a, b);
    
//     temp = a;
//     a = b;
//     b = temp;
    
//     printf("After swapping: a = %d, b = %d\n", a, b);
    
//     return 0;
// }

//Swaping two numbers without using third variable
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
