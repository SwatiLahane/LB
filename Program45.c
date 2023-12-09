
//check prime


//Accept number from user and check if that number is prime 
#include<stdio.h>
#include<stdbool.h> 

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function name      : CheckPrime
//             Description        :accept number from user and check that numeber is prime     
//             Input Argument     :Integer 
//             Output Argument    :Integer
//             Author             :Swati Vinayak Lahane
//             Date               :10 October 2023  
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to check number isPrime 
bool  CheckPrime(int iNo)
{
    int icnt = 0;
    bool bFlag = true;

   if(iNo < 0) //Updator
   
   {     
            iNo = -iNo;
   }

   for(icnt = 2 ; icnt <= (iNo/2); icnt++) 

   if((iNo % icnt ) == 0)
   {
       bFlag = false;
       break;
   }

    return bFlag;
}

int main()
{   
    auto int iValue = 0; //Variable to store iValue1
    
    bool bRet = false; //Variableto store boolean value

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
//Test Step 
/*
input :5
Output :5 is Prime Number  

input :11
Output :11 is Prime Number  

input :2
Output :2 is Prime Number  



*/
