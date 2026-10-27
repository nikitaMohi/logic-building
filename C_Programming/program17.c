#include<stdio.h>
#include<stdlib.h>


int main()
{
    int ivalue=0 ;

    printf("Enter number \n");
    scanf("%d",&ivalue);

    if((ivalue % 2)==0)      //  Check Number is Even or Odd
    {
        printf("it is even number\n");

    }

    else
    {
        printf("it is odd number\n");

    }


    return EXIT_SUCCESS;

}