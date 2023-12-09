#include<stdio.h>

//Display exam time using if else condition 
void DisplayExamTime(int iStandard)
{
    if(iStandard == 1)
    {
          printf("Exam is at 8 am\n");
    }
    else if(iStandard ==2) 
    {
            printf("Exam is at 9 am\n");
    }
    else if(iStandard ==3) 
    {
         printf("Exam is at 10 am\n");
    }
    else if(iStandard ==4) 
    {
         printf("Exam is at 11 am\n");
    }
    else if(iStandard ==5) 
    {
         printf("Exam is at 12 NOON\n");
    }
    else
    {
        printf("Invalid Input");
    }

}



int main()
{

   int iValue = 0;
   printf("Enter your standard : \n");
   scanf("%d",&iValue);

   DisplayExamTime(iValue);


    return 0;
}