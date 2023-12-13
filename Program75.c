
//Accept Number and print Linear pattern 
//Input 6:
//Output : 1  2  3  4  5  6

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                      Name Of Function :Display
//                      Description      :Accept  Number from user and Display Pattern
//                      Input Argument   :Integer 
//                      Output Argument  :Integer 
//                      Author           :Swati Vinayak Lahane
//                      Date             :31 October 2023
//                              
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>//For scanf and printf 

void Display(int iNo)
{
 register int icnt = 0;
 for(icnt = 1; icnt <= iNo; icnt++)
 {
     printf("%d\t",icnt);
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
