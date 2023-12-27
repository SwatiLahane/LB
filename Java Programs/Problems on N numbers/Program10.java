

import java.util.*;

//option 2
//Dispaly Even Elements  

class Arithematic 
{
    public void EvenDisplay(int Brr[])
    {
        int iCnt = 0 ;
        
        System.out.println("Even Elements are :");

        for(iCnt = 0; iCnt < Brr.length; iCnt++)
        {  
          if(Brr[iCnt] % 2 == 0)
          {
            System.out.println(Brr[iCnt]+"\t");
          }
          
        }
        
    }
}

class Program10
{
   public static void main(String Args[])
   {

     Scanner sobj = new Scanner(System.in);
     Arithematic aobj = new Arithematic(); 
     int iSize = 0;
     int iCnt =0;

   System.out.println("Enter number of elements :");
   iSize = sobj.nextInt();
   
   int Arr[] = new int[iSize]; //memory allocation for elements of array
   System.out.println("Enter Elements :");

   for(iCnt =0; iCnt < iSize ; iCnt++)
   {
     Arr[iCnt] = sobj.nextInt();
   }
    
     aobj.EvenDisplay(Arr);
    
     sobj.close();
    }
}