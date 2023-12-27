
//input :10
//output // 1    2    3    4    5   6  7  8  9  10 
//Problems on patterns 

import java.util.*;


class Program1
{    
    public static void Display(int iNo)
    {
          int iCnt = 0;
          for(iCnt = 1; iCnt <= iNo; iCnt++)
          {
              System.out.print(iCnt+"\t"+"*\t");
          }
          System.out.println();
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in); 
        
        int iValue = 0;
        System.out.println("Enter Number :");
        iValue = sobj.nextInt();
      
        Display(iValue); //Function call
    }
}


