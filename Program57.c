#include<stdio.h> //For printf scanf 
#include<stdlib.h> //For malloc Calloc 

void Display(int Arr[],int iSize)
{
    int iCnt = 0;

    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
   int iCount = 0, iCnt = 0;
    int *ptr = NULL;

   printf("Enter the Number of elements that you want to enter\n");
   scanf("%d",&iCount);

   ptr = (int *) malloc(iCount * sizeof(int)); 
  
   printf("ENter the Values:\n");
   for(iCnt = 0; iCnt < iCount ; iCnt++)
   {
       scanf("%d",&ptr[iCnt]);
   }

   Display(ptr ,iCount); //function 

   free(ptr);

    return 0;
}