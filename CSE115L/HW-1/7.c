#include<stdio.h>
//S. M. Mahedi Hasan
//2112370642
int generateNumber(int digit1,int digit2,int  digit4);
int main(void)
{
    int n1 , n2 , n3;
    printf("Digit1: ");
    scanf("%d",&n1);
    printf("Digit2: ");
    scanf("%d",&n2);
    printf("Digit3: ");
    scanf("%d",&n3);
    printf("Result = %d",generateNumber(n1,n2,n3));
    return 0;
}
int generateNumber(int digit1,int digit2,int  digit4)
{
   int result=digit1*100+digit2*10+digit4;

    return result;
}
