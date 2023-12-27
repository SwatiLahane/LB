
//MAximum number /largest number 

import java.util.*;


class Arithematic 
{
      public int Brr[];


      public Arithematic(int A[])
      {
          this.Brr = A;
      }
     
      public int Maximum()
      {
          int iCnt = 0;
          int iMax = Brr[0];
          
          for(iCnt =0; iCnt < Brr.length; iCnt++)
          {
              if (Brr[iCnt] > iMax )
              {
                 iMax = Brr[iCnt];
              }
          }
          
          return iMax;
       
      }
}
class Program18
{   


    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt = 0;
        int iRet = 0;
        System.out.println("Enter number of eleemnts that u want to enter in an Array :");
        iSize = sobj.nextInt();

        int Arr[]  = new int[iSize]; //Memory allocation for an Array eleements

        System.out.println("Enter Array eleemts :");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        
        }

        Arithematic aobj = new Arithematic(Arr); //When we create object of clss constructor gets called  
        iRet = aobj.Maximum(); //constructor all
        
        System.out.println("Largest number are :"+iRet);
        

    }
}