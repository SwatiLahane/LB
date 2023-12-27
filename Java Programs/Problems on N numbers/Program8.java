


import Marvellous.Arithematic;
import java.util.*;


class Program8
{
    Scanner sobj = new Scanner(System.in);
 
   int iSize =0;
   int iCnt=0,iRet =0;

  System.out.println("Enter the number of elements:");
   iSize = sobj.nextInt();

   int Arr[] = new int[iSize];
   
   System.out.println("Elements of the array are: ");

   for(iCnt  =0; iCnt < iSize; iCnt++)
   {
       System.out.println(Arr[iCnt]);
   }
    
   Arithematic aobj = new Arithematic(Arr);

    iRet = aobj.Addition(); 
    System.out.println("Addition of all the Array elements:"+iRet);

 }


}