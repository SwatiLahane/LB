//By using concept of package
//Addition of two number 

import java.util.*;


class Arithematic
{
      int Addition(int iNo1, int iNo2)
      {   
          int iResult = iNo1 + iNo2;
          return iResult;
      }
}


class  Program6
{    

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();
        int iValue1 = 0;
        int iValue2 = 0,iRet = 0;
        
        System.out.println("Enter First Number:");
        iValue1 = sobj.nextInt();

        System.out.println("Enter Second Number:");
        iValue2 = sobj.nextInt(); 

        iRet = aobj.Addition(iValue1,iValue2);
        System.out.println("Addition is :"+iRet);
         
    }
} 