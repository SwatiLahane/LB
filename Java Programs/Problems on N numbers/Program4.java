
// 


import java.util.*;

//option 1


class Program4
{  
 
   public static int Addition(int Brr[])
   {    
       int iSum =0;
        int iCnt = 0;
        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {
          iSum = iSum + Brr[iCnt];
        }
        return iSum;
   }

   public static void main(String Args[])
   {
       Scanner sobj = new Scanner(System.in);
       int iSize = 0;
       int iCnt = 0,iRet =0;
       
       System.out.println("Enter the Number of elements you want to enter :");
       iSize = sobj.nextInt();

       int Arr[] = new int[iSize];
       
       System.out.println("Enter Elements :");
       for(iCnt =0; iCnt < iSize; iCnt++)
       {
           Arr[iCnt] = sobj.nextInt();
       }
    
       iRet = Addition(Arr); //Function call
       System.out.println("Addition of Array elements is :"+iRet);
   }

}