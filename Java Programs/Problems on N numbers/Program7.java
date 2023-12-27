


import java.io.*;


class Program7
{   
     public static int Addition(int Brr[])
     {
         int iCnt =0; 
         int iSum = 0;

         for(iCnt=0; iCnt < Brr.length; iCnt++)
         {
             iSum = iSum + Brr[iCnt];
         }
         return iSum;
     }

    public static void main(String Args[])
    {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int iSize = 0;
        int iCnt = 0,iRet =0;
         
        try
        {
            
        System.out.println("Enter the elements u want to store in an arrray:");
        iSize = Integer.parseInt(bobj.readLine());
        
        int Arr[] = new int[iSize];

        System.out.println("Enter Number of elements:");
         for(iCnt =0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = Integer.parseInt(bobj.readLine());
        }
         
            iRet = Addition(Arr);
            System.out.println("Addition of all the Array elements:"+iRet);
            bobj.close();

      }
      catch(Exception eobj)
      {
         System.out.println("Exception Occured");
      }

    }
}