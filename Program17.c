
//Program Statement Calculate percentage


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CalculatePercentage
// Description   :  Function to calculate Percentage
// Input         :  Integer,Integer
// Output        :  Float
// Auther Name   :  Swati Vinayak Lahane 
// Date          :  10/02/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to Calculate percentage 
float CalculatePercentage(int iMarks ,int iTotal)

{
     auto float  fAns = 0.0f;

     if((iMarks < 0) || (iTotal < 0 ) || (iMarks > iTotal))  //Upadater

        {
          printf("Invalid Input\n");
          return fAns;

        }
     


     fAns = (((float)iMarks /(float)iTotal)*100);
     return fAns;

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Entery Point Function from where execution get starts
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()

{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fRet  = 0.0f;

    printf("Enter The Marks\n");
    scanf("%d",&iValue1);

    printf("Enter Total Marks\n");
    scanf("%d",&iValue2);

    fRet = CalculatePercentage(iValue1 ,iValue2);

    printf("Your percentage is %f\n",fRet);

    return 0;

}