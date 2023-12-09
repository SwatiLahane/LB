

//Program Statement : Accept the Number from user and calculate its Cube
//Step1 : Understand the problrm statement
//Concusion : we are going to use formula ivalue * ivalue * iValue

//Algorithm

/*
   START
     Accepet the Number from user and store it into iNo
     Create variable as iValue and store the value in it
     Calculate cube iValue * iValue * iValue
     Display the Value of  iCube to the user


   STOP
*/


#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name :  CalculateCube
// Description   :  It is used to calculate Cube of Number
// Input         :  integer
// Output        :  integer
// Auther Name   :  Swati Vinayak Lahane 
// Date          :  10/02/2023
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


long int CalculateCube(int iValue)

{

    long int iCube= 0;
    iCube = iValue * iValue* iValue;
    return iCube;

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entery Point Function
// 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()

{
  
  auto int  iNo = 0;
  auto  int iAns = 0;

  printf("Enter Number : \n");
  scanf("%d",&iNo);

  iAns = CalculateCube(iNo);

  printf("Cube is : %ld \n",iAns); //%ld for long int
    return 0;

}