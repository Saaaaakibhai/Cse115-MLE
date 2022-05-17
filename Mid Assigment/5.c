#include<stdio.h>

int main()
{
int i,n1,n2;
printf("Enter the number of cars => ");
scanf("%d",&n1);
for(i=1; i<=n1; i++)
 {
   printf("Enter the speed of the cars => ");
   scanf("%d",&n2);

   if(n2>=90)
   {
     printf("The car is running above 90\n");
   }
   else if(n2>=50 && n2<90)
   {
     printf("The car is running between 50 and 90 mph\n");
   }
   else if(n2<50)
   {
     printf("The car is running below 50 mph\n");
   }
   else
    {
      printf("Invalid DATA!");
    }

 }
}
