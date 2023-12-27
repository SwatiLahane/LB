//Factorial option 2 using bufferd class 

import java.io.*;

class Program10
{

    public static void main(String Args[])
    {
    
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int iNo =0;
        int icnt = 0,iRet=0;
        int iFact =1;
        
        try
        {
        System.out.println("Enter The Number :");
        iNo = Integer.parseInt(bobj.readLine());
        
        
        for(icnt =1; icnt <= iNo; icnt++)
        {
            iFact = iFact * icnt;
        }
        
        System.out.println("Factorial is :"+iFact);
         bobj.close();  
      }
      catch(Exception eobj)
      {
        System.out.println("Exception Occured");
      }
    }
}
