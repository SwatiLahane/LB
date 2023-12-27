

//check 3rd bit using Hexadecimal number

import java.util.*;

class Program11

{
    public static boolean CheckBit(int iNo)
    {
        int iMask = 0X00000004;
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
            System.out.println("3rd is ON");
        }
        else
        {
            System.out.println(" 3rd bit are OFF");
        }
        
    }
}

/*
    iMask = 4;

    0000    0000    0000    0000    0000    0000    0000    0100
    0       0       0       0       0       0       0       4

    0X00000004

    using Hexadecimal Number
*/