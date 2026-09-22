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
    while(n!=0){
        remainder = n%10;
        reversed = reversed *10 + remainder;
        n /= 10;
        
    }
    if(reversed == original ){
        printf("It is palindrome..!");
    }
    else {
        printf("It is not a pa;indrome...!");
    }
}