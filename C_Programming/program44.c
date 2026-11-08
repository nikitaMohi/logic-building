#include<stdio.h>
#include<stdlib.h>

float Average(float fNo1, float fNo2)
{
    float fAvg = 0.0f;

    fAvg = (fNo1 +fNo2 ) / 2;
    return fAvg;
}
int main()
{
    int ivalue1 =0, ivalue2=0; 
    float fResult = 0.0f;

    printf("Enter first number:\n");
    scanf("%d",&ivalue1);

    printf("Enter second number:\n");
    scanf("%d",&ivalue2);

     
    fResult = Average(ivalue1,ivalue2);

    printf("Average is :%f\n",fResult);
   

    return EXIT_SUCCESS;
}