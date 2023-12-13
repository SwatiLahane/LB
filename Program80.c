//Accept Number and display below linear Pattern 
//Input : 4
//Output: a  b  c  d
//Time complexity : N

#include<stdio.h>//For scanf and printf 

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


void Display(int iNo)
{
 register int iCnt = 0;
 char ch ='a';

 //     1             2         3
 for(iCnt = 1; iCnt <= iNo; iCnt++,ch++)  //Inner Loop
 {   
     
     printf("%c\t",ch);
    // ch++;

 }
  printf("\n\n");
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