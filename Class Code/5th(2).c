/*#include<stdio.h>
//using nested if else
void print_grade(int score);
int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    print_grade(num);
    return 0;
}
void print_grade(int score)
{
    if
      (score>= 100)
      printf("Error!!");
    else
    {
        if(score >= 90)
            printf("Grade is A!");
        else
        {
            if(score >=80)
                printf("Grade is B!");
            else
            {
                if(score >=70)
                    printf("Grade is C!");
                else
                    printf("Fail!!");
            }
        }
    }
}*/
#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    print_grade(num);
    return 0;
}
void print_grade(int score)
{
    if (score>=100)
        printf("Error!!");
    else
    {
        if (score>=90)
            printf("Grade is A");
        else
        {
            if (score>=80)
                printf("Grade is B");
            else
            {
                if (score>=70)
                    printf("Grade is C");
                else
                    printf("Fail!!!");
            }
        }
    }
}
