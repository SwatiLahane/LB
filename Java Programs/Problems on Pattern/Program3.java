
//printline
//Input 
//Output :-4 -3 -2 -1 0 4 3 2 1

import java.util.*;

class Program3
{   
    public static void Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt =-4 ; iCnt <=iNo; iCnt++)
        {
            System.out.print(iCnt +"\t");
        }
        System.out.println();
    } 
     
    //Entry point method from where execution get starts

    public static void main(String arg[])
     {
         Scanner sobj = new Scanner(System.in);

         int iValue = 0;
         System.out.println("Enter number :");
         iValue = sobj.nextInt();

          Display(iValue);//function call
     }

}