#include<stdio.h>
int main(void)
{
    //i = row , j= col
    int i,j;
    for(i=1;i<=6;++i)
    {
        for(j = 0; j<i ;++j)
           printf("%3d",j);
        printf("\n");
    }
    for(i=5;0<=i;--i)
    {
        for(j = 0; j<i ;++j)
           printf("%3d",j);
        printf("\n");
    }
    return(0);
}

