

//Input :6
 //Output : a b c d e f 
   
 import java.io.*;

 class Arithematic 
 {
       public void Display(int iNo)
       {
           int iCnt =0;
           char ch = 'a';
           for(iCnt = 1, ch ='a'; iCnt <= iNo; iCnt++,ch++)
           {
              System.out.print(ch+"\t");  
           }
           System.out.println();
       }
 }

 class Program8
 {
     public static void main(String Arg[])
     {
        BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));
       
        Arithematic aobj = new Arithematic();
        int iValue = 0;
        
        try
        {
            
        System.out.println("Enter Number :");
        iValue = Integer.parseInt(bobj.readLine());

        
        aobj.Display(iValue); //Funcion call
        bobj.close();
       
        }

        catch(Exception eobj)
        {
            System.out.println("Exception Occured");
        }
     }
 }