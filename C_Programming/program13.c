
#include<stdio.h>
#include<stdlib.h>

///////////////////////////////////////////////////////
//  
//   Function Name  :   Addition
//   Input          :   integer 
//   output         :   integer
//   Description    :   peform Addition
//   Date           :   04/10/2026
//   Author         :   Nikita Balasaheb Mohite
//
///////////////////////////////////////////////////////

int Addition (
             int iNo1,      //First Input
             int iNo2       //Second Input
            )
{
    int iAns = 0;

    iAns = iNo1+iNo2;        //Bussiness Logic

    return iAns;

}
///////////////////////////////////////////////////////
// 
// Entery Point of the Application
//
///////////////////////////////////////////////////////


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


////////////////////////////////////////////////////////////
//
// step 5 : Test the program
//
//      Tested test cases
//--------------------------------------------
//    Input 1          Input 2         Output
//----------------------------------------------
//      10             11                21
//      11             0                 11
//      0              11                11
//      20             -9                11
//      -9             20                11
//      -20           -11               -31
//
////////////////////////////////////////////////////////////