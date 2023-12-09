//Accept number from user and count how many digit in that number

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Name Of Function :SumDigit
//                                 Description      :Accept Number from user and return sum of digits in that numbers
//                                 Input Argument   :Integer 
//                                 Output Argument  :Integer 
//                                 Author           :Swati Vinayak Lahane
//                                 Date             :24 October 2023
//                              
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to count digit 

int countDigit (int iNo)
{
   int iCnt = 0;
   
   while(iNo > 0)
   {
     
     iNo = iNo /10;
     iCnt ++;

}

 return iCnt;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                 Entry Point Function From where execution get starts
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{

auto int iValue = 0;
int iRet = 0;
printf("Enter Number:");
scanf("%d",&iValue);

   iRet = countDigit(iValue); //Function

 printf("Number of digit are : %d\n",iRet);

    return 0;

}

//TEst Steps
/*
  Input :  123 
  Output: 3
  
  Input : 7221
  Output : 4

  Input :234567
  Output :6
*/