

//Count Odd 
import java.util.*;

class Arithematic
{

    public int Brr[];

    public Arithematic(int A[])
    {
        this.Brr = A;
    }

    public int OddCount()
    {
        int iCnt = 0;
        int OddCnt = 0; 
        

          //1             2              3
        for(iCnt =0; iCnt < Brr.length; iCnt++)
        {
            if(Brr[iCnt] % 2 != 0)
            {
              OddCnt++;
            }
        }
         return OddCnt;
        
    }
   
}



class Program15
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int  iSize = 0;
        int iCnt = 0,  iRet = 0;
        System.out.println("Enter number of eleemnts :");
        iSize = sobj.nextInt();
        
        int Arr[]  = new int[iSize];
        
        System.out.println("Enter the Elements:");
        for(iCnt =0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        
        Arithematic aobj = new Arithematic(Arr); //constructor call
        iRet = aobj.OddCount(); //method call

        System.out.println("Count of Odd Elements :"+iRet);
    }
}

