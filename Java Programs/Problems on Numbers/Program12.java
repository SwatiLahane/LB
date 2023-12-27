
import java.util.*;

//Factorial of Number option 4

class Arithematic
{
   public int Factorial(int iValue)
   {   
       int iFact = 1;
       int iCnt = 0;
       
       for(iCnt = 1; iCnt <= iValue; iCnt++)
       { 
         iFact  = iFact * iCnt;
        
       }
       return iFact;
   }
  
        
}

class Program12
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();
    
        int iNo =0;
        int iRet=0;
        
        System.out.println("Enter The Number :");
        iNo = sobj.nextInt();
         
        iRet = aobj.Factorial(iNo);
    
        System.out.println("Factorial is :"+iRet);
    
       
       }
    
    }

