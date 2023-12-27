//Factorial option 1

import java.util.*;

class Program9
{

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo =0;
        int icnt = 0,iRet=0;
        int iFact =1;

        System.out.println("Enter The Number :");
        iNo = sobj.nextInt();
        
        for(icnt =1; icnt <= iNo; icnt++)
        {
            iFact = iFact * icnt;
        }
        
        System.out.println("Factorial is :"+iFact);
                
    }
}
