// //Reverse a number using division and modulus for example n=1234, output=4321
#include <stdio.h>
int main() {
    int n, reversed = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

    printf("Reversed number: %d\n", reversed);
    return 0;
}

//Reverse a number using a loop (ex n=5, output=43210)
#include <stdio.h>
int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Reversed number: ");
    for (int i=n-1;i>0;i--){
        printf("%d",i);

    }
    return 0;
}