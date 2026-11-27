

#include<stdio.h>
#include <stdlib.h>

int Summation(int iNo)
{
    int icnt = 0;
    int isum = 1;

    for(icnt = 1; icnt<=iNo; icnt ++)
    {

       isum = isum * icnt;
       
       
    }

    return isum;
   

}

int main()
{
    int ivalue = 0;
    int iRet = 0;

    printf("enter the frequency :\n");
    scanf("%d",&ivalue);

     iRet = Summation(ivalue);

     printf("summation is: %d\n",iRet);

    return EXIT_SUCCESS;

}

