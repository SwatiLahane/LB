
//Even Display 
//Option 4

import java.util.*;

class Program11
{   
    public static void EvenDispaly(int Brr[])
    {
        int iCnt =0;

        System.out.println("Even Eleemnts of Array :");

        for(iCnt =0; iCnt < Brr.length; iCnt++)
        { 
            if(Brr[iCnt] % 2 == 0 )
            {
                System.out.print(Brr[iCnt]+"\t");
            }

        }  
        
    }

    public static void main(String Args[])
    { 
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt =0 ;

        System.out.println("Enter number of elements that u want to enter : ");
        iSize = sobj.nextInt();
         
        int Arr[] = new int[iSize];

        System.out.println("Enter Elements :");

        for(iCnt =0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
         
        EvenDispaly(Arr);
        sobj.close();
    }
    
        
}