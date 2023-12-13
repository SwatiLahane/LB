#include<stdio.h>


int Count(char str[],char ch)
{   
    int iCnt = 0;

    while(*str != '\0')
     {

        if(*str == ch)
        {
           iCnt++;
        }
    
    str++;
   }
    return iCnt;
}

int main()
{
   char Arr[20];
   int iRet = 0;
   char cValue = '\0';
   printf("Enter the String : \n");
   
   scanf("%[^'\n']s",Arr);
   
   printf("Enter the character for frequency calculation:\n");
   scanf("%c",&cValue);

   iRet = Count(Arr,cValue); //strlenX(100)
     
     printf("Frequency of  of a letter  : %d\n",iRet);

    return 0;
}