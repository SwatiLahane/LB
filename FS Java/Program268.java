
import java.util.*;
import java.io.*; //for file handling 

//Accept the File name 
class Program268

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

        bret = fobj.createNewFile();

        if(bret == true)
        {
            System.out.println("File gets Successfully created...");

        }
        else
        {
            System.out.println("Unable to create file..");
        }

    }
    catch(IOException obj) //specific exception
    {
        System.out.println("Exception Occured");
    }
    catch(Exception obj) //generic exception
    {
        System.out.println("Exception Occured");
    }
  }  
}