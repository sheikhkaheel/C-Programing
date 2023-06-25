#include<stdio.h>
int main()
{
    int  key,flag = 0,repl,s;
    int arr[10] = {6,8,4,2,10,1,3,5,7,9};
    printf("\n\nSEARCH AND UPDATION OF A ARRAY\n");
    printf("Enter the number you want to search :");
    scanf("%d",&key);
    printf("Enter the number you want to replace :");
    scanf("%d",&repl);
    printf("Old array is :");
    for(int b=0;b<10;b++)
    {
        printf("%d ",arr[b]);
    }
        for (int k=0; k<10; k++)
        {
            if(arr[k]==key)
            {
                printf("\nElement found at index %d & Position %d\n",k,k+1);
                arr[k]=repl;
                flag = 1;
                break;
            }
        }
            if(flag == 0)
                {
                     printf("\nNumber not found!\n");
                }
            printf("New array is :");
            for( s=0; s<=9; s++)
                {   
                    printf("%d ",arr[s]);
                }
        


    return 0;
}