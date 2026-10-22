#include<stdio.h>
#include<stdlib.h>



void display(int ino)
{
    
    if (ino <10 )

    {
        printf("hello\n");
    }
    else
    {
        printf("Demo\n");
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