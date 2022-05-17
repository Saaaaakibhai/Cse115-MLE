#include<stdio.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }

    if((n*(n+1))/2 == sum)
        printf("Values are same.");
    else
        printf("Values are different.");

    return 0;
}
