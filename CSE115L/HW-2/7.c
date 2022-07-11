#include <stdio.h>
#include <string.h>

void replaceword(char[], char[], char[]);

int main()
{
    char string[100], old_str[100], new_str[100];
    printf("Enter a string: ");
    gets(string);
    printf("Enter the old word: ");
    gets(old_str);
    printf("Enter the new word: ");
    gets(new_str);
    replaceword(string, old_str, new_str);
    printf("Result : %s\n", string);
    return 0;
}

void replaceword(char string[], char old_str[], char new_str[])
{
    int stringLen, subLen, newLen;
    int i = 0, j, k;
    int flag = 0, start, end;
    stringLen = strlen(string);
    subLen = strlen(old_str);
    newLen = strlen(new_str);

    for (i = 0; i < stringLen; i++)
    {
        flag = 0;
        start = i;
        for (j = 0; string[i] == old_str[j]; j++, i++)
            if (j == subLen - 1)
                flag = 1;
        end = i;
        if (flag == 0)
            i -= j;
        else
        {
            for (j = start; j < end; j++)
            {
                for (k = start; k < stringLen; k++)
                string[k] = string[k + 1];
                stringLen--;
                i--;
            }

            for (j = start; j < start + newLen; j++)
            {
                for (k = stringLen; k >= j; k--)
                    string[k + 1] = string[k];
                string[j] = new_str[j - start];
                stringLen++;
                i++;
            }
        }
    }
}
