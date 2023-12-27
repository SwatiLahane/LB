
//option 2
//Display Odd Elements in An Array
 
import java.io.*; 


class Program14

{   
    public static void DisplayOdd(int Brr[])
    {
        int iCnt =0;
        System.out.println("Odd Elements:");
        for(iCnt =0; iCnt < Brr.length; iCnt++)
        {
           if(Brr[iCnt] % 2 != 0 )
           {
               System.out.println(Brr[iCnt]+"\t");
           }
        }
    }
    public static void main(String Args[])
    {
       BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

        int iSize = 0;
        int iCnt = 0;
        
        try
        {
            
        System.out.println("Enter Number of elemnets:");
        iSize = Integer.parseInt(bobj.readLine());


        int Arr[] = new int[iSize]; 

        System.out.println("Enter Elements :");
        for(iCnt =0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = Integer.parseInt(bobj.readLine());
        }
        
       
        DisplayOdd(Arr); //function call

        bobj.close(); //free momery
      
     }

     catch(Exception eobj)
     {
         System.out.println("Exception Occured");
     }
    }
}