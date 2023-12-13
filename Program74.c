
#include<stdio.h>//For scanf and printf 

//Input : 6
//Output :*  *  *  *  *

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                 Name Of Function :Display Linear Pattern (Problems on pattern printing) 
//                 Description      :Accept Number from user and DisplayLinear Pattern
//                 Input Argument   :Integer 
//                 Output Argument  :Integer 
//                 Author           :Swati Vinayak Lahane
//                 Date             :31 October 2023
//                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
 register int icnt = 0;
 for(icnt = 1; icnt <= iNo; icnt++)
 {
     printf("*\t");
 }
 // printf("\n");
}


int main()
{ 
     int iValue = 0;
     
    printf("Enter the number of count:\n");
    scanf("%d",&iValue);
    Display(iValue); //Function call
     return 0;

}
