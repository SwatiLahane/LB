
//Non linear pattern
////Input : 4 4
 //Output : 
  /*
    *   *   *   *   
    *   *   *   *   
    *   *   *   *     
    *   *   *   *              
*/

import java.util.*;

class Arithematic
{
      public int iNo1;
      public int iNo2;

      public Arithematic(int A , int B)
      {
          this.iNo1 = A;
          this.iNo2  = B;


      }
      public void Display()
      {       
          int iCnt1 =0;
          int iCnt2 = 0;
           for(iCnt1 = 1; iCnt1 <= iNo1; iCnt1++)
           {
               for(iCnt2 = 1; iCnt2 <= iNo2; iCnt2++)
               {
                   System.out.print("*"+"\t");
               }
               System.out.println();
           }
      }
}

class Program13
{

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number of rows :");
        int iValue1 = sobj.nextInt();

        System.out.println("Enter Number of colm :");
        int iValue2 = sobj.nextInt();


        Arithematic aobj = new Arithematic(iValue1, iValue2);
        aobj.Display();

    }
}
