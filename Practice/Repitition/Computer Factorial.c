#include<stdio.h>
int factorial(int n)
{
    int i,
    product = n;
    product = 1;
    for (i = n; i > 1; --1)
    {
        product = product * i;
    }
    return(product);
}
