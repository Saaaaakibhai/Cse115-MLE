#include<stdio.h>
void average(int first, int second);
int main(void)
{
    int a = 7, b = 8;
    average(a,b);
    return 0;
}
void average (int first, int second)
{
    double result;
    result = (first + second)/2.0;
    printf("Average of %d and %d is %.2lf\n",first, second, result);
}
