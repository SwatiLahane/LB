
/*
    iRow = 4
    iCol = 4


    #   $   $   $   
    *   #   $   $       
    *   *   #   $   
    *   *   *   #   

*/



import java.util.*;
 



class Arithematic 
{
     public void Dispaly(int iRow, int iColm)
     {
         int iCnt1 = 0;
         int iCnt2 = 0;
         
         for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++) //Outer Loop
         {
             for(iCnt2 = 1; iCnt2 <= iColm; iCnt2++) //Inner Loop
             {
                 if( iCnt1 == iCnt2 )//4
                 {
                     System.out.print("#"+"\t");
                 } 
                 else if(iCnt1 > iCnt2)
                 {
                     System.out.print("*" +"\t");
                 }
                else
                {
                    System.out.print("$"+"\t");
                }

             }
             System.out.println();
         }
     }
}
class Program28
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