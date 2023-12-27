
//read data from file


import java.util.*;
import java.io.*; //for file handling 


class Program274

{
 public static void main(String arg[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);
          
        System.out.println("Enter the name of file :");
        String FileName = sobj.nextLine();
        
       
    try
    {
        
               
      FileInputStream fobj = new FileInputStream(FileName);
          
        
         int b = fobj.read(); //one letter read karto
         System.out.println((char)b);

          fobj.close();

    }
      
    
    catch(Exception obj)
    {
        System.out.println("Exception Occured");
    }
  }  
}