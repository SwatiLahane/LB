
//Accept two numbers from user and perform addition of that numbers display result

import java.util.*;


class Program2
{

    public static void main(String Args[])
    {

        Scanner sobj = new Scanner(System.in);
        int iNo1 = 0;
        int iNo2 = 0;
        int iResult = 0;
         
        System.out.println("Enter First Number :");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number :");
        iNo2 = sobj.nextInt();

        iResult = iNo1 + iNo2;
        
        System.out.println("Addition of Two Numbers :"+iResult);


    }
}