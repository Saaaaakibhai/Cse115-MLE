/*#include<stdio.h>
int main(void)
{
    double total_pay;
    int count_emp;
    int number_emp;
    double hours;
    double rate;
    double pay;
    printf("Enter Number Of Employee: ");
    scanf("%d",&number_emp);
    total_pay=0.0;
    count_emp=0;
    while(count_emp < number_emp)
    {
    printf("Hours: ");
    scanf("%lf",&hours);
    printf("Rate: ");
    scanf("%lf",&rate);
    pay = hours * rate;
    printf("Pay is %6.2lf\n\n",pay);
    total_pay = total_pay + pay;
    count_emp = count_emp + 1;
    }

        printf("All employees processed\n");
        printf("Total Payroll is %8.3lf\n",total_pay);
        return(0);
}
*/
#include<stdio.h>
int main(void)
{
    double total_pay;
    int count_emp;
    int number_emp;
    double hours;
    double rate;
    double pay;
    printf("Enter Number Of Employee: ");
    scanf("%d",&number_emp);
    total_pay = 0.0;
    for(count_emp = 0;
        count_emp < number_emp;
        count_emp += 1)
        {
            printf("Hours: ");
            scanf("%lf",&hours);
            printf("Rate: ");
            scanf("%lf",&rate);
            pay = hours * rate;
            printf("Pay is %6.2lf\n\n",pay);
            total_pay = total_pay + pay;
        }
        printf("All employees processed\n");
        printf("Total Payroll is %8.3lf\n",total_pay);
        return(0);
}
