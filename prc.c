#include<stdio.h>
int main()
{   
    int rev = 0,num,sum = 0,c,n;
    printf("enter any no ");
    scanf("%d",&num);
    n = num;
    while (num)
    {
        c = num % 10;
        num = num / 10;
        sum = sum + c;
        rev = rev * 10 + c;
    }
    printf("reverse is%d\n",rev);
    printf("sum is%d",sum);

    return 0;
}