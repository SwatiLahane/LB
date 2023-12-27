
//Addition of two number
//By Accepting input by using buffered class 
import java.io.*;

class Program3
{
    public static void main(String Args[]) throws Exception
    {
      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
      
      int iNo1 =0, iNo2 = 0;
      int iAns = 0;

      System.out.println("Enter First Number  :");
      iNo1 = Integer.parseInt(bobj.readLine());
      
      System.out.println("Enter First Number  :");
      iNo2 = Integer.parseInt(bobj.readLine());
      
      iAns = iNo1 + iNo2;

      System.out.println("Addition of two numbers is :"+iAns);

  }

}