#include<stdio.h>

  //Case Non Sensetive
int CountVowels(char str[])
{   
    int iCnt = 0;

    while(*str != '\0')
     {

 if(*str == 'a' || *str == 'e' || *str == 'i' || *str =='o' ||*str =='u'||*str == 'A' || *str == 'E' || *str == 'I' || *str =='O' ||*str =='U');
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
   
   printf("Enter the String : \n");
   
   scanf("%[^'\n']s",Arr);
   
  
   iRet = CountVowels(Arr); //strlenX(100)
     
     printf("Couunt Vowels  : %d\n",iRet);

    return 0;
}