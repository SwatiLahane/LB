#include<stdio.h>
#include<stdbool.h> 
//check sum of factors  
 //ONly positive number is perfect number //check perfect number 

bool CheckPerfect(int iNo)
{

   int iCnt = 0;
   int  iSum = 0;
  
  
   
   for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
   {

        if((iNo % iCnt) == 0)
       
       {
          iSum = iSum + iCnt;

       }
          
   }

      if(iSum == iNo)
      {
          return true;
      }           
   else

    {
        return false;
    }
       
}



int main()
{

     int iValue = 0;
     bool iRet  = false;

     printf("Enter the Number : \n");
     scanf("%d" ,&iValue);

     iRet = CheckPerfect(iValue);

     if(iRet == true)
     {
         printf("%d is a perfect Number\n" ,iValue);
     }
     else

     {
         printf("%d is Not Perfect Number\n",iValue);

     }
      return 0;
}

//Time Complexity  : O(N/2)