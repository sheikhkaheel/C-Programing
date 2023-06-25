#include<stdio.h>
void main()
{   
    int r,c=10,i,j;
    int mat[r][c];
    printf("\n\nINPUT ELEMENTS TO A MATRIX\n");
    printf("Enter rows: ");
    scanf("%d",&r);
    printf("Enter column: ");
    scanf("%d",&c);
    printf("Enter elemenet of matrix:\n");
    for( i=0; i<r; i++)
    {
        for( j=0; j<c; j++)
        {
            scanf("%d ",&mat[i][j]);
        }
    }
    printf("Matrix:\n");
    for(int i=0;i<r;i++)
    {   
        printf("[");
        for(int j=0;j<c;j++)
        { 
            printf("%d",mat[i][j]);
        }
        printf("]");
        printf("\n");
    }
    
}