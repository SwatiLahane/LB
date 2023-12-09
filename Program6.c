//Problem Statement : Accept two values from user and perform the Addition

//step 1 :Understanding  the Problem statement
//Step 2 :Write the Algorithm
//Accept First Number from user and store it into iValue1
//Accept Second Number from User and store it into iValue2
//create third variable to store result 

//Step 4: Write a Program

#include<stdio.h>


//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//   Function Name  :  Addition
//   Description    :  It is used to perform addition of 2 integers
//   Input Argument :  Integer , Integer  
//   Output         :  Integer
//   Author         :  Swati Vinayak Lahane
//   Date           :  25 /09 /2023 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Additon is a function which accepts two parameter as integer and it returns integer

int Addition(int iNo1 ,int iNo2)

{
  int iSum = 0;
  iSum = iNo1 + iNo2;
  return iSum;

 }

/////////////////////////////////////////////////////////////////////////////////////////////////
//  
// Entry point function of an application which performs addition of 2 integer
//
/////////////////////////////////////////////////////////////////////////////////////


int main()
{
    
    int iValue1 = 0; //
    int iValue2 = 0;
    int iAns = 0;
    


   printf("Enter first number :\n");
   scanf("%d",&iValue1);

   printf("Enter first number :\n");
   scanf("%d",&iValue2);

   iAns = Addition(iValue1 , iValue2);

   printf("Additon is : %d\n",iAns);


    return 0;
    
}

//Step 5 : Test the code

/*
Test Case 1 ;
Input : 10 11
Output : 21

Test Case 2 :
Input :12 -6
Output : 6

Test Case 4 :
Input : -6 -5
Output : -11

*/


