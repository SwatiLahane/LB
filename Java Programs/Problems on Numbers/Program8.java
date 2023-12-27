
import Marvellous.Arithematic; //importing Arithematic class from Marvellous package
import java.util.*;

class Program8
{
    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1=0 , iNo2 =0;
        int iRet =0;

        System.out.println("Enter First Number:");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second Number:");
        iNo2 = sobj.nextInt();
        
        Arithematic aobj = new Arithematic(iNo1, iNo2);

        iRet = aobj.Addition();
        System.out.println("Addition is :"+iRet);
    }
}
// 1 : javac -d . Arithematic.java
// 2 : javac Program8.java
// 3 : java Program8