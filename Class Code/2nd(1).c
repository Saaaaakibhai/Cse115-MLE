/* #include<stdio.h>
int main(void)
{
    float sol = 2.99792e+8;
    float gc = 6.67E-11;
    float ev = 1.602176e-19;
    float mmc = 1e-003;
    float en = 02.72;
    float gr = 0001.618;
    printf("==================================================\n");
       printf("     ***CONSTANT OF PHYSICS AND MATHEMATICS***\n") ;
    printf("__________________________________________________\n");
    printf("|Speed Of Light\t\t\t|:%.5e\t |\n",sol);
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|Gravitational Constant\t\t|:%.2E      |\n",gc);
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|Electron Volt\t\t\t|:%.5e\t |\n",ev);
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|Molar Mass Constant \t\t|:%e  |\n",mmc);
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|Eular Number \t\t\t|:%f\t |\n",en);
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|Golden Ratio \t\t\t|:%lf\t |\n",gr);
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|");
    printf("================================================|\n");
    return 0;
}
*/
#include<stdio.h>
// riad.safowan@northsouth.edu
// 03-03-20

   int main(void){

  float sol = 2.99792e+8;
  float gc = 6.67E-11;
  float ev = 1.602176e-19;
  float mmc = 1e-003;
  float en = 02.72;
  float gr = 0001.618;

    printf("\t _____________________________________________________________\n");
    printf("\t|Constant               |                              Value |\n");
    printf("\t|_______________________|____________________________________|\n");
    printf("\t|Speed of light         |                        %.5e |\n",sol);
    printf("\t|_______________________|____________________________________|\n");
    printf("\t|Gravitational Constant |                           %.2E |\n",gc);
    printf("\t|_______________________|____________________________________|\n");
    printf("\t|Electron Volt          |                       %.6e |\n",ev);
    printf("\t|_______________________|____________________________________|\n");
    printf("\t|Molar Mass constant    |                              %.0e |\n",mmc);
    printf("\t|_______________________|____________________________________|\n");
    printf("\t|Euler Number           |                              %05.2f |\n",en);
    printf("\t|_______________________|____________________________________|\n");
    printf("\t|Golden Ratio           |                           %08.3f |\n",gr);
    printf("\t|_______________________|____________________________________|\n");

return 0;
}
