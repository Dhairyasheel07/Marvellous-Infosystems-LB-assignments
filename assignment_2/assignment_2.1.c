#include<stdio.h>
#include<stdlib.h>



void display(int ino)
{
    int icnt=0;
    while (icnt<ino)
    {
        
        printf("*\n");
        icnt++;
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