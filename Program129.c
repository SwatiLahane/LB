#include<stdio.h>


void strtoggelX(char str[])
{   
    int iCnt = 0;

    while(*str != '\0')
     {

       if(*str >= 'a' && *str <='z')
       {
        *str = *str - 32;
       }
       else if(*str >= 'A' && *str <='A')
        {
             *str = *str + 32;
        }
    
    str++;
   }
   
}

int main()
{
   char Arr[20];
   int iRet = 0;
   
   printf("Enter the String : \n");
   
   scanf("%[^'\n']s",Arr);
   
  
    strtoggelX(Arr); //strlenX(100)
     
     printf("Updated String is  : %s\n",Arr);

    return 0;
}