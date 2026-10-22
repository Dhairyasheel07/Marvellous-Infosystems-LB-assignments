#include<stdio.h>
#include<stdlib.h>



void accept(int ino)
{
    int icnt=0;
    for (icnt = 1;icnt <= ino;icnt++)
    {
        printf("*\n");
    }
}
int main()
{
    int ivalue = 0;
    

    printf("enter the number\n");
    scanf("%d",&ivalue);

    accept(ivalue);

    
    return EXIT_SUCCESS;
}