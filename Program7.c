//Problem Statement : Accept two values from user and perform the Addition
//Conclusion :We have to accepts two integer and perform Addition

//Step 1 : Understand the problem statement  

//step 2 : Write the Algorithm
// Accept first Number from user iValue1
//Accept second Number from user iValue2
//create one variable to store result 

//Step 3:Decide the Programming Language (c,c++,Java)

//Step 4: Write a program 


#include<stdio.h>

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  
//   Function Name  :    Addition
//   Description    :    It is used to perform addition of 2 integers
//   Input Argument :    Integer , Integer  
//   Output         :    Integer
//   Author         :    Swati Vinayak Lahane
//   Date           :    25 /09 /2023 
///////////////////////////////////////////////////////////////////////////////////////////////////////////////


//Additon is a function which accepts two parameter as integer and it returns integer

int Addition(int iNo1 ,int iNo2)

{

  int iSum = 0;    //Variable to store the value of Addition
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

    auto int iValue1 = 0; //Variable to store first input
    auto int iValue2 = 0;//Variable to store second input
    auto int iAns = 0;  //Variable to store the result
    

 
   printf("Enter first number :\n");
   scanf("%d",&iValue1);

   printf("Enter second number :\n");
   scanf("%d",&iValue2);

   iAns = Addition(iValue1 , iValue2);  //Function Call to Perform Addition

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


