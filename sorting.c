#include<stdio.h>
int main()
{   
    int temp;
    int arr[5] = {5,9,3,0,1};
    printf("\n\nSORTING ELEMENTS IN ARRAY\n");
    printf("Old array is :");
    for(int k = 0; k<5; k++)
    {
        printf("%d ",arr[k]);    
    }
        for(int i = 0; i<5; i++)
        {
            for( int j = i+1; j<5; j++ )
            {
                if(arr[i]>arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("\nNew array is :");
        for(int y = 0; y<5; y++)
        {
            printf("%d ",arr[y]); 
        }
    
    

    return 0;

}