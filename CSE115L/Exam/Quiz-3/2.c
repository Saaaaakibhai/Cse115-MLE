#include <stdio.h>
#include <string.h>
/*
Write a program that will count the consonants from a character space.
Declare 4 by 3 two dimensional matrix. Take the input from user and initialize the matrix.
You have to show the result in the main.
Use the switch-case and following
prototype:Void countConsonants(int row, int col, char letters[row][col], int *countConsonants)
*/
int main ()
{
    char str1[20] ;
    char str2[20] ;

    printf("Enter string:");
    gets(str1);

    int len = strlen(str1);


    for ( int i=0 ; i <len; i++){

        str2[i]=str1[len-1-i];

    }
    str2[len]= '\0';

    if(strcmp(str1,str2)==0)
        printf("%s is palindrome\n",str1);
    else
        printf("%s is not palindrome\n",str1);



    return 0;
}
