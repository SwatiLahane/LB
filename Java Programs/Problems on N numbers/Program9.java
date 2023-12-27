
//option 1

//Display Even 
import java.util.*;

class Arithematic 
{
    public int Brr[];

    public Arithematic(int A[])
    {
        this.Brr = A;
    }

    public void EvenDisplay()
    {
       int iResult = 0;
       int iCnt = 0;
       
       System.out.println("Even Elements Are :");

       for(iCnt =0; iCnt < Brr.length; iCnt++)
       {
           
          if(Brr[iCnt] %  2 == 0)
          {   
            System.out.print(Brr[iCnt]+"\t");
              
          }
         
       }
    }
}

class Program9
{
   public static void main(String Args[])
   {

     Scanner sobj = new Scanner(System.in);
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
    
   //When we create object of class constructor gets called
   Arithematic aobj = new Arithematic(Arr); //constructor call 
     aobj.EvenDisplay();
    
     sobj.close();
    }
   

}