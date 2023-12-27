

//problems On N number using Array 

import java.util.*;

class Program1
{

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0;
        int iCnt = 0;
        

        System.out.println("Enter the Elements That u want to store in an Array:");
        iSize = sobj.nextInt();
         
        int Arr[] = new int[iSize];

        System.out.println("Enter Elements :");
        
        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
           Arr[iCnt] = sobj.nextInt();
        }
        
        System.out.println("Elements of Array are :");
        {
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                System.out.println(Arr[iCnt]);
            }

            sobj.close();
        }
       

    }
}
