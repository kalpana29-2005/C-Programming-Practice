//Positive or negative or zero 

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if (n>0){
        printf("The entered number is positive");
    }
    else if (n<0){
        printf("The entered number is negative");
    }
    else{
        printf("The entered number is zero");
    }
}