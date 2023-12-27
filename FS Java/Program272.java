

//write data into file
//to write data into file there standard two classes 
//FileOutputStream to write the data into  file and FileInputStream to Read the DATA FROM FILE



import java.util.*;
import java.io.*; //for file handling 


class Program272

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
          
          FileOutputStream fobj = new FileOutputStream(FileName);

          byte arr[] = Data.getBytes(); //getBytes means converting string in byte array//string gets converted into byte array


          fobj.write(arr);
          fobj.close();

        }
      
    
    catch(Exception obj)
    {
        System.out.println("Exception Occured");
    }
  }  
}