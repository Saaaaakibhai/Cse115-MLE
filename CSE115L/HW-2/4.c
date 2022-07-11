#include <stdio.h>
#include <limits.h>
int main(void)
{
  int n=10;
  int large,secondlarge;
  int arr[n];

  for (int i = 0; i < n; ++i)
{
    printf("Enter number %d: ", i + 1);
    scanf("%d", &arr[i]);
}
  large=secondlarge=INT_MIN;
  for (int i = 0; i < n; ++i)
    {
    if (large < arr[i])
    {
      large=secondlarge;
      large = arr[i];
    }
    else if(arr[i]>secondlarge&&arr[i]<large)
    {
        secondlarge=arr[i];
    }
    }

  printf("Largest number = %d\n",large);
  printf("Second Largest number = %d",secondlarge);
  return 0;
}
