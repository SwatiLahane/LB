

//Unpaking  Activity 

import java.util.*;
import java.io.*;


class Program291
{
   public static void main(String Arg[]) throws Exception
   {
       Scanner sobj = new Scanner(System.in);
       

        System.out.println("Enter the name of packed file that you want to unpack :");
        String PackedFile =  sobj.nextLine(); //expected file combine File ch name
         

       File fobj = new File(PackedFile);
      FileInputStream fiobj = new FileInputStream(fobj); 
      
      byte Header[] = new byte[100];

      fiobj.read(Header,0,100);
      
      String Hstr = new String(Header);

      System.out.println(Hstr);

      System.out.println("LEngth of header string is :"+Hstr.length());
      
   String str = Hstr.trim();//trim is used to remove extra white spaces
   System.out.println("Length of header string is :"+str.length());


   }
}
