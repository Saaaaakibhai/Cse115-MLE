#include<stdio.h>
#include<math.h>

int main()
{
 float pie;
 int n,i,x;
 printf("Enter the number of iterations: ");
 scanf("%d",&n);

 for(i=0; i<=n; i++)
 {
   if ((i%2) == 0)
   {
     x = 1;
   }
   else
   {
     x = -1;
   }
   pie += (float) (4 * x) / (i*2 + 1);
 }
 printf("\nThe Value Of Pie: %lf\n",pie);
}
