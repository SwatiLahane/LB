
//String in java Problems
import java.util.*;
import java.io.*;

class Program295
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);
       
       String str = "     Hello   world  Demo    ";//5 whitespace 5 letters

       System.out.println("Length of str is :"+str.length());
    
        str = str.trim();
        System.out.println("Length of str:"+str.length());
    }
}