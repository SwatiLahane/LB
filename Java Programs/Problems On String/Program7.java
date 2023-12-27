
//count String length

import java.util.*;

class Program7
{   
    public static int strlenX(String str)
    {  
        int icnt = 0;
        int iCount = 0;
        char Arr[] = str.toCharArray();
        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            iCount++;
        }

        return iCount;
    }

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;
        int iRet =0;

        System.out.println("Enter your name :");
        str  = sobj.nextLine();
  
        iRet = strlenX(str);
        
        System.out.println("Lenght of string is :"+iRet);
        

    }
}

