#include<stdio.h>
int main ()
{
    int num1,num2;
    printf("\n\nBREAK AND CONTINUE\n");
    for(int i=1; i<=5; i++)
    {   
        printf("Enter any no from 1-5 : ");
        scanf("%d",&num1);
        if(num1==4)
        {
            printf("BREAK STATMENT\n");
            break;
        }
        printf("Normal Statment\n");
    }
    for(int j=10; j<15; j++)
    {   
        printf("\nEnter any no from 10-15 : ");
        scanf("%d",&num2);
        if(num2==13)
        {   
            printf("CONTINUE STATMENT");
            continue;
        }
        printf("Normal Statment");
    }


    return 0;
}