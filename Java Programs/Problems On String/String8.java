
//Option two

import java.util.*;


class Arithematic 
{
        
    int strlenX(String Str)
    {   
        int iCount = 0;
        int iCnt = 0;
        char Arr[] = Str.toCharArray();

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            iCount++;
        }
        
        return iCount;
    }
        
}


class String8
{

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();

        String str = null;
        int iRet =0 ;

        System.out.println("Enter String :");
        str = sobj.nextLine();

         iRet = aobj.strlenX(str);
         System.out.println("length of String is :"+iRet);


    }
} 



