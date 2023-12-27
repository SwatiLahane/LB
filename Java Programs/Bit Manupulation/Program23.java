import java.util.*;

//Toggel bit
class Program23

{  
   public static int ToggleBit(int iNo)
   {
         int iMask = 0X00004000;  
         int iResult =0;
         
        
        iResult = iNo ^ iMask;  //15th bit toggle 
         
         return iResult; 
   }      

   public static void main(String arg[])
   {
       Scanner sobj = new Scanner(System.in);
       int iNo = 0;
       int iRet =0;
       
       System.out.println("Enter Number :");
       iNo = sobj.nextInt();
      
       iRet = ToggleBit(iNo);

       System.out.println("Updated Number is "+iRet);

   }
}
//iNo = 889
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


*/