#include<stdio.h>


void Replace(char str[])
{   
    int iCnt = 0;

    while(*str != '\0')
     {

        if(*str =='a')
        {
           *str = '-';
           
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
   
  
    Replace(Arr); //strlenX(100)
     
     printf("Updated String is : %s\n",Arr);

    return 0;
}