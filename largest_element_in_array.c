#include<stdio.h>
int main()
{   
    printf("\n\nSMALLEST ELEMENTS IN ARRAY\n");
    int temp;
    int arr[5] = {5,9,3,10,1};
    printf("Old array is :");
    for(int k = 0; k<5; k++)
    {
        printf("%d ",arr[k]);    
    }
        for(int i = 0; i<5; i++)
        {
            for( int j = i+1; j<5; j++ )
            {
                if(arr[i]<arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        printf("\nLargest element is : %d",arr[0]);
   
    

    return 0;

}