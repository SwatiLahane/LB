#include<stdio.h>

//Case Sensitive
void ReplaceVowels(char str[])
{   
    int iCnt = 0;

    while(*str != '\0')
     {

        if(*str == 'a' || *str == 'e' || *str == 'i' || *str =='o' ||*str =='u' ||*str == 'A' || *str == 'E' || *str == 'I' || *str =='O' ||*str =='U');
        { 
          *str = '_';
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
   
  
    ReplaceVowels(Arr); //strlenX(100)
     
     printf("Updated String is : %s\n",Arr);

    return 0;
}