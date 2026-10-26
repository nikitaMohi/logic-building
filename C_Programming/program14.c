#include "Header.h"

int main()
{  
    int iValue1 = 0 , iValue2 = 0 , iResult  = 0;

   printf("Enter the first Number :\n");

   if( scanf("%d",&iValue1 ) !=1)
   {
      fprintf(stderr,"unable to processed as input is invalid\n");

      return EXIT_FAILURE;
   }

    printf("Enter the second Number :\n");

    if( scanf("%d",&iValue2) !=1)
   {
      fprintf(stderr,"unable to processed as input is invalid\n");

      return EXIT_FAILURE;

   }
    iResult = Addition(iValue1,iValue2);
    
    printf(" Additon is : %d\n",iResult);


    return EXIT_SUCCESS;
}


