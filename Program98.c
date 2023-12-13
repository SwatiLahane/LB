/*

    *   *   *   *   
    *   $   $   *
    *   $   $   *
    *   *   *   *
*/


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              Function Name       : Pattern
//              Description         : Function to print numeric numbers in square shape 
//              INput Argument      : Integer ,Integer
//              Output Argument     : Integer ,Integer
//              Date                : 31 October 2023
//              Author              : Swati Vinayak Lahane
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to display numeric pattern in 3 by 4 matrix

void Display(int iRow ,int iColm)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
   
    //    1           2             3
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)// inner loop
    {   
        for(iCnt2 = 1; iCnt2 <= iColm; iCnt2++)//Outer loop
        {   
            if((iCnt1 = 1) || (iCnt2 == 1) || (iCnt1 == iRow ) || (iCnt2 == iColm))
            {
              printf("*\t");  //4
            }
            else
            {
                  printf("$\t");  //4
            }
            
        }
        printf("\n\n");
    }

}

int main()
{ 
   int iNo1 =0 ,iNo2 = 0;

   printf("Enter the number of rows:\n");
   scanf("%d",&iNo1);

   printf("Enter the number of colms:\n");
   scanf("%d",&iNo2);

   Display(iNo1,iNo2); //Function call

 return 0;
}