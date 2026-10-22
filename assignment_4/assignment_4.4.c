#include<stdio.h>
#include<stdlib.h>

void chckvotingEligiblity(int ino1 )
{
    
    
    if(ino1>18)
    {
        printf("Eligible for voting\n");
    }
    
    else if(ino1 > 0 && ino1<18)
    {
        printf(" not eligible for voting\n");
    }
    else if (ino1 < 0)
    {
        printf("invalid age");
    }
}
int main ()
{
    int ivalue1 = 0;
    

    
    printf("enter the age \n");

    scanf("%d",&ivalue1);

   
    
    chckvotingEligiblity(ivalue1 );
    

    return EXIT_SUCCESS;
}