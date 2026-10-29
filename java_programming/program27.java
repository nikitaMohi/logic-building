import java .util.Scanner;
 
class program27
{
    public static void main(String A[])
    {
        Scanner scanner = null;
        String sName = null;
        int iAge = 0;
        float fMarks =0.0;                  // Error


        scanner= new Scanner(System.in);

        System.out.println("Enter your name");
        System.out.println("enter your age");
        System.out.println("Enter your marks");

         sName = scanner.next();
         iAge = scanner.nextInt();
         iMarks = scanner.nextFloat();
         

        System.out.println("Welcome:"+sName);
        System.out.ptintln("your age :"+iAge);
        System.out.println("your marks:"+iMarks);
        S

        

    }
}