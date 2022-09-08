/*
#include<stdio.h>
void DrawFigure();
void DrawTringle();
void DrawIntersect();
void DrawRectangle();
void DrawBase();

int main()
{

    DrawFigure();

}
   void DrawFigure()
{
    DrawTringle();
    DrawRectangle();
    DrawIntersect();
}
   void DrawTringle()
{
    DrawIntersect();
    DrawBase();

}
   void DrawIntersect()
{
printf("  *\n");
printf(" * *\n");
printf("*   *\n");
}
   void DrawRectangle()
{
printf("*****\n");
printf("*   *\n");
printf("*   *\n");
printf("*   *\n");
printf("*****\n");
}
   void DrawBase()
{
printf("*****\n");
}
*/
#include<stdio.h>
void figure();
void triangle();
void intersect();
void base();
void rectangle();

int main()
{
    figure();
}
void figure()
{
    triangle();
    rectangle();
    intersect();
}
void triangle()
{
    intersect();
    base();
}
void intersect()
{
printf("  *\n");
printf(" * *\n");
printf("*   *\n");
}
void rectangle()
{
printf("*****\n");
printf("*   *\n");
printf("*   *\n");
printf("*   *\n");
printf("*****\n");
}
void base()
{
printf("*****\n");
}
