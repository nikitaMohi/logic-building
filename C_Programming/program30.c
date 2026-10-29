#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge=0;
    float fMarks=0.0f;

    printf("enter your name\n");
    scanf("%[^'\n']s",sName);

    printf("enter ypur age:\n");
    scanf("%d",&iAge);         //Enter remians in Input Buffer

    printf("enter your marks\n");
    scanf("%f",&fMarks);

    printf("welcome %s\n",sName);
    printf("your age is %d\n",iAge);
    printf("your marks is %f\n",fMarks);

    return EXIT_SUCCESS;
}

