

import java.util.*;

//Display maxmin

class Arithematic 
{
    public int Brr[];

    public Arithematic(int A[])
    {
        this.Brr = A;
    }

    public void DisplayMaxMin()
    {
        int iCnt = 0;
        int  iMin = Brr[0];
        int  iMax = Brr[0];
        
        System.out.println("MAximum and minimum elements in An Array Are :");
        for(iCnt =0; iCnt < Brr.length; iCnt++)
        {
          if(Brr[iCnt] > iMax )
          {
             iMax = Brr[iCnt];
          }
          
          else if(Brr[iCnt] < iMin)
          {
              iMin = Brr[iCnt]; 
          }
          
        }
        System.out.println("Max Elemnet Are : "+iMax);
        System.out.println("Min Element Are :"+iMin);
    } 
    
    
    
}

class Program20
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iSize = 0;
        int iCnt =0 ;


        System.out.println("Enter number of elements u want to store:");
        iSize = sobj.nextInt();
         
        int Arr[]  = new int[iSize];
        System.out.println("Enter elements :");

        for(iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
        
        Arithematic aobj = new Arithematic(Arr); //When we create object of class Constructor gets  called 
            aobj.DisplayMaxMin();  //Fucnion call
    }
}