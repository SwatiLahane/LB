
//input :5
//output // 1  #  2  #  3  #  4  #  5  #

import java.util.*;

class  Arithematic 
{  
    public int iNo;

    public Arithematic(int A)
    {
        this.iNo = A;
        
    }    
     public void Display()
     {
         int iCnt = 0;
         for(iCnt =1; iCnt <= iNo; iCnt++)
         {
             System.out.print(iCnt+"\t"+"#\t");
         }
         System.out.println();
     }

    }



class Program4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);
         aobj.Display(); //function call
        
         sobj.close();

    }
}