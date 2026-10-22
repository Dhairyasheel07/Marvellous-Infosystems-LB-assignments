#include<stdio.h>
#include<stdlib.h>

void chckeven(int ino1 , int ino2)
{
    
    
    if(ino1>ino2)
    {
        printf("%d is greater",ino1);
    }
    
    else if(ino2>ino1)
    {
        printf(" %d is greater",ino2);
    }
    else if (ino1 == ino2)
    {
        printf("both are equal");
    }
}
int main ()
{
    int ivalue1 = 0;
    int ivalue2 = 0;

    
    printf("enter 1st the number\n");

    scanf("%d",&ivalue1);

    printf("enter 2nd the number\n");

    scanf("%d",&ivalue2);
    
    chckeven(ivalue1 , ivalue2);
    

    return EXIT_SUCCESS;
}