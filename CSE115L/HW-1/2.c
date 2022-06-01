#include<stdio.h>
//S. M. Mahedi Hasan
//2112370642
void printPattern(int n);
int main(void)
{
    printPattern(5);
    return 0;
}
void printPattern(int n)
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(i==3 && j==3)
                printf("O ");
            else
                printf("S ");
        }
        printf("\n");
    }
}
