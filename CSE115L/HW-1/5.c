#include<stdio.h>
#include<math.h>
//S. M. Mahedi Hasan
//2112370642
int main()
{
    int n1, n2, n3;
    printf("Enter the 1st value: \n");
    scanf("%d",&n1);
    printf("Enter the 2nd value: \n");
    scanf("%d",&n2);
    printf("Enter the 3rd value: \n");
    scanf("%d",&n3);
    printf("---------------------------------------------------------\n");
    printf("|value,x|\tx^5\t|x^6-x^5\t|sin(x^6-x^5)\t|\n");
    printf("---------------------------------------------------------\n");
    printf("|%d\t|%.0f\t\t|%.0f\t\t|%.2f\t\t|\n",n1,pow(n1,5),(pow(n1,6)-pow(n1,5)),sin((pow(n1,6)-pow(n1,5))));
    printf("---------------------------------------------------------\n");
    printf("|%d\t|%.0f\t\t|%.0f\t\t|%.2f\t\t|\n",n2,pow(n2,5),(pow(n2,6)-pow(n2,5)),sin((pow(n2,6)-pow(n2,5))));
    printf("---------------------------------------------------------\n");
    printf("|%d\t|%.0f\t\t|%.0f\t\t|%.2f\t\t|\n",n3,pow(n3,5),(pow(n3,6)-pow(n3,5)),sin((pow(n3,6)-pow(n3,5))));
    printf("---------------------------------------------------------\n");
}
