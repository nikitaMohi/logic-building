#include<stdio.h>
#include<stdlib.h>

void CheckEven(int iNo)
{
    if((iNo % 2)==0)
    {
        printf("it is even number\n");

    }

    else
    {
        printf("it is odd number\n");

    }


}


int main()
{
    int ivalue=0 ;

    printf("Enter number \n");
    scanf("%d",&ivalue);

    CheckEven(ivalue);


    return EXIT_SUCCESS;

}