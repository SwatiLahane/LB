//Input 3  4
//Output :       colms(icnt2)
       /*          1   2   3   4
              1    *   *   *   *
rows()icnt1   2    *   *   *   *
              3    *   *   *   *
       */     
#include<stdio.h>
void Display(int iRow ,int iCol)
{
int  iCnt1 = 0 ;
int  iCnt2 = 0;

  for( iCnt1 =1;  iCnt1 <= iRow;  iCnt1++)
  {
      for(iCnt2 =1; iCnt2 <= iCol; iCnt2++)
      {
          printf("*\t");//4
      }
       printf("\n\n");
  } 

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                          Entry Point Function from where execution get starts 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iNo1 = 0, iNo2 = 0;  //Variable to store Value of No1 and No2

    printf("Enter Number of rows : \n");
    scanf("%d",&iNo1);  //To accept the Number from user and store it into ino1

    printf("Enter Number of columns : \n");
    scanf("%d",&iNo2);  //To accept the Number from user and store it into ino2

    Display(iNo1,iNo2);  //Display (3,4) 3 rows 4 colm
    return 0;
}