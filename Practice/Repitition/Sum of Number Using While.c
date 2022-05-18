#include<stdio.h>
int main(void)
{
    int i = 0;
    int a;
    int sum = 0;
    while (i<4)
    {
        printf("Enter a number: ");
        scanf("%d",&a);
        sum = sum + a;
        i++;
    }
    printf("\nTotal final number is %d\n",sum);
    return 0;
}
