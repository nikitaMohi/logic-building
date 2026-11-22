//Input : 4

#include<stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int icnt =0;

    for(icnt = 1; icnt<=iNo; icnt++)
    {

       printf("%d\n",icnt);

    }
   

}

int main()
{
    int ivalue = 0;

    printf("enter the frequency :\n");
    scanf("%d",&ivalue);

     Display(ivalue);

    return EXIT_SUCCESS;

}

