#include <stdio.h>
void findEvenOddNumber(int size , int originalArr[],int evenArr[],int oddArr[])
{
    int even=0,odd=0;

    for(int i=0;i<size;i++)
    {
        if(originalArr[i]%2==0)
        {
            evenArr[even]=originalArr[i];
            even++;
        }
        else
        {
            oddArr[odd]=originalArr[i];
            odd++;
        }
    }
    printf("\nEven Array : ");

    if(even==0)
    {
        printf("None");
    }
    else
    {
        for(int i=0;i<even;i++)
        {
        printf("%d ",evenArr[i]);
        }
    }
    printf("\nOdd Array : ");

    if(odd==0)
    {
        printf("None");
    }
    else
    {
        for(int i=0;i<odd;i++)
        {
            printf("%d ",oddArr[i]);
        }
    }
}
int main()
{
    int array[12];
    int evenArr[12], oddArr[12];
    for ( int i = 0 ; i < 12 ; i++ )
    {
        printf("Enter element %d : ",i+1);
        scanf("%d", &array[i]);
    }

    findEvenOddNumber(12,array,evenArr,oddArr);

    return 0;
}
