

////Accept Number and display below Pattern
//Input : 4
//Output: 4  3  2  1
//Time complexity : N


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
         for(iCnt =iNo; iCnt >= 1; iCnt--)
         {
             System.out.print(iCnt+"\t");
         }
         System.out.println();
     }

    }



class Program6
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