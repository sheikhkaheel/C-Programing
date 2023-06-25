#include<stdio.h>
void main()
{   
    int r1,c1,i,j,r2,c2,R,C;
    printf("\n\nADDITION OF MATRIX\n");
    printf("Enter rows of martix1: ");
    scanf("%d",&r1);
    printf("Enter columns of matrix1: ");
    scanf("%d",&c1);
    int mat1[r1][c1];
    printf("Enter elemenet of matrix1:\n");
    for( i=0; i<r1; i++)
    {
        for( j=0; j<c1; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter rows of matrix2: ");
    scanf("%d",&r2);
    printf("Enter columns of matrix2: ");
    scanf("%d",&c2);
    int mat2[r2][c2];
    printf("Enter elemenet of matrix2:\n");
    for( i=0; i<r2; i++)
    {
        for( j=0; j<c2; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
    }


    printf("Matrix1:\n");
    for(int i=0;i<r1;i++)
    {   
        printf("[");
        for(int j=0;j<c1;j++)
        { 
            printf(" %d ",mat1[i][j]);
        }
        printf("]");
        printf("\n");
    }


    printf("Matrix2:\n");
    for(int i=0;i<r2;i++)
    {   
        printf("[");
        for(int j=0;j<c2;j++)
        { 
            printf(" %d ",mat2[i][j]);
        }
        printf("]");
        printf("\n");
    }


    int mat3[R][C];
    if (r1==r2 && c1==c2)
    {
        for(i=0;i<r1;i++)
        {
            for ( j = 0; j < c1; j++)
            {
                mat3[i][j] = mat1[i][j] + mat2[i][j];
            }
            
        }
    
    }
    else
    {
        printf("Matrix1 rows & columns are not equal to Matrix2 rows & columns\nHence addition is not possible");
    }
    
    
    if(r1==r2 && c1==c2)
    {
        printf("New Matrix:\n");
        for(int i=0;i<r1;i++)
        {   
            printf("[");
            for(int j=0;j<c1;j++)
            { 
                printf(" %d ",mat3[i][j]);
            }
            printf("]");
            printf("\n");
    }
    }


}