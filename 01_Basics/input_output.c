//Input_Output

#include<stdio.h>
int main()
{
    int roll_no;
    char name[20];
    int percentage;
    
    printf("Enter the roll number:");
    scanf("%d",&roll_no);
    printf("Enter the name of the student:");
    scanf("%s",name);
    printf("Enter the percentage of the student:");
    scanf("%d",&percentage);
    
    //To display
    printf("The student detail is:\n");
    printf("The student name is:%s\n",name);
    printf("The roll_no is %d\n",roll_no);
    printf("The student percentage is :%d\n",percentage);
}