#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ivalue1 =0, ivalue2=0, iResult = 0;

    printf("Enter first number:\n");
    scanf("%d",&ivalue1);

    printf("Enter second number:\n");
    scanf("%d",&ivalue2);

    if(ivalue1>ivalue2)
    {
        printf("Maximum is :%d",ivalue1);
    }

    else
    {
        printf("Maximum is: %d",ivalue2);
    }

    return EXIT_SUCCESS;
}
