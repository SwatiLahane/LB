 
//Write a program to accept number from user and count digit in reverse order

#include<stdio.h>
int Reverse(int iNo)
{
    int iDigit =0;
    int iRev = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iNo = iNo /10;
        iRev = (iRev*10) +iDigit;
     }
     return iRev;
    }
   


int main()
{
    int iValue =0;
    int iRet =0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);
    
    iRet = Reverse(iValue);
    printf("Reverse number is :%d \n",iRet);

    return 0;
}
