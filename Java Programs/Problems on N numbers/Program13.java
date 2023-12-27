

//Display Odd Elements in An Array
 
import java.util.*;


class Arithematic 
{
    public int Brr[];

    public Arithematic(int A[])
    {
        this.Brr = A;
    }
    public void DisplayOdd()
    {
        int iCnt =0; 
        System.out.println("Odd Elements are:");
        for(iCnt =0; iCnt < Brr.length; iCnt++)
        {
           if(Brr[iCnt] % 2 != 0)
           {
            System.out.println(Brr[iCnt]+"\t");
           } 
          
        }
    }
}


class Program13

{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0;
        int iCnt = 0;

        System.out.println("Enter Number of elemnets:");
        iSize = sobj.nextInt();

        int Arr[] = new int[iSize]; 

        System.out.println("Enter Elements :");
        for(iCnt =0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        
        Arithematic aobj = new Arithematic(Arr); //constructor call
        aobj.DisplayOdd(); //function call

        sobj.close(); //free momery

    }
}