
//String in java Problems
import java.util.*;
import java.io.*;

class Program294
{
    public static void main(String arg[])
    {
       Scanner sobj = new Scanner(System.in);
       
       String str = "     Hello     ";//5 whitespace 5 letters

       System.out.println("Length of str is :"+str.length());
    
        str = str.trim();
        System.out.println("Length of str:"+str.length());
    }
}