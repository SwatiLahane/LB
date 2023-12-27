


import java.util.*;


class Program3
{  
    public static void Display(int Brr[])
    {
        
    int iCnt = 0;
    
    System.out.println("Your Enterd elements are :");
    for(iCnt = 0; iCnt < Brr.length; iCnt++)
    {
     System.out.print(Brr[iCnt]+"\t");

    }
    
    System.out.println();
}   


    public static void main(String Args[])

    {
        Scanner sobj = new Scanner(System.in);
        int iSize =0;
        int iCnt =0;
       
        System.out.println("Enter number of elements that u want to enter:");
        iSize = sobj.nextInt();
        int Arr[]  = new int[iSize];

        System.out.println("Enter Elements:");
        for(iCnt =0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        Display(Arr);
       
        sobj.close();
    }
}