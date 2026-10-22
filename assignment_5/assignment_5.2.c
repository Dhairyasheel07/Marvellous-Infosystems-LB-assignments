
#include<stdio.h>
#include<stdlib.h>

void leapyear(int ino1  )
{
    
    
    if(ino1 <= 0 )
    {
        printf("Invalid year\n");
        return;
    }

        if (ino1 % 400 ==0)
        {
            printf("its a leap year\n");
        }
        else if(ino1 % 4 == 0 && ino1 % 100 != 0 )
        {
            printf("it is a leap year\n");
        }
        else
        {
            printf("not a leap year \n");
        }
    }
    
   


int main ()
{
    int ivalue1 = 0 ;
    

    

    printf("enter year \n");

    scanf("%d",&ivalue1);

      
    
    leapyear(ivalue1 );
    

    return EXIT_SUCCESS;
}