
//Accept number from user And Off 4th bit OFF that number and return number
//but the bit should be on

import java.util.*;


class Program19

{  
   public static int offBit(int iNo)
   {
         int iMask = 0X00000400;
         int iResult =0;
         
         iResult = iNo & iMask; //to check on ahe ka 
         if(iResult == iMask)
         {
             return (iNo ^ iMask); //11th bit is On
         }
         else
         {
             return iNo; //11th Bit is OFF
         }

   }      

   public static void main(String arg[])
   {
       Scanner sobj = new Scanner(System.in);
       int iNo = 0;
       int iRet =0;
       
       System.out.println("Enter Number :");
       iNo = sobj.nextInt();
      
       iRet = offBit(iNo);

       System.out.println("Updated Number is "+iRet);

   }
}
//iNo = 889
/*

    No  = 889

    Input :      1   1   0   1   1   1   1   0   0   1   
    Mask         0   0   0   0   0   0   1   0   0   0      ^
    ------------------------------------------------------------
    Result       1   1   0   1   1   1   0   0   0   1




    No = 98

    Input :     1   1   0   0   0   1   0 
    Mask        0   0   0   1   0   0   0                   ^
    ------------------------------------------------------------
    Result      1   1   0   1   0   1   0


*/