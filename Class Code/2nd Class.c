/* #include<stdio.h>
int main (void)

{
    int num;
    float decimal;
    char ch;
    printf("==================================================\n");
       printf("    ***CONSTANT OF PHYSISC AND MATHEMATICS***\n") ;
    printf("__________________________________________________\n");
    printf("|Constant\t\t|    Value\t         |\n");
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|Speed of Light\t\t|2.99792e+8              |\n");
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|Gravitational\t\t|6.67E-11\t         |\n");
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|Electron Volt \t\t|1.602176e-19\t         |\n");
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|Molar Mass Constant \t|1e-003\t                 |\n");
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|Euler Number  \t\t|02.72\t                 |\n");
    printf("|");
    printf("------------------------------------------------|\n");
    printf("|Golden Ratio\t\t|0001.618\t         |\n");
    printf("|");
    printf("------------------------------------------------|\n");
    printf("==================================================\n");
    return 0;
}
*/
/*
#include<stdio.h>
   int main(void){

  float sol = 2.99792e+8;
  float gc = 6.67E-11;
  float ev = 1.602176e-19;
  float mmc = 1e-003;
  float en = 02.72;
  float gr = 0001.618;
    printf("\t ______________________________________________________________________________\n");
    printf("\t|Constant               | Value                                               |\n");
    printf("\t|_______________________|______________________________________________________|\n");
    printf("\t|Speed of light         |           %e                                   |\n",sol);
    printf("\t|_______________________|______________________________________________________|\n");

printf("\t|_______________________|______________________________________________________|\n");
    printf("\t|Gravitational Constant |             %.5E                                 |\n",gc);
    printf("\t|_______________________|______________________________________________________|\n");
    printf("\t|Electron Volt          |                %.5e                                |\n",ev);
    printf("\t|_______________________|______________________________________________________|\n");
    printf("\t|Molar Mass Constant    |   %.3e   ");
    printf("\t|_______________________|______________________________________________________|\n");
    printf("\t|Euler Number        |        %e");
    printf("\t|_______________________|______________________________________________________|\n");
    printf("\t|Golden Ratio\t|\t%08.3f|\n",golden);
     printf("------------------------------------------------|\n");
    printf("==================================================\n");
    return 0;
   }
*/

#include<stdio.h>
int main(){

    float lightspeed = 2.99792e+8;
    float gravity = 6.67E-11;
    float electron = 1.602176e-19;
    float molar_mass = 1e-003;
    double euler = 02.72;
    double golden = 0001.618;

printf("\t***CONSTANT OF PHYSICS AND MATHEMATICS***\n");
    printf("\t............................................\n");
    printf("\t|Constant\t\t|\tValue|\n");
    printf("\t............................................\n");
    printf("\t|Speed of Light\t\t|\t%.5e|\n",lightspeed);
    printf("\t............................................\n");
    printf("\t|Gravitaional Constant\t|\t%.2E|\n",gravity);
    printf("\t............................................\n");
printf("\t|Electron Volt\t\t|\t%e|\n",electron);
    printf("\t............................................\n");
    printf("\t|Molar Mass Constant\t|\t%e|\n",molar_mass);
    printf("\t............................................\n");
    printf("\t|Euler Number\t|\t%.2f|\n",euler);
    printf("\t............................................\n");
    printf("\t|Golden Ratio\t|\t%08.3f|\n",golden);
    printf("\t............................................\n");
    return 0;
}

/*#include <stdio.h>

int main(void) {
	float c = 2.99792e+8;
	float G = 6.67e-11;
	float e = 1.602176e-19;
	float amu = 0.001;
	float En = 2.718281828459;
	float Gr = 1.618033988749;

	printf("Speed of light: %.5e", c);
	printf("\nGravitational Constant: %e", G);
	printf("\nElectron volt: %e", e);
	printf("\nMolar mass constant: %1f", amu);
	printf("\nEuler number: %.2f", En);
	printf("\nGolden ratio: %.3f", Gr);
	return 0;
}
*/
