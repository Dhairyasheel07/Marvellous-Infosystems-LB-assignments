#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

char convert(char cvalue)
{
    if(islower(cvalue))
    {
        printf("%c",toupper(cvalue));
    }
    else if (isupper(cvalue))
    {
        printf("%c",tolower(cvalue));
    }
}
int main ()
{
    char ivalue = '\0';
    printf("enter the character\n");

    scanf("%c",&ivalue);

    convert(ivalue);

    return EXIT_SUCCESS;
}