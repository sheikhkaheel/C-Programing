#include<stdio.h>
int main()
{   
    printf("\n\nFACTOIRIAL OF A NUMBER\n");
    int fact=1,num,n;
    printf("Enter any number : ");
    scanf("%d",&num);
    n = num;
    for( num;num;num--)
    {
        fact = fact * num;
    }
    printf("Factorial of %d is : %d",n,fact);


    return 0;
}