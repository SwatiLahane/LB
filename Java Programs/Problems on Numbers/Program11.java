//Factorial option 3 

import java.util.*;

class Program11
{
    public static int Factorial(int iValue)
    {    
        int icnt =0;
        int iFact =1;

        for(icnt =1; icnt <= iValue; icnt++)
        {
            iFact = iFact * icnt;
        }
        return iFact;

    }
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo =0;
        int iRet=0;
        
        System.out.println("Enter The Number :");
        iNo = sobj.nextInt();
         
        iRet = Factorial(iNo);

        System.out.println("Factorial is :"+iRet);

       
                
    }
}
