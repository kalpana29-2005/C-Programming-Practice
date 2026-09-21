//Fibonacci series using loops
//Fibonacci of n numbers
#include<stdio.h>
int main()
{
    int n;
    int first = 0;
    int second = 1;
    int next;
    printf("Enter the number to find the fibonacci series:");
    scanf("%d",&n);

    printf("Fibonacci series of %d numbers is:\n", n);
    
    for(int i=1;i<=n;i++){
        printf("%d\n",first);
        next = first+second;
        first = second;
        second = next;
    }
    return 0;
}