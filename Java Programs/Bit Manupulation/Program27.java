

//Check bit 

import java.util.*;

class Program27
{
   public static boolean CheckBit(int iNo , int iPos)
   {
       int iMask = 0X00000001;
       int iResult = 0;
       iMask = iMask << (iPos -1);

       iResult = iMask & iNo;

       if(iResult == iMask)
       {  
           return true;
       }
       else
       {
           return false;
       }
       
   }
   public static void main(String Args[])
   {
       Scanner sobj = new Scanner(System.in);
       int iNo = 0;
       int iPos = 0;
       boolean iRet = false;

       System.out.println("Enter Number :");
       iNo = sobj.nextInt();

       System.out.println("Enter position:");
       iPos = sobj.nextInt();

       iRet = CheckBit(iNo , iPos);
       //System.out.println("Updated String is :"+iRet); 

       if(iRet == true)
       {
           System.out.println("Bit is ON at the given position");
       }
       else
       {
           System.out.println("Bit is OFF at the given position");
       }
    }

}