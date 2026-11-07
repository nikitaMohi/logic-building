import java .util.Scanner;
//Approch 3

 
class program39
{
    
    public static void main(String A[])
    {
        Scanner scanner = null;
        Arithmetic  arithmetic = null;

        scanner = new Scanner(System.in);

        int ivalue1 = 0;int ivalue2=0; int iResult=0;
        
        System.out.println("Enter your namber");
        ivalue1=scanner.nextInt();

        System.out.println("Enter your namber");
        ivalue2=scanner.nextInt();

        arithmetic = new Arithmetic();


        iResult = arithmetic. Addition(ivalue1,ivalue2);       

        System.out.println("Addition is:"+iResult);
    }

    }
    class Arithmetic
{
    public  int Addition(int iNo1, int iNo2)
    {
        int iAns=0;
        iAns=iNo1+iNo2;
        return iAns;

    }

}

