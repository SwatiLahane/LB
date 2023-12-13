/* 
  intput N : 6 
    Elements: 85 66 3 66 93 88
 
  Output : 3
*/


#include<stdio.h>//Printf scanf 
#include<stdlib.h>//For Malloc free


int Minimum(int Arr[] , int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }

    }
    return iMin;
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

   iRet = Minimum(ptr,iCount);
   printf("Minimum element is : %d \n",iRet);

   free(ptr);
   printf("Dynamic memory gets deallocated successfully ...\n");
  
    return 0;

}