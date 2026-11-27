#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("it is divisible\n");
    }

    else
    {
         printf("it is Not  divisible\n");
    }


}

int main()
{
    int ivalue = 0;

    printf("enter number :\n");
    scanf("%d",&ivalue);

    CheckDivisible(ivalue);



    return EXIT_SUCCESS;
}