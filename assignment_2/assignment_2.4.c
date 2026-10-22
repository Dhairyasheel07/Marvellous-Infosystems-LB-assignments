//input : 12 5
//output : 12 12 12 12 12 

#include<stdio.h>
#include<stdlib.h>



void display(int ino, int ifrequency)
{
    
    int icnt = 0;
    for(icnt = 0 ; icnt < ifrequency ; icnt++)
    {
        printf("%d\n",ino);
    }
    
}
int main()
{
    int ivalue = 0;
    int ifre = 0;

    printf("enter the number\n");
    scanf("%d",&ivalue);
    
    printf("enter the frequency\n");
    scanf("%d",&ifre);

    display(ivalue, ifre);

    
    return EXIT_SUCCESS;
}