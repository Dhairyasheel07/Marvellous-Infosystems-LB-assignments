#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

char chckvowel(char cvalue)
{
    tolower(cvalue);
    
    if(((cvalue == 'a') || cvalue ==  'e' || cvalue ==  'i' || cvalue ==  'o' || cvalue ==  'u'))
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}
int main ()
{
    char ivalue = '\0';
    BOOL bret = FALSE;
    printf("enter the character\n");

    scanf("%c",&ivalue);

    bret = chckvowel(ivalue);
    if (bret == TRUE)
    {
        printf("TRUE Its a vowel");
    }
    else
    {
        printf("Its not a vowel");
    }


    return EXIT_SUCCESS;
}