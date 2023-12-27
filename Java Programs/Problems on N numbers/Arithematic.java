
package Marvellous;

public class Arithematic

{
   public int Brr[];

   public Arithematic(int A[])
   {
         this.Brr = A;
   }
   
   public int Addition()
   {
       int iCnt =0;
       int iSum = 0;

       for(iCnt =0; iCnt < Brr.length; iCnt++)
       {
           iSum = iSum + Brr[iCnt];
       }
       return iSum;
   }

}