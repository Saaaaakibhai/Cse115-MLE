#include<stdio.h>
#include<math.h>
int main (void)
{
    double n;
    double result;
    printf("Enter an integer: ");
    scanf("%lf",&n);
    result = sqrt (n);
    printf("Square root of %.2lf = %.2lf", n, result);
    return 0;
}
