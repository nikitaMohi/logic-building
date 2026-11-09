#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2 ,int iNo3)
{
    float fAvg = 0.0f;

     // Typecasting
    fAvg = ( (float)iNo1 +(float)iNo2 +(float)iNo3 ) / 2;

    return fAvg;
}
int main()
{
    int ivalue1 =0, ivalue2=0 , ivalue3=0;
    float fResult = 0.0f;

    printf("Enter first number:\n");
    scanf("%d",&ivalue1);

    printf("Enter second number:\n");
    scanf("%d",&ivalue2);

    printf("Enter third number:\n");
    scanf("%d",&ivalue3);


     
    fResult = Average(ivalue1,ivalue2,ivalue3);

    printf("Average is :%f\n",fResult);
   

    return EXIT_SUCCESS;
}