
//check 7th bit is on or oFF

import java.util.*;

class Program6
    {
        
public static boolean CheckBit(int iNo)
   {
       int iMask = 256;
       int iResult = 0;
       
       iResult = iNo & iMask;

       if(iResult == iMask)
       {
           return true;
       }
       else
       {
           return false;
       }
   } 

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
         int iValue = 0;
          boolean bRte =false; 
         
         System.out.println("Enter Number:");
         iValue = sobj.nextInt();
         
         bRte = CheckBit(iValue);
          if(bRte == true)
          {
              System.out.println("9th bit is ON");
          } 
          else
          {
              System.out.println("9th Bit is OFF");
          }
    }
}