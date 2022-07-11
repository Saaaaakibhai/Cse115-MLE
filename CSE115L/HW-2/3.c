#include <stdio.h>
int main()
{
    int number1, number2, number3;
    int *p1, *p2, *p3;
    printf("Enter First Number: ");
    scanf("%d",&number1);
    printf("Enter Second Number: ");
    scanf("%d",&number2);
    printf("Enter Third Number: ");
    scanf("%d",&number3);

    p1 = &number1;
    p2 = &number2;
    p3 = &number3;

	if(*p1 > *p2)
    {
        if(*p3 > *p1)
            printf("Maximum number is %d", *p3);
        else
            printf("Maximum number is %d", *p1);
    }
    else
    {
        if(*p3>*p2)
            printf("Maximum number is %d", *p3);
        else
            printf("Maximum number is %d", *p2);
    }

   return 0;
}
