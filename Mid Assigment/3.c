/*

#include<stdio.h>
int main(void)
{
    int n;
    printf("");
    scanf("%d",&n);
    printf("");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    if ((n%2)!=0)
        printf("Answer");
    else
        printf("Error!!");
    return (0);
}

*/
#include<stdio.h>

int main(void)
{
    int a,b;
    do
    {
    printf("Enter the 1st value:");
    scanf("%d",&a);
    printf("Enter the 2nd value:");
    scanf("%d",&b);

        if ((a%b)==0)
        {
            printf("Evenly Divides\n");
        }
        else
        {
            printf("Not Evenly Divides......!!\n\n\tTry Again...\n\n");
        }

    }

    while(a%b==0);
}
