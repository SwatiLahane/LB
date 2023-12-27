

import java.util.*;
//Accept one another number and Claculate frequecy of that number 

class Arithematic 
{
      public int Brr[];
      public int iNo ;

      public Arithematic(int A[], int B)
      { 
          this.Brr = A;
          this.iNo = B;
      }

      public int Frequency()
      {
          int iCnt = 0;
          int iFrequency = 0;
          for(iCnt = 0; iCnt < Brr.length; iCnt++)
          {
              if(Brr[iCnt] == iNo)
              {
                iFrequency++;
              }
          }
            return iFrequency;
        }
}


class Program22
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt = 0;
        int iRet = 0,iValue = 0 ;
        System.out.println("Enter Number of elements that u want to store :");
        iSize = sobj.nextInt();
        
        int Arr[] = new int[iSize]; 
        System.out.println("Enter Number of elements :");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        
        System.out.println("Enter element that u want to search :");
        iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(Arr,iValue);
        iRet = aobj.Frequency();//Function call
        
        System.out.println("Frequency of No Are : "+iRet);

        sobj.close();
    }
}