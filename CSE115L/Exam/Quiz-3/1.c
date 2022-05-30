#include <stdio.h>
#include <string.h>

int main ()
{
    char str1[10] ;
    char str2[10] ;
    char str3[10] ;
    printf("Enter first string:");
    gets(str1);
    printf ("Enter second string :");
    gets(str2);
    printf ("Enter third string :");
    gets(str3);

    if(strcmp(str1, str2 ) < 0 )

        if((str2, str3)<0)
        {
            printf("%s %s %s",str1, str2, str3);
        }
        else
        {
            printf("%s %s %s",str1, str3, str2);
        }

    else if(strcmp(str2, str1 ) < 0 )

        if((str1, str3)<0)
        {
            printf("%s %s %s",str2, str1, str3);
        }
        else
        {
            printf("%s %s %s",str2, str3, str1);
        }

    else if(strcmp(str3, str1 ) < 0 )

        if((str1, str2)<0)
        {
            printf("%s %s %s",str3, str1, str2);
        }
        else
        {
            printf("%s %s %s",str3, str2, str1);
        }

    return 0;
}
