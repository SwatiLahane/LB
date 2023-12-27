

import java.util.*;
import java.io.*;

//Display file names count of files  and length of the file or size of Folder LB49

class Program280
{
    public static void main(String arg[]) throws Exception

    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the name of Directory:");
        String DirectoryName = sobj.nextLine();

        boolean bret = false;
        File fobj = new File(DirectoryName);

        bret = fobj.isDirectory();//directory means folder

        if(bret == true)
        {
            System.out.println("Directory is present");

            File Arr[] = fobj.listFiles(); //gives All the files list
            System.out.println("Number of files in the directory are :"+Arr.length);
        
           for(int i= 0; i < Arr.length; i++)
           {
               System.out.println(Arr[i].getName() + "File size :"+Arr[i].length());
           }
        }
        else
        {
            System.out.println("there is no such Directory ");
        }
    }
}