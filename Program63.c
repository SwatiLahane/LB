#include<stdio.h> //For printf scanf 
#include<stdlib.h> //For malloc Calloc 


int Addition(int Arr[],int iSize) //(100 ,4)
{
    int iCnt = 0;
    int iSum = 0;

    printf("\nElements of the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       
        iSum = iSum + Arr[iCnt];
    }
     printf("\n");
   
    return iSum;
}

int main()
{
   int iCount = 0, iCnt = 0;
    int *ptr = NULL;
    int iRet = 0;

   printf("Enter the Number of elements that you want to enter\n");
   scanf("%d",&iCount);

   ptr = (int *) malloc(iCount * sizeof(int)); //malloc call
   printf("Dynamic memory gets allocated successfully for %d elements\n",iCount);
   
   printf("Enter the %d Values:\n",iCount);
   for(iCnt = 0; iCnt < iCount ; iCnt++)  //O(N)
   {
       printf("\n Enter the element no %d : ",iCnt+1); 
       scanf("%d",&ptr[iCnt]);
   }

   iRet = Addition(ptr ,iCount); //Display(100,4)
   printf("Addition of All elements are : %d\n ",iRet);

   free(ptr); //(100)
   printf("Dynamic Memory gets deallocated successfully...\n");

    return 0;
}