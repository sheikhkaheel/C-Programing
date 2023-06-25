#include<stdio.h>
int main()
{   
    printf("\n\nPRIME OR NOT PRIME\n");
    int i,n,m=0,flag=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    m = n/2;

    for ( i = 2; i < m; i++)
    {
        if (n%i == 0)
        {
            printf("Number is not prime");
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
    {
        printf("Number is prime");
    }
    
    

    return 0;
}