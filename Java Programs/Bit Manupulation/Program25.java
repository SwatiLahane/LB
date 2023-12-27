


import java.util.*;

class Program25
{

    public static int ToggleBit(int iNo , int iPos)
    {
        int iMask = 0X00000001;
        int iResult = 0;

        iMask = iMask << (iPos - 1);

        iResult = iNo ^ iMask;

         return iResult; 
    }
    
    public static void main(String Arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0,iRet =0 ;
        int iPos = 0;

        System.out.println("Enter Number :");
        iNo =  sobj.nextInt();

        System.out.println("ENter Position :");
        iPos = sobj.nextInt();
        
        iRet = ToggleBit(iNo , iPos);
        
       System.out.println("Updated Number is:"+iRet);

    }
}


/*

    No  = 889

    Input :      1   1   0   1   1   1   1   0   0   1   
    Mask         0   0   0   0   0   0   1   0   0   0      ^
    ------------------------------------------------------------
    Result       1   1   0   1   1   1   0   0   0   1




    No = 98

    Input :     1   1   0   0   0   1   0 
    Mask        0   0   0   1   0   0   0                   ^
    ------------------------------------------------------------
    Result      1   1   0   1   0   1   0



iMask : 0000    0000    0000    0000    0000    0000    0000    0001

iPos : 6

iMask = iMask << (iPos-1);
iMask = iMask << 5;


iMask : 0000    0000    0000    0000    0000    0000    0000    0001

iMask : 0000    0000    0000    0000    0000    0000    0010    0000   

*/