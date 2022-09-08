#include<stdio.h>
int main(void)
{
    float c, f;
    printf("Enter Temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;

    printf("Celsius %.2f = Fahrenheit %.2f", c, f);

    return 0;
}
