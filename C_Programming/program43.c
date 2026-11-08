#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1, int iNo2)
{
    int iMin=0;
    if(iNo1<iNo2)
    {
        return iNo1;

    }

    else
    {
        return iNo2;
    }
}
int main()
{
    int ivalue1 =0, ivalue2=0, iResult = 0;

    printf("Enter first number:\n");
    scanf("%d",&ivalue1);

    printf("Enter second number:\n");
    scanf("%d",&ivalue2);

     
    iResult= Minimum(ivalue1,ivalue2);

    printf("Minimum is :\n",iResult);
   

    return EXIT_SUCCESS;
}
