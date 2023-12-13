

//5 Accept number of rows and number of columns from user and display below 

 //  iRow = 6 ,iCol = 5

 /*

      1  2   3   4   

      1  *   *   4

      1  *   *   4

      1  2   3   4
    
      

 */


 //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//            Function Name          :Pattern 
//            Function Description   :Function to print number pattern ,which contains 4 rows and 4 colm 
//            Input Argument         :Integer ,Integer
//            Output Argument        :Integer, Integer
//            Date                   : 31 october 2023         
//            Author:                : Swati Vinayak Lahane
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iRow ,int iColm)

{   
    int iCnt1 = 0;
    int iCnt2 = 0;
        
   for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++ ) //Inner loop
   {  
            
      for(iCnt2 = 1 ; iCnt2 <= iColm ; iCnt2++) //Outer loop
      {
            if((iCnt1 == 1) || (iCnt2 == 1) || (iCnt1 == iRow) || (iCnt2 == iColm))
            {
               printf("%d\t",iCnt2);
            }
            
            else
            {
               printf("*\t");
               
            }

       }
         
      
      printf("\n\n");
   }
      
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                Entery point function from where execution get starts
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()

{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    printf("Enter Number of Rows and number of colm :");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2); 

    return 0;

}
