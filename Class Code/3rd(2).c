#include<stdio.h>
#include<math.h>
int main(void)
{
    int base, exp, result;
    printf("Enter Base:");
    scanf("%d",&base);
    printf("Enter Exponent:");
    scanf("%d",&exp);
    result = pow(base,exp);
    printf("%d to the power %d = %d", base,exp,result);
    return 0;
}
