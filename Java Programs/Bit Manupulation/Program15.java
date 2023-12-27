

//check 17th  bit is on or OFF using Hexadecimal number

import java.util.*;

class Program15

{
    public static boolean CheckBit(int iNo)
    {
        int iMask =  0x00010000;
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
            System.out.println("17th bit  is ON");
        }
        else
        {
            System.out.println(" 17th is are OFF");
        }
        
    }
}

/* 
    iMask = 35536;

    0000    0000    0000    0001    0000    0000    0000    0000
    0       0       0          1       0      0      0        0

    0x00010000
    
    bit 17th
    Note: 1 ka karan tya nible madhli fakt last bit chalu ahe (2)^0 mhnje 1
*/