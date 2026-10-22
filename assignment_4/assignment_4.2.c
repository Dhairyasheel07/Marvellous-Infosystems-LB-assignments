#include<stdio.h>
#include<stdlib.h>

void chckeven(int ivalue)
{
    
    
    if(ivalue % 2 == 0)
    {
        printf("the number is EVEN");
    }
    
    else 
    {
        printf("the number is ODD");
    }
}
int main ()
{
    int ivalue = 0;
    
    printf("enter the number\n");

    scanf("%d",&ivalue);

    chckeven(ivalue);
    

    return EXIT_SUCCESS;
}