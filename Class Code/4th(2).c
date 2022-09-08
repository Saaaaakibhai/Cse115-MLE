/*
#include<stdio.h>
double get_average(int a, int b, int c);

int main()
{
    int a, b, c;
    double avg;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("average = %.2lf",get_average(a,b,c));
    return 0;
}

double get_average(int a, int b, int c)
{
    double avg;
    avg= (a+b+c)/3;
    return avg;
}
*/

#include<stdio.h>
double get_average (int a, int b, int c);

int main(void)
{
    int a,b,c;
    double avg;
    printf("Enter three Number: ");
    scanf("%d%d%d",&a,&b,&c);
    printf("average = %.2lf",get_average(a,b,c));
    return 0;
}
double get_average(int a, int b, int c)
{
    double avg;
    avg= (a+b+c)/3;
    return avg;
}
