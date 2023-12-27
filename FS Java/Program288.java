
import java.util.*; //for sccaner calss
import java.io.* ;// For file handling Fucntions



class Program288
{
    public static void main(String arg[])throws Exception
    {
        System.out.println("------------------------------------------------");
        System.out.println("---------- Marvellous Packer Unpacker ----------");
        System.out.println("------------------------------------------------");

        Scanner sobj = new Scanner(System.in);
        boolean bret = false;

        System.out.println("Enter the name of Directory which contains all the  files that you want to pack :"); //Existing folder
        String DirectoryName = sobj.nextLine();

        System.out.println("Enter name of packed file that u want to create : ");       
        String PackedFile = sobj.nextLine();

        File fobjPack = new File(PackedFile);

        bret =  fobjPack.createNewFile();
        if(bret == false)
        {
            System.out.println("Unable to create packed file");
            return;
        }

        System.out.println("Packed File gets created successfully in current directory: ");

        File fobj = new File(DirectoryName);

        bret = fobj.isDirectory();
        if(bret == true)
        {
           File Arr[] = fobj.listFiles();
           System.out.println("Number of files in the directory are :"+Arr.length);

           String Header = null;
           
           //To Write the data into packed file
           FileOutputStream fcombine = new FileOutputStream(PackedFile);

           int iRet = 0;

           byte Buffer[] = new byte[1024];

           System.out.println("Packing Activity Started....");

           //Trevel directory 

           for(int i=0; i < Arr.length; i++)
           {

              //To create header
              Header = Arr[i].getName() + " " + Arr[i].length();
              System.out.println("File Packed With the name : "+Arr[i].getName());

              //Add Extra white spaces at the end of Header

              for(int j= Header.length(); j < 100; j++)
              {
                  Header = Header + " ";
              }
             

              //Convert sring header into byte Array 
              byte hArr[] = Header.getBytes();

              //Write header into packed file
              fcombine.write(hArr, 0, 100);

              //To read the file from directory 

              FileInputStream fiobj = new FileInputStream(Arr[i]);

              //Write the data into packed file after Header

              while((iRet = fiobj.read(Buffer)) != -1)
              {
                  fcombine.write(Buffer , 0 ,iRet);

              }
              fiobj.close();
           }


              System.out.println("Packing Activity Completed :");
              System.out.println("Total file Packed Successfully: "+Arr.length);

              System.out.println("-------------------------------------------------------");
              System.out.println("Tank you for using Marvellous Packer And Unpacker ");
              System.out.println("-------------------------------------------------------");

        }

       else
       {
           System.out.println("There is no such directory ");
       }

    }


}