

//Input  row =3   col = 4

/*   *  *  *  *  *
     *  *  *  *  *
     *  *  *  *  *
  */   


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                      Name Of Function :Display
//                      Description      :print start pattern which 
//                      Input Argument   :Integer 
//                      Output Argument  :Integer 
//                      Author           :Swati Vinayak Lahane
//                      Date             :31 October 2023
//                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void Display()
{
 register int iCnt1 = 0 , iCnt2=0;
       
  for(iCnt1 =1 ; iCnt1<=3; iCnt1++) //Outer loop
  {
      for(iCnt2 =1; iCnt2<=4; iCnt2++)  //Inner Loop
      {
          printf("*\t");
      }
      printf("\n");
  } 

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                          Entry Point Function from where execution get starts 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{ 
   Display();  //Function Call

    return 0;
}