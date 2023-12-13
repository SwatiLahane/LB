/*   
iRow  = 4 
iColm = 4
     j

   1  *  3  *     

i  1  *  3  *     

   1  *  3  *      

  

*/

#include<stdio.h>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              Function Name       : Pattern
//              Description         : Function to print Pttern 
//              INput Argument      : Integer ,Integer
//              Output Argument     : Integer ,Integer
//              Date                : 31 October 2023
//              Author              : Swati Vinayak Lahane
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to display Star in even column and printf numeric value in odd Row number using  4 by 4 matrix

void Display(int iRow ,int iColm)
{
    int iCnt1 = 0;
    int iCnt2 = 0;
   
    //    1           2             3
    for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)// inner loop
    {   
        for(iCnt2 = 1; iCnt2 <= iColm; iCnt2++)//Outer loop
        {
            if(iCnt2 % 2 != 0)
            {
                 printf("%d\t",iCnt2);  //4
            }
           else
           {
               printf("*\t");
           }
        }
        printf("\n\n");
    }

}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//                      Entry point function from where execution gets starts
//
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
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