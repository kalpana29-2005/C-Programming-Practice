//Prime number checking
#include<stdio.h>
int main()
{
    int n,count = 0;
    printf("Enter the number to check prime:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            count ++;
        }
    }
        if (count == 2){
            printf("%d is prime number",n);
        }
        else{
            printf("%d is not a prime number",n);
        }
    
}