
import java.util.*;
import java.io.*; //for file handling 

//to display the existing file information
class Program270

{
 public static void main(String arg[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file :");
        String FileName = sobj.nextLine();
         
    try
    {
        File fobj = new File(FileName);
        
        boolean bret = false;

        bret = fobj.exists();
        if(bret) //if (bret == true)
        {  
           
           System.out.println("Name of file is :"+fobj.getName());
           System.out.println("Absolute path of fiel is :"+fobj.getAbsolutePath());
           System.out.println("file size is  :"+fobj.length()); 
           System.out.println("We can read from file :"+fobj.canRead());
           System.out.println("We can write from file :"+fobj.canWrite());
        }
      }
    
    catch(Exception obj)
    {
        System.out.println("Exception Occured");
    }
  }  
}