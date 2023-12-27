

////input :5
//output // 1  #  2  #  3  #  4  #  5  #
//option 2

import java.io.*;

class Arithematic 
{
    public static void Display(int iNo)
    {
        int iCnt = 0;
        for(iCnt =1; iCnt <= iNo; iCnt++)
        {
            System.out.print(iCnt+"\t"+"#\t");
        }
        System.out.println();
    }
}

class Program5
{
    public static void main(String arg[])
    {
       BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
       Arithematic aobj = new Arithematic();   
        int iValue = 0;
        
        try
        {
        System.out.println("Enter Number :");
        iValue = Integer.parseInt(bobj.readLine());
   
         
        aobj.Display(iValue);//function call
        //aobj.close();

        }

        catch(Exception obj)
        {
            System.out.println("Exception occured");
        }
    

    }
}

