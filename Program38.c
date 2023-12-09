
//Problem statement :Accept two numbers from user and Check wheather given number is factor of another number  or not

//Conclusion :// We have to accept two numbers from user and check wheather one integer is factor of another or not

//Step 1 : Understand the problem statement

//Step 2: //Write a algorithm
 //1. Accept First number from user iValue1 
 //2.Accept second number from user iValue2
 //3.Create one variable to store result 

//Step 3 : Decide the programming language(c ,c++ ,java)

//Stepe 4: Write a program


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Funciton Name              :         CheckFactor
//   Description                :    It is Used to checkt wheher given numbers are factors or Not 
//   Input Argument             :    integer ,integer
//   output Argument            :    Integer
//   Author                     :    Swati Vinayak Lahane  
//   Date                       :    09 /10 /2023 
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
 



#include<stdio.h>
#include<stdbool.h> 

//Accept two Numbers from user and check it is factor of first number or not and if it is factor thecn return true (check Factor) 
//example 21 % 7 ,7 is factor of 21 yes then return true
bool CheckFactor(int iNo1, int iNo2)

{
       if((iNo1 % iNo2) == 0)  //If condition to 
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

   auto int iValue1 = 0; //Variable to store first Value
   auto int iValue2 = 0; //Variable to Store second Value 

   bool bRet = false;   // variable to store result   

   printf("Enter first number\n");
   scanf("%d",&iValue1);

   printf("Enter second number\n");
   scanf("%d",&iValue2);
   

   bRet = CheckFactor(iValue1,iValue2);//Function call
   
   if(bRet == true)

   {

       printf("%d is a factor of %d\n",iValue2,iValue1);

   }
   else
   {
       printf("%d is not a factor of %d\n",iValue2,iValue1);

   }


    return 0;

}

