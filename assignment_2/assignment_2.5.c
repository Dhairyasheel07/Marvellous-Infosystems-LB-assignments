//input : 12 5
//output : 12 12 12 12 12 

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;


BOOL checkeven(int ino)
{
    
    if (ino % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
    
}
int main()
{
    int ivalue = 0;
    int bret = FALSE;

    printf("enter the number\n");
    scanf("%d",&ivalue);
    
    bret = checkeven(ivalue);

    if (bret == 1)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }

    
    return EXIT_SUCCESS;
}