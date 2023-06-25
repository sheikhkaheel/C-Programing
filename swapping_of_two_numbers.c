#include<stdio.h>
int main()
{
    int num1,num2,chg;
    printf("\n\nSWAPPING OF TWO NUMBER'S\n");
    printf("Enter First Number :");
    scanf("%d",&num1);
    printf("Enter Second Number :");
    scanf("%d",&num2);
    chg = num1;
    num1 = num2;
    num2 = chg;
    printf("New First Number Is :%d\n",num1);
    printf("New Second Number Is :%d",num2);

    


    return 0;
}