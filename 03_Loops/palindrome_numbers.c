//Palindrome numbers are numbers that remain the same when 
//their digits are reversed. For example, 121, 1331, and 12321 are palindrome numbers.

//Palindrome
#include<stdio.h>
int main()
{
    int n,original,reversed = 0,remainder;
    printf("Enter the number:");
    scanf("%d",&n);
    original = n;
    while(n!=0){ //While true loop to reverse the number
        remainder = n%10;
        reversed = reversed *10 + remainder;
        n /= 10;
        
    }
    if(reversed == original ){
        printf("It is palindrome..!");
    }
    else {
        printf("It is not a palindrome...!");
    }
}


//Without remainder and revised variable
#include <stdio.h>
#include <string.h>

int main() {
    char num[100];
    int left = 0, right;

    printf("Enter a number: ");
    scanf("%99s", num);

    right = strlen(num) - 1;

    while (left < right) {
        if (num[left] != num[right]) {
            printf("Not a palindrome\n");
            return 0;
        }

        left++;
        right--;
    }

    printf("Palindrome\n");
    return 0;
}