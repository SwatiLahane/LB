
import java.util.*;
import java.io.*;


class Program300
{
    public static void main(String arg[])
    {

       Scanner sobj = new Scanner(System.in);
       
        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str = str.trim();
        

        System.out.println("After trim:" +str);

        str = str.replaceAll("\\s",""); // \\s indicates 

        System.out.println("After replaceall :"+ str);

    }
    
}  
       