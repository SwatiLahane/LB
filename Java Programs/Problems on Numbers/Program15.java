

//Calculate radius 
//formula to calculate radius 3.14 * R * R

import java.util.*;


class Program15
{
    public static float CalculateArea(int iNo)
    {
          float fResult = 0.0f;
          float PI = 3.14f;

          fResult = (PI * (float)iNo * (float)iNo);

          return fResult;
    }

    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue =0;
        float fRet = 0;

        System.out.println("Enter Radius :");
        iValue = sobj.nextInt();

        fRet = CalculateArea(iValue); //function call
         
        System.out.println("Radius of circle :"+fRet);
    }

}