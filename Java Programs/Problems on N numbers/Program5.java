
import java.util.*;

//Option 2

 class Arithematic 
 {
    public int Brr[];
    
    public Arithematic(int A[])
    {
        this.Brr = A;
    }

     public int Addition()
     {
         int iCnt =0;
         int iSum =0;

         for(iCnt =0; iCnt < Brr.length; iCnt++)
         {
             iSum = iSum + Brr[iCnt];
         }
         return iSum;
     }
 }

class Program5

{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize =0;
       int iCnt =0,iRet = 0;

        System.out.println("Enter Number of elements :");
        iSize = sobj.nextInt();

         int Arr[] = new int[iSize];
        System.out.println("Enter Elements:");
        for(iCnt =0; iCnt < iSize; iCnt++)
        {
           Arr[iCnt] = sobj.nextInt();
        }

        Arithematic aobj = new Arithematic(Arr);
        iRet = aobj.Addition();
        System.out.println("Addition of Array Elements :"+iRet);

    }
}