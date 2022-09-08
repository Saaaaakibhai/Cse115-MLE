#include<stdio.h>
double get_average(int first, int second);
int main(void)
{
    int a = 7, b = 8;
    double average;
    average = get_average(a, b);
    printf("Average of %d and %d is %.2lf\n",a, b, average);
    return 0;
}
double get_average(int first, int second)
{
    double result;
    result = (first + second)/2.0;
    return result;
}
