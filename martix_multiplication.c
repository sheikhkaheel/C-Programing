#include<stdio.h>
int main()
{
    printf("\n\nMatrix Multipliation\n");
    int r1,c1,i,j,k,a,r2,c2,l;
    printf("Enter Row1 : ");
    scanf("%d",&r1);
    printf("Enter Column1 : ");
    scanf("%d",&c1);    
    int mat[r1][c1];
    printf("Enter elements :\n");
    for ( i = 0; i < r1; i++)
    {
        for ( j = 0; j < c1; j++)
        {
            scanf("%d",&mat[i][j]);
        }
        
    }
    


    printf("Enter Row2 : ");
    scanf("%d",&r2);
    printf("Enter Column2 : ");
    scanf("%d",&c2);    
    int mat2[r2][c2];
    printf("Enter elements :\n");
    for ( i = 0; i < r2; i++)
    {
        for ( j = 0; j < c2; j++)
        {
            scanf("%d",&mat2[i][j]);
        }
        
    }

    printf("Matrix1 is :\n");
    for ( k = 0; k < r1; k++)
    {   
        printf("[");
        for ( a = 0; a < c1; a++)
        {   
            printf("%d",mat[k][a]);
        }
        printf("]");
        printf("\n");
    }


    printf("Matrix2 is :\n");
    for ( k = 0; k < r2; k++)
    {   
        printf("[");
        for ( a = 0; a < c2; a++)
        {   
            printf("%d",mat2[k][a]);
        }
        printf("]");
        printf("\n");
    }
    
    int mat3[r1][c2];
    if (c1==r2)
    {
        
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                {
                    mat3[i][j]=0;
                    for(k=0;k<r1;k++)
                    {
                        mat3[i][j]=mat3[i][j]+mat[i][k]*mat2[k][j];
                    }
                }
        }

        
        printf("Matrix multiplication is :\n");
        for ( k = 0; k < r1; k++)
            {    
                printf("[");
                for ( a = 0; a < c1; a++)
                    {   
                        printf("%d ",mat3[k][a]);
                    }
                printf("]");
                printf("\n");
            }
    }
    
        
    else
    {
        printf("Multiplication is not possible");
    }   
    


     


    return 0;
}