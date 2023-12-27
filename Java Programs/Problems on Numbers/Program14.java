import Marvellous1.Arithematic1;

import java.util.*;

class Program14
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