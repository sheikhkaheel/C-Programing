#include<stdio.h>
int main ()
{   
    int num1,num2,num3;
    printf("\n\nFIND LARGEST AMOUNG THREE NUMBERS");
    printf("\nEnter first number :");
    scanf("%d",&num1);
    printf("Enter second number :");
    scanf("%d",&num2);
    printf("Enter third number :");
    scanf("%d",&num3);
    if (num1>num2 && num1>num3)
    {
        printf("%d is the largest no",num1);
    }
    else if (num2>num1 && num2>num3)
    {
        printf("%d is the largest no",num2);
    }
    else if(num3>num1 && num3>num2)
    {
        printf("%d is the largest no",num3);  
    }
    else if (num1==num2 && num1==num3)
    {
        printf("%d is the largest no",num1);
    }
    else
    {
        printf("Invalid number");
    }




    return 0;
}