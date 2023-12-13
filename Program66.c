
#include<stdio.h>//Printf scanf 
#include<stdlib.h>//For Malloc free
float Average(int A[],int iSize)
{
    int iCnt = 0, iSum = 0;
    float fAverage = 0.0f;


    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    fAverage = ((float)iSum/(float)iSize);
    return ;
}

int main()
{
    int iCount = 0;
    int *ptr = NULL;
    float fRet = 0.0f;
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

   fRet = Average (ptr,iCount);
   printf("Average is : %f \n",fRet);

   free(ptr);
   printf("Dynamic memory gets deallocated successfully ...\n");
  
    return 0;

}