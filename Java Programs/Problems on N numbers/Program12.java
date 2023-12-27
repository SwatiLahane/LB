
//Even Count 
//

import java.util.*;

class Arithematic
{

      public int Brr[];

      public Arithematic(int A[])
      {
          this.Brr = A;
      }

      public int EvenCount()
      {
          int iCnt =0;
          int iCount = 0; 

          for(iCnt =0; iCnt < Brr.length; iCnt++)
          {
             if(Brr[iCnt] % 2 == 0)
             {
                 iCount ++;
             }

          }

          return iCount;
      }
}


class Program12
{  

    public static void main(String Args[])
    { 
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt =0 ;
        int iRet = 0;

        System.out.println("Enter number of elements that u want to enter : ");
        iSize = sobj.nextInt();
         
        int Arr[] = new int[iSize];

        System.out.println("Enter Elements :");

        for(iCnt =0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
         Arithematic aobj = new Arithematic(Arr);
        iRet = aobj.EvenCount();
        System.out.println("Even Count Are :"+iRet);
        sobj.close();
    }
    
        
}