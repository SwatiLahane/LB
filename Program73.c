
#include<stdio.h>//For scanf and printf 

//Input 10: 
//Output : *  *  *  *  *  *  *  *  *  * 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                         Name Of Function :Display (Problems on pattern printing) 
//                         Description      :Accept N Number from user and Display That Numbers 
//                         Input Argument   :Integer 
//                         Output Argument  :Integer 
//                         Author           :Swati Vinayak Lahane
//                         Date             :31 October 2023
//                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


void Display()
{
 register int icnt = 0;
 
 for(icnt = 1; icnt <= 6; icnt++) 
 {
     printf("*\t");
 }
  printf("\n");
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//              Entry Point function from where execution get starts
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{   
    
     
    Display(); //Function call
     return 0;

}
