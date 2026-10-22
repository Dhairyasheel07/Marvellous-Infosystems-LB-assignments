#include<stdio.h>
#include<stdlib.h>

void chcknumber(int ivalue)
{
    
    
    if(ivalue > 0)
    {
        printf("the number is positive");
    }
    else if(ivalue < 0)
    {
        printf("the number is negative");
    }
    else 
    {
        printf("the number is ZERO");
    }
}
int main ()
{
    int ivalue = 0;
    
    printf("enter the number\n");

    scanf("%d",&ivalue);

    chcknumber(ivalue);
    

    return EXIT_SUCCESS;
}