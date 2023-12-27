

import java.util.*;
import java.io.*;


class Program278
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
        }
        else
        {
            System.out.println("there is no such Directory ");
        }
    }
}