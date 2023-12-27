
import java.util.*;
//Claculate frequecy of 21

class Arithematic 
{
      public int Brr[];

      public Arithematic(int A[])
      {
          this.Brr = A;
        
      }
      public int Frequency()
      {
          int iCnt = 0;
          int icount = 0;
          for(iCnt = 0; iCnt < Brr.length; iCnt++)
          {
              if(Brr[iCnt] == 21)
              {
                icount++;
              }
          }
            return icount;
        }
}


class Program21
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt = 0;
        int iRet = 0;
        System.out.println("Enter Number of elements that u want to store :");
        iSize = sobj.nextInt();
        
        int Arr[] = new int[iSize]; 
        System.out.println("Enter Number of elements :");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
       
        Arithematic aobj = new Arithematic(Arr);
        iRet = aobj.Frequency();//Function call
        
        System.out.println("Frequency of 21 Are : "+iRet);

        sobj.close();
    }
}