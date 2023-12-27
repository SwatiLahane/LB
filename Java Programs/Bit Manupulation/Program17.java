//Check 10th and 12th bit is on or off

import java.util.*;

class Program17

{
    public static boolean CheckBit(int iNo)
    {
        int iMask =  0X00000a00;
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
            System.out.println("10th and 12th bit  is ON");
        }
        else
        {
            System.out.println(" Bits are OFF");
        }
        
    }
}


/*
//Bit Positon 10 and 12  //Binary of 10 is 1010

0000  0000  0000  0000  0000  1010  0000   0000
0     0     0     0     0     a     0      0       

//0X00000a00
//here 1010 , addition is 8+4 = 10 thats why we use 10 in hexadecimal a  

*/