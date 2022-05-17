#include<stdio.h>
#include<math.h>

int main()
{
  int init_degree, final_degree, step_degree, i;
  double radian;
  printf("Please enter the initial degree: ");
  scanf("%d",&init_degree);
  printf("Please enter the final degree: ");
  scanf("%d",&final_degree);
  printf("Please enter the step degree: ");
  scanf("%d",&step_degree);

  for(i = init_degree; i <= final_degree; i = i + step_degree)
  {
    radian = i * (3.1416 / 180);
    printf("%lf\n",sin(radian));
    printf("%lf",cos(radian));
  }

}
