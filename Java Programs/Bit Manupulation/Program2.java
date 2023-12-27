

import java.util.*;


class Program2
{
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in) ;
        int iNo =0;
        int iDigit = 0;  
        int icnt =0;

        System.out.println("Enter Number :");
        iNo = sobj.nextInt();
         
        while(iNo != 0)
        {
            iDigit = iNo % 2;
            iNo = iNo /2; 

            if(iDigit == 1)
            {
               icnt++;
            }
           
        }  
        
        System.out.println("Number of bits are :"+icnt);
    }
}