

//write data into file


import java.util.*;
import java.io.*; //for file handling 


class Program273

{
 public static void main(String arg[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file :");
        String FileName = sobj.nextLine();
        
       
    try
    {
        
          System.out.println("Enter the data that u want to write in file");
          String Data = sobj.nextLine();
          
          FileOutputStream fobj = new FileOutputStream(FileName,true); //true parameter add kela mhnun Data override nai zala

          byte arr[] = Data.getBytes();

          fobj.write(arr);
          fobj.close();

        }
      
    
    catch(Exception obj)
    {
        System.out.println("Exception Occured");
    }
  }  
}