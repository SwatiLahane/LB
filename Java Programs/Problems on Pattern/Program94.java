/*   
iRow  = 4 
iColm = 4
     j

   $  &  $  &     

i  $  &  $  &     

   $  &  $  &      

   $  &  $  &    

*/

import java.util.*;
 
class Arithematic 
{
     public void Dispaly(int iNo1, int iNo2)
     {
         int iCnt1 = 0;
         int iCnt2 = 0;
         
         for(iCnt1 = 1; iCnt1 <= iNo1; iCnt1++)
         {
             for(iCnt2 = 1; iCnt2 <= iNo2; iCnt2++) 
             {
                 if(iCnt2 % 2 == 0)
                 {
                     System.out.print("*"+"\t");
                 } 
                 else
                 {
                     System.out.print(iCnt2 +"\t");
                 }
                 
             }
             System.out.println();
         }
     }
}
class Program23
{   
    public static void main(String arg[])
    {

    Scanner sobj = new Scanner(System.in);
    Arithematic aobj = new Arithematic();

    int iValue1 = 0;
    int iValue2 = 0;

    System.out.println("Enter Number of Rows :");
    iValue1 = sobj.nextInt();

    System.out.println("Enter number of colms :");
    iValue2 = sobj.nextInt();

    aobj.Dispaly(iValue1,iValue2);

}

}