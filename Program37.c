#include<stdio.h>

void Display(int iNo)
{
   auto int iCnt = 0;

      //1         2           3
  for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
       printf("*\t"); //4
       
   }
   
}

int main()
{
      auto int iValue = 0;

      printf("Enter Number of times u want to display on screen\n");
      scanf("%d",&iValue);

      Display(iValue);

      return  0;

}