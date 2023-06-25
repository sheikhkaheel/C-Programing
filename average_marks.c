#include<stdio.h>
void main()
{   
    printf("\n\nAVERAGE MARKS\n")
    int n,sum=0;
    printf("Enter the no of students ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the marks of students\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        sum = sum + arr[j];
    }
     float avg;
     avg = sum/n;
     printf("%f",avg);
    
    
}