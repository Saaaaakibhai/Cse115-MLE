#include<stdio.h>
//S. M. Mahedi Hasan
//2112370642
void printPattern(int n);
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printPattern(n);

}
void printPattern(int n)
{
    int num=1;
   for(int i=1; i<=n; i++)
    {
        for(int j=n; j>i-1; j--)
        {
            printf(" ");
        }
        for(int j=1; j<=i; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}
