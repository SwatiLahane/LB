//Factorial of number option 5

import java.util.*;

class Arithematic 
{
    public int iValue;
    
    public Arithematic(int A)
    {
        this.iValue = A;
    }

    public int Factorial()
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

class Program13
{
    public static void main(String Args[])
    {
       
        Scanner sobj = new Scanner(System.in);
        
    
        int iNo =0;
        int iRet=0;
        
        System.out.println("Enter The Number :");
        iNo = sobj.nextInt();
         
        Arithematic aobj = new Arithematic(iNo); 
         iRet = aobj.Factorial();
         
        System.out.println("Factorial is :"+iRet);
    
       }
    
    }
