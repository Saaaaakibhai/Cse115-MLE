#include <stdio.h>
//S. M. Mahedi Hasan
//2112370642
int main(void)
{
	int i=1,x;
	printf("Integer that are not divisible by either 2 or 3 and lie between 1 and 100\n");
	for(i = 1; i <= 100; i++)
	{
	    if((i%2)!=0&&(i%3)!=0)
        {
            printf("%d\n", i);
			x++;
		}
	}
	printf("\nTotal Number Count: %d",x);
	return 0;
}
