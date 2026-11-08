#include<stdio.h>
#include<stdlib.h>

void Maximum(int iNo1, int iNo2)
{
    int iMax=0;
    if(iNo1>iNo2)
    {
        printf("Maximum is :%d",iNo1);

    }

    else
    {
        printf("Maximu is :%d",iNo2);
    }
}
int main()
{
    int ivalue1 =0, ivalue2=0, iResult = 0;

    printf("Enter first number:\n");
    scanf("%d",&ivalue1);

    printf("Enter second number:\n");
    scanf("%d",&ivalue2);

    iResult= Maximum(ivalue1,ivalue2);

    printf("Maximum is :\n",iResult);

    

    return EXIT_SUCCESS;
}
