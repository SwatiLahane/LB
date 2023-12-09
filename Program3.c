 //Problem Statement : Accept two values from user and perform the Addition

//Step 1: understand the problem statemnet
//conclusion: we have to accept 2 integers and perform its Addition

//step 2 : write the algorithm
/*
  Accept first number from user and store it into no1
  Accept Second number from user and store it into no2
  create one variable to store the result  

*/

//step 3: Decide the Programming language(C/C++/Java)

//Step 4: Write the Program  

#include<stdio.h>

int main()
{

   int iNo1,iNo2,iAns;
   printf("Enter first number :\n");
   scanf("%d",&iNo1);

   printf("Enter first number :\n");
   scanf("%d",&iNo2);

   iAns = iNo1 + iNo2;

   printf("Additon is : %d\n",iAns);


    return 0;
    
}