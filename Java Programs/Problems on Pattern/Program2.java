
import java.util.*;

//Lenear pattern

//input :10
//output // 1    2    3    4    5   6  7  8  9  10 
//Option 2
class Arithematic
{
    public void Display(int iNo)
    {
      int iCnt = 0;
      for(iCnt = 1; iCnt <= iNo; iCnt++)
      {
          System.out.print(iCnt+"\t"+"*\t");
      }
      System.out.println();
    }

}


class Program2
{
    
   public static void main(String arg[])
   {
       Scanner sobj = new Scanner(System.in);
       Arithematic aobj = new Arithematic();
       int iValue = 0;
       

       System.out.println("Enter Number :");
       iValue = sobj.nextInt();
       
       aobj.Display(iValue);

   }
}