//Problem Statement : Accept two values from user and perform the Addition
//step 1: Understand the problem statement 
//conclusion : we have to Accept two integer values and perform addition

//Algorithm 
//Accept first number from user iValue1
//Accept second number from use iValue2
//Create third variable to store result

//step 3 : Decide The programming language 
//step 4 : Write a program

#include<stdio.h>

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iAns = 0;
    


   printf("Enter first number :\n");
   scanf("%d",&iValue1);

   printf("Enter first number :\n");
   scanf("%d",&iValue2);

   iAns = iValue1 + iValue2;

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


*/