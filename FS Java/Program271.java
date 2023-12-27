

//write data into file


import java.util.*;
import java.io.*; //for file handling 


class Program271

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

          FileWriter fwobj = new FileWriter(FileName);
          fwobj.write(Data);
          fwobj.close();

        }
      
    
    catch(Exception obj)
    {
        System.out.println("Exception Occured");
    }
  }  
}