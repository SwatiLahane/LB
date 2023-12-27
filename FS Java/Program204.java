
import java.util.*;
import java.io.*;


class Program302
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

        System.out.println("Number of word in sentance are :"+words.length;

        for(int i=0; i < words.length; i++)
        {
            System.out.println(words[i]);
        }



    }
    
}  
       