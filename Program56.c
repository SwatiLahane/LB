

//Problems On n Numbers 
//Write a program to accept array and display Array Elements
#include<stdlib.h> //For malloc and free
#include<stdio.h> //for printf and scanf
//*Arr we can use this also it work same 

int Disply(int Arr[],int iSize)
{  
    int iCnt = 0;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
        printf("%d\t",Arr[iCnt]);

   }
    printf("\n");
  
}
 

int main()

{
   auto int iCount = 0;
   int *ptr = NULL;
   int icnt = 0;
   printf("Enter the Number of element :\n");
   scanf("%d",&iCount);

  ptr = (int *)malloc(iCount * sizeof(int)); 

  printf("Enter the elements : \n");
  
  for(icnt = 0 ; icnt < iCount; icnt++)
  {
      scanf("%d", &ptr[icnt]);
  }
  
   Disply(ptr,iCount);//Function call

    return 0;
}