 /*#include <conio.h>


int main()
{
    int a[1000],i,n,even=0,odd=0;

    printf("Enter size of the array : ");
    scanf("%d",&n);

    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0; i<n; i++)
    {
          if(a[i]%2==0)
          even++;
          else
          odd++;

    }
     printf("even numbers in array: %d",even);
     printf("\n odd numbers in array: %d",odd);


    return 0;
}*/
#include<stdio.h>
int main()
{
    int i,n1,n2,even=0,odd=0;
    printf("Enter how many number you want to input: ");
    scanf("%d",&n1);
    for(i=0 ; i<n1 ; i++)
    {
        printf("Enter the Number: ");
        scanf("%d",&n2);

        if((n2%2)!=0)
        {
            even+=1;
        }
        else
        {
            odd+=1;
        }
    }
     printf("even numbers in array: %d\n",even);
     printf(" odd numbers in array: %d",odd);

    return 0;
}
