
//Write a program to accept number from user and check palindrome
#include<stdbool.h>
#include<stdio.h>

typedef int BOOL;
BOOL CheckPalindrome(int iNo)
{
    int iCopy = iNo; //Xerox copy
    int iDigit =0;
    int iRev = 0;
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iNo = iNo /10;
        iRev = (iRev*10) +iDigit;

     }

      return(iRev == iCopy);
    }
   


int main()
{
    int iValue =0;
    BOOL bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);
    
    bRet = CheckPalindrome(iValue);
    
    if(bRet == true)
    {
        printf("%d is Palindrome number\n",iValue);

    }
    else
    {
        printf("%d is not Palindrome number\n",iValue);
    }

    return 0;
}
