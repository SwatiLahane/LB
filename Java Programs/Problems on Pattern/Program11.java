
//Non linear pattern
////Input : 4 4
 //Output : 
  /*
    *   *   *   *   
    *   *   *   *   
    *   *   *   *     
    *   *   *   *              
*/


import java.util.*;

class Program11
{

    public static void main(String Args[])
    {
        Scanner sobj = new Scanner(System.in);
        int icnt = 0;
        int icnt1 = 0;

        for(icnt = 1; icnt <= 4; icnt++)
        {
            for(icnt1 = 1; icnt1 <= 4; icnt1++)
            {
                System.out.print("*\t");
            }
            System.out.println();
        }
    }
}
