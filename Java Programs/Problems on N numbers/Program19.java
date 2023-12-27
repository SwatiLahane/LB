


//Smallest number (Minimum) Number 

import java.util.*;

class Arithematic
{

        public int Brr[];
    

        public Arithematic(int A[])
        {
            this.Brr = A;
        }

        public int Minimum()
        {
            int iCnt =0;
            int iMin = Brr[0];
            for(iCnt = 0; iCnt < Brr.length; iCnt++)
            {
               if(Brr[iCnt] < iMin)
               {
                   iMin = Brr[iCnt];
               }
            }
            return iMin;
        }
}


class Program19
{
    
    public static void main(String Args[])

    {
        Scanner sobj = new Scanner (System.in);
        
        int iSize =0;
        int iCnt = 0;
        int iRet = 0;

        System.out.println("Enter number of Array elements that u e=want to enter in an Array:");
        iSize = sobj.nextInt();
        

        int Arr[] = new int[iSize]; //Memory allocated for an array elemnts 

        System.out.println("Enetr Array Elements :");
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
       
        Arithematic aobj = new Arithematic(Arr); //When we create object of class constructor gets  called 
         iRet = aobj.Minimum(); //Function call
          
         System.out.println("Minimum Element in an Array:"+iRet);

    }
}