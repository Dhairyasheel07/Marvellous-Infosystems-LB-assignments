#include<stdio.h>
#include<stdlib.h>

void divisible(int ino1 )
{
    
    
    if(ino1 % 5 == 0)
    {
        printf("divisible by 5\n");
    }
    
    else 
    {
        printf(" not divisible by 5 \n");
    }
}

int main ()
{
    int ivalue1 = 0;
    

    
    printf("enter the number \n");

    scanf("%d",&ivalue1);

   
    
    divisible(ivalue1 );
    

    return EXIT_SUCCESS;
}