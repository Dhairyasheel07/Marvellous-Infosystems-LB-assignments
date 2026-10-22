#include<stdio.h>
#include<stdlib.h>



void display(int ino)
{
    
    while (ino>0)
    {
        
        printf("*\n");
        ino--;
    }
    
}
int main()
{
    int ivalue = 0;
    

    printf("enter the number\n");
    scanf("%d",&ivalue);

    display(ivalue);

    
    return EXIT_SUCCESS;
}