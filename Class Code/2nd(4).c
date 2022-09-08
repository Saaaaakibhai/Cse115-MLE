#include<stdio.h>
int main (void)
    //mahedihasan06@northsouth.edu
{
    int burger,qburger,fburger;
    int pizza,qpizza,fpizza;
    int fries,qfries,ffries;
    int water,qwater,fwater;

    float vat,total;

    //Quantity of (food)= q(foodname)
    //Final Price Of (food) = f (foodname)
    burger = 180;
    pizza = 650;
    fries = 60;
    water = 15;

       printf("      ===LIST OF PRODUCT===\n") ;
    printf("__________________________________\n");
    printf("|Product\t|\t   Price |\n");
    printf("|");
    printf("--------------------------------|\n");
    printf("|Burger\t\t|        %dtaka |\n",burger);
    printf("|");
    printf("--------------------------------|\n");
    printf("|Pizza\t\t|        %dtaka |\n",pizza);
    printf("|");
    printf("--------------------------------|\n");
    printf("|Fries \t\t|         %dtaka |\n",fries);
    printf("|");
    printf("--------------------------------|\n");
    printf("|Water \t\t|         %dtaka |\n",water);
    printf("|");
    printf("________________________________|\n\n");

       printf("           ===Order===\n") ;
       printf("Burger: ");
       scanf("%d",&qburger);
       printf("Pizza: ");
       scanf("%d",&qpizza);
       printf("Fries: ");
       scanf("%d",&qfries);
       printf("Water: ");
       scanf("%d",&qwater);

       fburger = burger * qburger;
       fpizza = pizza * qpizza;
       ffries = fries * qfries;
       fwater = water * qwater;

       vat = (fburger + fpizza + ffries + fwater) * .15;
       total = (fburger + fpizza + ffries + fwater + vat);

    printf("\n\t\t\t === Receipt ===\n");

	printf("\t _________________________________________________\n");
    printf("\t|      Product    |  Quantity |       Price       |\n");
    printf("\t|_________________|___________|___________________|\n");
    printf("\t| Burger          |      %d   |        %.2dtaka     |\n",qburger, fburger);
    printf("\t|_________________|___________|___________________|\n");
    printf("\t| Pizza           |      %d   |        %.2dtaka     |\n",qpizza, fpizza);
    printf("\t|_________________|___________|___________________|\n");
    printf("\t| Fries           |      %d   |        %.2dtaka     |\n",qfries, ffries);
    printf("\t|_________________|___________|___________________|\n");
    printf("\t| Water           |      %d   |         %.2dtaka    |\n",qwater, fwater);
    printf("\t|_________________|___________|___________________|\n");
    printf("\t| Vat(15%%)                          %.2ftaka       |\n",vat);
    printf("\t|_________________________________________________|\n");
    printf("\t| Total                            %.2ftaka         |\n",total);
    printf("\t|_________________________________________________|\n");


    return 0;
}
