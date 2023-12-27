

import java.util.*;
//Count Capital

class Arithematic 
{
     
      int CountCapital(String Str)
      {
          int iCnt =0;
          int iCount = 0;
          char Arr[] = Str.toCharArray();

          for(iCnt = 0; iCnt < Arr.length; iCnt++)
          {
               if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
             //  if((Arr[iCnt] >= 'A') && (Arr[iCnt] <= 'Z'))
              {
                 iCount++;
              }
          }
          return iCount; 
      }

}


class Program9
{

    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();

        String str = null;
        int iRet = 0;

        System.out.println("Enter String :");
        str =  sobj.nextLine();

        iRet = aobj.CountCapital(str);   
        System.out.println("Capital count are "+iRet); 

    }
}