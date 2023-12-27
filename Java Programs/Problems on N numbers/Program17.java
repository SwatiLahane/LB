

//Odd Addition
import java.util.*;


class Arithematic 
{
    public int Brr[];

    public Arithematic( int A[])

    {
      this.Brr = A;

    }
    public int OddAddition()
    {
       int iCnt =0;
       int OddSum = 0;  
         
        //      1             2            3
       for(iCnt = 0; iCnt < Brr.length; iCnt++)
       {
           if(Brr[iCnt] % 2 != 0)   
           {
               OddSum = Brr[iCnt] + OddSum ; //4
           }
       }

       return OddSum;
    }
}


class Program17
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize =0;
        int iCnt =0, iRet = 0;

        System.out.println("Enter Number of elements you want to enter in an Array:");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize];

        System.out.println("Enter Elements :");
        for(iCnt = 0; iCnt < iSize ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        
        //when we create the object of class constructor gets called
        Arithematic aobj = new Arithematic(Arr); //constructor call
        iRet = aobj.OddAddition();
        
        System.out.println("Sum of Odd Elements are:"+iRet);
    
        
    }
}

