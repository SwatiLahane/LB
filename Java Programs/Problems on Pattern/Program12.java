



//Non linear pattern
//Input : 4 4
 //Output : 
  /*
    *   *   *   *   
    *   *   *   *   
    *   *   *   *     
             
*/

import java.util.*;

class Program11
{   

    public static void Dispaly(int iNo1, int iNo2)
    {
        int iCnt1 = 0;
        int iCnt2 = 0;

        for(iCnt1 = 1; iCnt1 <=iNo1; iCnt1 ++)
        {
            for(iCnt2 = 1; iCnt2 <= iNo2; iCnt2++)
            {
                System.out.println("*"+"\t");
            }
        }

    }

    public static void main(String Args[])
    {   
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter Number Of Rows :");
        int iValue1 = 0;

        System.out.println("Enetr Number Of Colms:");
        int iValue2 = 0;


        Dispaly(iValue1, iValue2); //function call 

       
       
    }
}
