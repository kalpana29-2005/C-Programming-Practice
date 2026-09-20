//Arthimetic operations 
#include<stdio.h>
int main()
{
    int a,b;
    int choice =0;
    
    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    
    printf("1.Addition\n");
    printf("2.Substraction\n");
    printf("3.Division\n");
    
    printf("Enter your choice [1/2/3]:");
    scanf("%d",&choice);
    
    if (choice ==1)
    {
        printf("The Addition Result:%d\n",a+b);
    }
    else if (choice == 2)
    {
        printf("The Substraction :%d\n",a-b);
        
    }
    else 
    {
        if (b!=0){
             printf("The Division :%d\n",a/b);
        }
        else{
            printf("zero divisor error...! ");
        }
       
    }
    
}