

//Even Addition

import java.util.*;

class Arithematic 
{
    public int Brr[];

    public Arithematic( int A[])

    {
      this.Brr = A;

    }
    public int EvenAddition()
    {
       int iCnt =0;
       int EvenSum = 0;  
         
        //      1             2            3
       for(iCnt = 0; iCnt < Brr.length; iCnt++)
       {
           if(Brr[iCnt] % 2 == 0)   
           {
               EvenSum = Brr[iCnt] + EvenSum ; //4
           }
       }

       return EvenSum;
    }
}


class Program16
{
    public static void main(String Args[])
    {
       Scanner sobj = new Scanner(System.in);
      
       int iSize = 0;
       int iCnt = 0,iRet = 0;
       System.out.println("Enter Number of elements u want to entry in an Array:");
       iSize = sobj.nextInt();
       
       int Arr[]  = new int[iSize];

        System.out.println("Enter Elements :");
       for(iCnt =0 ; iCnt < iSize; iCnt++)
       {
           Arr[iCnt] = sobj. nextInt();
       }
         
         Arithematic aobj = new Arithematic(Arr);
         iRet = aobj.EvenAddition();

         System.out.println("Sum of Even Elements of Array:"+iRet);
         
    }
}