#include<stdio.h>
int main ()
    {   
        int no;
        printf("\n\nEVEN AND ODD");
        printf("\nEnter any no :");
        scanf("%d",&no);
        if (no%2==0)
        {
            printf("%d is even number",no);
        }
        else
        {
            printf("%d is odd number",no);
        }



        return 0;
    }
