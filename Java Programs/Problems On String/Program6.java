
import java.util.*;


class Program6
{

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        String str = null;


        System.out.println("Enter your name:");
        str = sobj.nextLine();
        
        char Arr[] = str.toCharArray();
         
        int icnt = 0;

        for(icnt = 0; icnt < Arr.length; icnt++)
        {
            System.out.println(Arr[icnt]);
        }
        

    }
}