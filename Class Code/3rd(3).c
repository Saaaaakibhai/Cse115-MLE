#include<stdio.h>
void draw_circle(void);
int main(void)
{
    printf("Example of user defined function\n");
    printf("Function with no return type and no arguments\n");
    draw_circle();
    draw_circle();
    return 0;
}
void draw_circle(void)
{
    printf("  *\n");
    printf("*   *\n");
    printf(" * *\n");
}
