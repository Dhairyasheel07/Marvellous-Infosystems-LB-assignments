
#include<stdio.h>
#include<stdlib.h>

void leapyear(int ino1 ,  int ino2 ,int ino3   )
{
    
    
    if(ino1 > ino2 && ino3 )
    {
        printf("%d is the greatest\n",ino1);
    }

    else if (ino2> ino1 && ino3)
        {
            printf("%d is the greatest\n",ino2);
        }
        
    else if(ino3 > ino1 && ino2)
        {
            printf("%d is greatest\n",ino3);
        }

  
    }
    
   


int main ()
{
    int ivalue1 = 0  , ivalue2 = 0 , ivalue3 = 0;
    

    
    printf("enter 1st number \n");

    scanf("%d",&ivalue1);
    printf("enter 2nd number\n");

    scanf("%d",&ivalue2);

    printf("enter the 3rd number \n");

    scanf("%d",&ivalue3);

      
    
    leapyear(ivalue1 , ivalue2 , ivalue3 );
    

    return EXIT_SUCCESS;
}