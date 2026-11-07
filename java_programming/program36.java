import java .util.Scanner;

class Arithmetic
{
    public  static int Addition(int iNo1, int iNo2)
    {
        int iAns=0;
        iAns=iNo1+iNo2;
        return iAns;

    }
    


}
 
class program36
{
    
    public static void main(String A[])
    {
        Scanner scanner = null;

        scanner = new Scanner(System.in);

        int ivalue1 = 0;int ivalue2=0; int iResult=0;
        
        System.out.println("Enter your name");
        ivalue1=scanner.nextInt;

        System.out.println("Enter your name");
        ivalue2=scanner.nextInt;

        iResult = Addition(ivalue1,ivalue2);       

        System.out.println("result",+iResult);
    }

        

    }