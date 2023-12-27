
import java.util.*;
import java.io.*;


class Program305
{
    public static void main(String arg[])
    {

       Scanner sobj = new Scanner(System.in);
       
        System.out.println("Enter String :");
        String str = sobj.nextLine();

        str = str.trim();
        

        System.out.println("After trim:" +str);

        str = str.replaceAll("\\s+"," "); // \\s+ 2 witespaces asel 1 theva indicates  

        System.out.println("After replaceall :"+ str);
       
        String words[] = str.split(" ");

        System.out.println("Number of word in sentance are :"+words.length);

        for(String s : words) //foreach
        {
            System.out.println(s);
        }



    }
    
}  
       