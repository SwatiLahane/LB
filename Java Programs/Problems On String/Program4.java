
import java.util.*;
//charAt method

class Program4
{
    
     public static void main(String Arg[])
     {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter your Name :");
        str = sobj.nextLine();
          
         int iCnt = 0;
         
         for(iCnt = 0; iCnt < str.length(); iCnt++)
         {
            
            System.out.println(str.charAt(iCnt));
         }


     }
}