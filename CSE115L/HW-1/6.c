#include<stdio.h>
#include<math.h>
#include<conio.h>
//S. M. Mahedi Hasan
//2112370642
int main(void)
{
    float base,height,hypotenuse,area;
    printf("Enter The Right Triangle Base: ");
    scanf("%f",&base);
    printf("Enter The Right Triangle Hypotenuse: ");
    scanf("%f",&hypotenuse);

    float base2 = pow(base,2);
    float hypotenuse2 = pow(hypotenuse,2);

    height = sqrt(hypotenuse2-base2);
    area =(base*height)/2;

    printf("The Height of Right Triangle: %.1f\n",height);
    printf("Area: %.3f",area);

}
