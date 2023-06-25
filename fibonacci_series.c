#include<stdio.h>
int main ()
{   
    printf("\n\nGENERATE FIBONACCI SERIES\n");
    int limit,a=0,b=1,sum;
    printf("Enter limit : ");
    scanf("%d",&limit);
    printf("Fibonacci series : ");
    printf("%d %d ",a,b);
    sum = a+b;
    while(sum<=limit)
    {
        a = b;
        b = sum;
        printf("%d ",b);
        sum =a+b;
    }
     




    return 0;
}