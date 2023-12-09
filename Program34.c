#include<stdio.h>
//Display Numbers on screen

void Display(int iNo)
{
   auto int iCnt = 0;
   
   for(iCnt = 1; iCnt <= iNo; iCnt++)
   {
       printf("%d\n",iCnt);
       
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