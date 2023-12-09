 //Problem Statement : Accept two values from user and perform the Addition
 //Conclusion :Additon is a function which accepts two parameter as integer and it returns integer

// Step 1: Understand the problem statemnt 


 // Step2 :Write the Algorithm
 // Accept first value from user  store it in iNo1
 //Accept second value from user and store it into iNo2
 //Crete third Variable to store result 

 //Step3 :  Select the programing language(c, c++ ,java ,python)

 //step 4 :Write program


#include<stdio.h>


int Addition(int iNo1 ,int iNo2)

{
  int iSum = 0;
  iSum = iNo1 + iNo2;
  return iSum;

 
}

int main()
{

    int iValue1 = 0;
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


