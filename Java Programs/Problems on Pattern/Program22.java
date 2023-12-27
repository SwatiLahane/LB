

/*   
iRow  = 4 
iColm = 4

1  2  3   4  

*   *     *   

1  2  3   4  

*  *  *   *

*/

import java.util.*;

class Arithematic 
{
public void Display(int iNo1, int iNo2)
{
int iCnt1 = 0;
int iCnt2 = 0;

for(iCnt1 = 1; iCnt1 <= iNo1 ; iCnt1 ++)
{
for(iCnt2 = 1; iCnt2 <= iNo2 ;iCnt2++)
{
    if(iCnt1 % 2 == 0)
    {
        System.out.print("*"+"\t");
    }
    else
    {
    System.out.print(iCnt2+"\t");
    }
    
}
System.out.println("\t");
}
}
}

class Program22

{   

public static void main(String Args[])
{
Scanner sobj = new Scanner(System.in);
Arithematic aobj = new Arithematic();

System.out.println("Enter Number of Rows:");
int iValue1 = sobj.nextInt();

System.out.println("Enter Number of Colms:");
int iValue2  = sobj.nextInt();

aobj.Display(iValue1, iValue2); // Function call

}
}