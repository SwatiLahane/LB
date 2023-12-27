
//using option 2

import java.util.*;

class Program3
{   
    public static void Display(String str)
    {
        
        System.out.println("Your name is "+str);
    
    }

    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;

        System.out.println("Enter your name :");
        str = sobj.nextLine();

        Display(str);
        sobj.close();
    }
}








