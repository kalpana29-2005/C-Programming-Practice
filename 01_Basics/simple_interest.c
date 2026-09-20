//Simple interest
//Simple Interest = (P × R × T) / 100

#include<stdio.h>
int main()
{
    float principal, rate, time,interest;
    printf("Enter the principal amount:");
    scanf("%f",&principal);
    printf("Enter the rate amount:");
    scanf("%f",&rate);
    printf("Enter the time period in years:");
    scanf("%f",&time);
    
    interest = (principal*time*rate)/100;
    printf("Simple Interest = %.2f\n", interest);
    return 0;
    
}

