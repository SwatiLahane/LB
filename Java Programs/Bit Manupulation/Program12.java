

//check 9th  bit is on using Hexadecimal number

import java.util.*;

class Program12

{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00000100;
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
            System.out.println("9th bit  is ON");
        }
        else
        {
            System.out.println(" 9th is are OFF");
        }
        
    }
}

/*
    iMask = 256;

    0000    0000    0000    0000    0000    0001    0000    0000
    0       0       0       0       0       1       0       0

    0x00000100

    Note: 1 ka karan tya nible madhli fakt 1st bit chalu ahe (2)^0 mhnje 1
*/