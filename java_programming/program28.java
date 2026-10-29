import java .util.Scanner;
 
class program28
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks =0.0f;                 


        scanner= new Scanner(System.in);

        System.out.println("Enter your name");
        System.out.println("enter your age");
        System.out.println("Enter your marks");

         sName = scanner.next();  //Exception
         iAge = scanner.nextInt();
         fMarks = scanner.nextFloat();
         

        System.out.println("Welcome:"+sName);
        System.out.println("your age :"+iAge);
        System.out.println("your marks:"+fMarks);
        

        

    }
}
