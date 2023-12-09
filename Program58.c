#include<stdio.h> //For printf scanf 
#include<stdlib.h> //For malloc Calloc 

//void Display(int *Arr,int iSize) Arr is pointer
void Display(int Arr[],int iSize) //(100 ,4)
{
    int iCnt = 0;

    printf("\nElements of the array are : \n");
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
   printf("Dynamic memory gets allocated successfully for %d elements\n",iCount);
   
   printf("ENter the %d Values:\n",iCount);
   for(iCnt = 0; iCnt < iCount ; iCnt++)
   {
       printf("\n Enter the element no %d : ",iCnt+1);
       scanf("%d",&ptr[iCnt]);
   }

   Display(ptr ,iCount); //Display(100,4)

   free(ptr); //(100)
   printf("Dynamic Memory gets deallocated successfully...\n");

    return 0;
}