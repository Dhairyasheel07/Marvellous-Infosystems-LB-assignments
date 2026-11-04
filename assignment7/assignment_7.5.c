#include<stdio.h>
#include<stdlib.h>

void digitodd(int iNo)
{
    int iCnt = 0;
    int ans = 0;
    

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        ans = iNo * iCnt ;    
        printf("%d\t",ans);
        
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the value : \n");
    scanf("%d",&iValue);

    digitodd(iValue);

    return EXIT_SUCCESS;
}