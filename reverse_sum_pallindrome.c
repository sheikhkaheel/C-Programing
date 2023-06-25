#include<stdio.h>
int main ()
{   
    int num,d = 0,rev = 0, sum = 0,n;
    printf("\n\nFIND REVERSE SUM AND PALLINDROME");
    printf("\nEnter any number :");
    scanf("%d",&num);
    n = num;
    while(num)
    {   
        d = num % 10;
        num = num / 10;
        sum = sum + d;
        rev = rev * 10 + d;

    }
    printf("Reverse of number is : %d",rev);
    printf("\nSum of number is : %d",sum);
    if (rev==n)
    {
        printf("\nIts a Pallindrome");
    }
    else
    {
        printf("\nIts not a Pallindrome");
    }


    return 0;
}