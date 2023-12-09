#include<stdio.h>

void DisplayExamTime(int istandard)
{
    switch(istandard)
    {
     case 1: 
        printf("Exam is at 8 am\n");
        break;
     case 2: 
        printf("Exam is at 9 am\n");
        break;

        case 3: 
        printf("Exam is at 10 am\n");
        break;

        case 4: 
        printf("Exam is at 11 am\n");
        break;
        case 5: 
        printf("Exam is at 12 pm\n");
        break;  
   default:
      printf("Wrong Input");
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