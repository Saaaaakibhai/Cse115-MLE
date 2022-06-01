#include<stdio.h>
//S. M. Mahedi Hasan
//2112370642
int countEvenNumbers(int num);
int main ()
{
    int n,even ;
    printf("Enter number: ");
    scanf("%d",&n);
    even=countEvenNumbers(n);
    printf("Even digits = %d \n",even);
    return 0;
}
int countEvenNumbers(int num)
{
int even =0;

for (int i = 1 ; i <= 5; i++)
{
   if((num % 10)%2==0)
   {
    even++;
   }
    num /= 10 ;
   }
    return even;
}
