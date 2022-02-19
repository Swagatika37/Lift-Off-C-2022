#include<stdio.h>
int main()
{
    int num1,num2;
    int choice;
    printf("Press 1 for Addition\n 2 for Subtraction\n 3 for Multiplication\n 4 for Division\n");
    printf("Enter any two numbers ");
    scanf("%d %d",&num1,&num2);
    printf("Enter your Choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1	:
        printf("Sum of %d and %d is  %d",num1,num2,num1+num2);
        break;
    case 2	:
        printf("Difference of %d and %d is  %d",num1,num2,num1-num2);
        break;
    case 3	:
        printf("Multiplication of %d and %d is  %d",num1,num2,num1*num2);
        break;
    case 4	:
        printf("Division of %d and %d is %d",num1,num2,num1/num2);
        break;
    
    }
    return 0;
}
