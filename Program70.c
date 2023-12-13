//Print Maxmin
#include<stdio.h>//Printf scanf 
#include<stdlib.h>//For Malloc free


void MaxMin(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];
    int iMin = Arr[0];
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {  
        if(Arr[iCnt] > iMax)
        {
             iMax = Arr[iCnt];
        }
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }

    }
  printf("Maximum Element is :%d \n",iMax);
  printf("Minimum Element is :%d \n",iMin);

}

int main()
{
    int iCount = 0 ;
    int *ptr = NULL;
    int iCnt = 0;

    printf("ENter number of elements you want  to Enter :\n");
    scanf("%d",&iCount);

    ptr  = (int *) malloc(iCount * sizeof(int));
    printf("Dynamic memory gets allocated successfully\n");

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iCount ; iCnt++)
    {
        printf("\nEnter element no %d :",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

     MaxMin(ptr,iCount);
  

   free(ptr);
   printf("Dynamic memory gets deallocated successfully ...\n");
  
    return 0;

}