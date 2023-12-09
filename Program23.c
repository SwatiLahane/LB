#include<stdio.h>
//Calculate average of three Numbers

float Average(int iNo1,int iNo2,int iNo3)
{
   float fAns = 0.0f;
   fAns =(((float)iNo1 + iNo2 + iNo3) /3);
    return fAns;
}

int main()

{
        auto int iValue1 = 0;
        auto int iValue2 = 0;
        auto int iValue3 = 0;

        auto float fRet = 0.0f;

        printf("Enter first number : \n");
       scanf("%d",&iValue1);

        printf("Enter second number : \n");
        scanf("%d",&iValue2); 

         printf("Enter third number : \n");
          scanf("%d",&iValue3); 
      
     fRet = Average(iValue1,iValue2,iValue3);
     printf("Average is :%f\n ",fRet);

    return 0;
}