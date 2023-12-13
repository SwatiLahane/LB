
#include<stdio.h>
/*
    *   *   *   *   
    *   *   *   *   
    *   *   *   *           
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                      Name Of Function :Display(Non linear Pattern)
//                      Description      :print start pattern 
//                      Input Argument   :Integer 
//                      Output Argument  :Integer 
//                      Author           :Swati Vinayak Lahane
//                      Date             :31 October 2023
//                              
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void Display()
{

    int iCnt = 0;
    for(iCnt = 1; iCnt <=4; iCnt++)
    {
        printf("*\t");

    }
    printf("\n");

     for(iCnt = 1; iCnt <=4; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");

     for(iCnt = 1; iCnt <=4; iCnt++)
    {
        printf("*\t");
    }
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                          Entry Point Function from where execution get starts 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
   Display(); //Function call
    return 0;
}