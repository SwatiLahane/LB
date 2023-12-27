
//Accept two numbers from user and perform addition of that numbers display result

import java.util.*;


class Program2
{
    public static int Addition(int iNo1, int iNo2)
    {
            int iResult = 0;
            iResult = iNo1 + iNo2;
            
            return iResult;
    }

    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0;
        int iValue2 = 0;
        int iRet = 0;
         
        System.out.println("Enter First Number :");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Second Number :");
        iValue2 = sobj.nextInt();

        iRet = Addition(iValue1, iValue2); //Fucntion call
        
        System.out.println("Addition of Two Numbers :"+iRet);


    }
}