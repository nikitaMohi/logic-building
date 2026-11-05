//Approch 2

import java .util.Scanner;
 
class program34
{
    public int Addition(int iNo1, int iNo2)
    {
        int iAns=0;
        iAns=iNo1+iNo2;
        return iAns;

    }
    public static void main(String A[])
    {
        Scanner scanner = null;

        scanner = new Scanner(System.in);

        int ivalue1 = 0, ivalue2=0, iResult=0;
        
        System.out.println("Enter your name");
        ivalue1=scanner.nextInt;

        System.out.println("Enter your name");
        ivalue2=scanner.nextInt;

        iResult = Addition(ivalue1,ivalue2);            //Error

        System.out.println("result",+iResult);


        

    }
}