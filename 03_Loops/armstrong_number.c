//Armstrong number is a nummber that is equal to the sum of its own digits raised to the power
//of the number of digits. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153.

//Armstrong number
#include<stdio.h>
int main()
{
    int n,original,sum = 0,remainder;
    printf("Enter the number:");
    scanf("%d",&n);
    original = n;
    while(n!=0){
        remainder = n%10;
        sum = sum + remainder*remainder*remainder;
        n /= 10;
        
    }
    if(sum == original ){
        printf("It is Armstrong..!");
    }
    else {
        printf("It is not an Armstrong...!");
    }
}