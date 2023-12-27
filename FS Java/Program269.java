
import java.util.*;
import java.io.*; //for file handling 

//checking file is there or not
class Program269

{

    public static void main(String arg[])throws Exception
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the name of file :");
        String FileName = sobj.nextLine();
         
    try
    {
    //the object of file contains all the info about file ,like file name,file path size of file,can we red the from file 

        File fobj = new File(FileName);
        
        boolean bret = false;

        bret = fobj.exists();
        if(bret == true)
        {
            System.out.println("File is Present");
        }
        else
        {
            System.out.println("There is no such file");
        }
      }
    
    catch(Exception obj)
    {
        System.out.println("Exception Occured");
    }
  }  
}