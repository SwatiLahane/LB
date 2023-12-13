//Accept Number and display below Pattern
//Input : 4
//Output: 4  3  2  1
//Time complexity : N

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                      Name Of Function :Display
//                      Description      :Accept  Number from user and Display Pattern
//                      Input Argument   :Integer 
//                      Output Argument  :Integer 
//                      Author           :Swati Vinayak Lahane
//                      Date             :31 October 2023
//                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>//For scanf and printf 

void Display(int iNo)
{
 register int iCnt = 0;
 for(iCnt = iNo; iCnt >= 1; iCnt--)
 {   
     
     printf("%d\t",iCnt);

 }
  printf("\n");
}


int main()
{ 
     int iValue = 0;
     
    printf("Enter the number of count:\n");
    scanf("%d",&iValue);
    Display(iValue); //Function call
     return 0;

}
//time complexity :n