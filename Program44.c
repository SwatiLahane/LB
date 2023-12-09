
//check prime
#include<stdio.h>
#include<stdbool.h> 

bool  CheckPrime(int iNo)
{
    int icnt = 0;

   if(iNo < 0) //Updator
   
   {     
            iNo = -iNo;
   }

   for(icnt  = 2 ; icnt <= (iNo/2); icnt++)

   if((iNo % icnt ) == 0)
   {
       return false;
   }

    return true;
}

int main()
{   
    auto int iValue = 0;
    
    bool bRet = false;

    printf("Enter Number :\n");
    scanf("%d",&iValue);


   bRet =  CheckPrime(iValue);

  if(bRet == true)

  {
      printf("%d is a Prime Number \n",iValue);
  }
  else
  {
      printf("%d is a Not a Prime number \n",iValue);
  }

    return 0;
}

