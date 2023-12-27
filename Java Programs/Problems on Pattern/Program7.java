 //Input :6
      //Output : a b c d e f 



import java.util.*;

class  Arithematic 
{  
    public int iNo;

    public Arithematic(int A)
    {
        this.iNo = A;
        
    }    
     public void Display()
     {
         int  iCnt = '\0';
         char ch = 'a';

         for(iCnt =1, ch ='a'; iCnt <= iNo; iCnt++,ch++)
         {
             System.out.print(ch+"\t");

         }
         System.out.println();
     }

    }



class Program7
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue = 0;

        System.out.println("Enter Number :");
        iValue = sobj.nextInt();

        Arithematic aobj = new Arithematic(iValue);
         aobj.Display(); //function call
        
         sobj.close();

    }
}