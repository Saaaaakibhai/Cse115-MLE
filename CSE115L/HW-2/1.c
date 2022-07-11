#include<stdio.h>
void addMatrix(int rowSize, int colSize, int matA[rowSize][colSize], int matB[rowSize][colSize]);
int main()
{
    int rowSize=3,colSize=3;
    int matA [rowSize][colSize] , matB [rowSize][colSize];

    printf("\nEnter elements of 1st matrix:\n");
    for (int i = 0; i < rowSize; ++i)
        for (int j = 0; j < colSize; ++j)
        {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matA[i][j]);
        }
   printf("Enter elements of 2nd matrix:\n");
    for (int i = 0; i < rowSize; ++i)
        for (int j = 0; j < colSize; ++j)
        {
            printf("Enter element b%d%d: ", i + 1, j + 1);
            scanf("%d", &matB[i][j]);
        }

        addMatrix(rowSize, colSize, matA, matB);

    return 0;
}
void addMatrix(int rowSize, int colSize, int matA[rowSize][colSize], int matB[rowSize][colSize])
{
    int i,j;
    int sum[rowSize][colSize];
    for (i = 0; i < rowSize; ++i)
        for (j = 0; j < colSize; ++j)
        {
            sum[i][j] = matA[i][j] + matB[i][j];
        }

    for (i = 0; i < rowSize; ++i){
        for (j = 0; j < colSize; ++j)
        {
            printf("%3d", sum[i][j]);

            }
            printf("\n");
}
}
