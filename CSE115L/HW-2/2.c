#include <stdio.h>
void subtractMatrix(int rowSize,int colSize,int matA[rowSize][colSize] , int matB[rowSize][colSize])
{
    int matx[4][4];
    for(int i = 0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            matx[i][j] = matA[i][j] - matB[i][j]; // addition of elements
        }
    }
    printf("\nMatrix after subtraction.\n");
    for(int i = 0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%3d ",matx[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int matA[4][4],matB[4][4];
    int num;
    printf("Enter elements of Matrix 1: \n\n");
    for(int i = 0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Enter element row %d , column %d : ",i+1,j+1);
            scanf("%d",&matA[i][j]);
        }
    }

    for(int i = 0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {

        matB[i][j]=matA[j][i];
        }
    }
    printf("\nMatrix 1 : \n");
    for(int i = 0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",matA[i][j]);
        }
        printf("\n");
    }
     printf("\nTranspose: \n\n");
    for(int i = 0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("%d ",matB[i][j]);
        }
        printf("\n");
    }
    subtractMatrix(4,4,matA,matB);
    return 0;
}
