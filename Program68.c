//
#include<stdio.h>//Printf scanf 
#include<stdlib.h>//For Malloc free


int Maximum(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iMax = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }

    }
    return iMax;
}

int main()
{
    int iCount = 0 ,iRet = 0;
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

   iRet = Maximum(ptr,iCount);
   printf("Maximum element is : %d \n",iRet);

   free(ptr);
   printf("Dynamic memory gets deallocated successfully ...\n");
  
    return 0;

}