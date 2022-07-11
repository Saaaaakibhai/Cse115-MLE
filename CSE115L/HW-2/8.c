#include <stdio.h>
float getMax(float *n1, float *n2, float *n3)
{
    if (*n1 > *n2)
    {
        if (*n1 > *n3)
        {
            return *n1;
        }
        else
        {
            return *n3;
        }
    }
    else
    {
        if (*n2 > *n3)
        {
            return *n2;
        }
        else
        {
            return *n3;
        }
    }
}

int main()
{
    float num1, num2, num3, largest;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    largest = getMax(&num1, &num2, &num3);
    printf(" Result : %.2f", largest);

    return 0;
}
