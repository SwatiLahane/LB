#include<stdio.h>


void strlwrX(char str[])
{   
    int iCnt = 0;

    while(*str != '\0')
     {

       if(*str >= 'a' && *str <='z' )
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
   
  
    strlwrX(Arr); //strlenX(100)
     
     printf("Updated string is  : %s\n",Arr);

    return 0;
}