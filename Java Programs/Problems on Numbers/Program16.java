

import java.util.*;

class Arithematic 
{
     public float iNo;

     public Arithematic(float A)
     {
         this.iNo = A;
     }

     public float CalculateArea()
     {
         float fResult = 0.0f;
         float PI = 3.14f ; //Constant 

         fResult = PI * iNo * iNo;
         
        return fResult;
     }
}

class Program16
{
    public static void main(String args[])  throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        
        float iValue = 0.0f;
        float fRet = 0.0f;
         
        try
        {
            
        System.out.println("Enter Radius :");
        iValue = sobj.nextInt();
         
        Arithematic aobj = new Arithematic(iValue);
         fRet = aobj.CalculateArea();
         
         System.out.println("Area of circle are :"+fRet);
     
        }
       catch(InputMismatchException obj )
       {
           System.out.println("Exception occured");
       }
    }
}