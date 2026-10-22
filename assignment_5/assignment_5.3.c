
#include<stdio.h>
#include<stdlib.h>

void divisible(int ino1 )
{
   
   
    
    
    if(ino1 % 3  == 0 && ino1 % 5 == 0 )
    {
        printf("Divivsibke by both 3 and 5\n");
    }

    else if (ino1 % 3 == 0)
        {
            printf("Divisible by 3\n");
        }
        
    else if(ino1 % 5 == 0)
        {
            printf("divisible by 5 \n");
        }
    else 
    {
        printf("not divisible by either");
    }
  
    }
    
   


int main ()
{
    int ivalue1 = 0  ;
    

    
    printf("enter the number \n");

    scanf("%d",&ivalue1);
  

      
    
    divisible(ivalue1 );
    

    return EXIT_SUCCESS;
}