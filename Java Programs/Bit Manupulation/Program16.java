//Check 17th bit is on or off

import java.util.*;

class Program16

{
    public static boolean CheckBit(int iNo)
    {
        int iMask =  0x00004040;
        int iResult = 0;

        iResult = iNo & iMask;

        if(iResult == iMask )
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
        int iValue =0;
        boolean bRet =false;

        System.out.println("Enter Number:");
        iValue = sobj.nextInt();
       

        bRet = CheckBit(iValue);
        
        if(bRet == true)
        {
            System.out.println("7th and 15th bit  is ON");
        }
        else
        {
            System.out.println(" Bits are OFF");
        }
        
    }
}


/*
  
iMask = 65532
    Bit position 7 and 15

    0000    0000    0000    0000    0100    0000    0100    0000
    0       0       0       0       4       0       4       0

    0x00004040
    
*/