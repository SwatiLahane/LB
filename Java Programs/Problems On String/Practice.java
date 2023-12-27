
//dispaly sting using charAt method

import java.util.*;
class Arithematic 
{
   void Display(String Arr)
    {
       int iCnt =0;

       for(iCnt = 0; iCnt < Arr.length(); iCnt++)
       {
           System.out.println(Arr.charAt(iCnt));
       }
    }

}


class Practice
{
    public static void main(String Arg[])
    {
        
        Scanner sobj = new Scanner(System.in);
        Arithematic aobj = new Arithematic();
        String str = null;

        System.out.println("Enter your name: ");
        str = sobj.nextLine();
        
        aobj.Display(str);//fucntion call
        

    }
}
