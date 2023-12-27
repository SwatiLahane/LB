
import java.util.*;

class Arithematic
{
     
     public int iNo1; 
     public int iNo2;
     
     public Arithematic(int A, int B) 
     {
         this.iNo1 = A;
         this.iNo2 = B;
     }
     public int Addition()
     {  
          int iAns =0;
          iAns = iNo1 + iNo2;
          return iAns;
     }
}

class Practice
{

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
      
        int iRet =0;

        int ivalue =0;
        int ivalue1 =0;

        System.out.println("Enter First Number :");
        ivalue = sobj.nextInt();

       System.out.println("Enter First Number :");
        ivalue1 = sobj.nextInt();
        
        Arithematic aobj = new Arithematic(ivalue, ivalue1);

        iRet = aobj.Addition();
        System.out.println("Addition is "+iRet);
    }
}