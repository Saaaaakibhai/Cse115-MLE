/*
#include <stdio.h>
double print_average(int num1, int num2, int num3);

  int main (void)
{
    int num1, num2, num3;
    double avg;
    printf("Enter three integers: ");
    scanf("%d%d%d", &num1, &num2, &num3);
    print_average(num1,num2,num3);
    return 0;
}
  double print_average(int num1, int num2, int num3)
{
    double avg;
    avg = (num1+num2+num3)/3;
    printf("Average: %.2lf", avg);
}
*/
#include<stdio.h>
double get_average (int num1,int num2,int num3);
int main(void)
{
    int num1,num2,num3;
    double avg;
    printf("Enter Three Numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    get_average(num1,num2,num3);
    return 0;
}
double get_average (int num1,int num2,int num3)
{
    double avg;
    avg = (num1+num2+num3)/3;
    printf("Average = %.2lf",avg);
}
