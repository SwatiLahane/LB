



import java.util.*;

class Program2
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0;
        int iCnt =0;
       

        System.out.println("Enter Number of Elements :");
        iSize = sobj.nextInt();
        
        int Arr[] = new int[iSize];
        System.out.println("Enter Elements :");

         for(iCnt =0; iCnt < iSize; iCnt++)
         {
             Arr[iCnt] = sobj.nextInt();
         }
       
         System.out.println("Elements of Aaaray Are :");
         for(iCnt =0; iCnt < iSize; iCnt ++)
         {
             System.out.print(Arr[iCnt]+"\t"); //it will print out put on one line here we use only print
         }
         
         System.out.println();
         sobj.close();
    }
}