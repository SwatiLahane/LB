
////Input :6
 //Output : A B C D E F
 
 import java.util.*;

class Arithematic 
{
    public int iNo;

    public Arithematic(int A)
    {
        this.iNo = A;

    }
    public void Display()
    {
        int iCnt = 0;
        char ch = '\0';
            //   1                 2          3
        for(iCnt =0,ch = 'A'; iCnt <= iNo; iCnt++,ch++)
        {
            System.out.print(ch+"\t"); //4
        }
        System.out.println();
    }
}

 class Program9
 {
     public static void main(String arg[])
     {

       Scanner sobj = new Scanner(System.in);
       
       int iValue = 0; 

       System.out.println("Enter Number :");
       iValue = sobj.nextInt();
       
       Arithematic aobj = new Arithematic(iValue);
       aobj.Display();
   
     }
 }
   

