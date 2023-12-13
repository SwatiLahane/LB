//Claculate frequency of element of numbers 
#include<stdio.h>//Printf scanf 
#include<stdlib.h>//For Malloc free



int Frequency(int Arr[] , int iSize,int iNo)
{
    int iCnt = 0;
    int iFrequency =0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {  
        if(Arr[iCnt] == iNo)
        { 
           iFrequency++; 
        }

    }
  return iFrequency;

}

int main()
{
    int iCount = 0 ,iRet = 0,iValue = 0;
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

    printf("Enter the Element that you want to search:\n");
    scanf("%d",&iValue);

     iRet = Frequency(ptr,iCount,iValue);//Function call
     printf("%d occurs %d times\n",iValue,iRet);
    

   free(ptr);
   printf("Dynamic memory gets deallocated successfully ...\n");
  
    return 0;

}