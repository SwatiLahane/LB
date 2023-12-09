
//Problem statement :Accept radius from user and calculate the area of circle

//Step1 : Understand the problem statement 
//Conclusion : We are going to use the formula PI * R * R

//Step 2 :Algorithm
/* 
START


   Accept radius from user and store into fValue
   Create variable as PI and store Value 3.14
   Calculate Area PI * Radius * Radius
   Display the Value of area to the user


STOP
*/
#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////
// Function name  :   Calculate Area 
// Description    :   It is used to calculate area of circle
// Input          :   float
// Output         :   Float
// Author Name    :   Swati Vinayak Lahane
// Date           :   02/10/2023
////////////////////////////////////////////////////////////////////////////////



float CalculateArea(float fValue)

{
    auto float fAns = 0.0f;  //Variable to Store result
    auto const float PI = 3.14f; //Variable to store value of PI

   fAns = PI * fValue * fValue;

    return fAns;
}

//////////////////////////////////////////////////////////////////////////////
//
// Entry Point function
//
////////////////////////////////////////////////////////////////////////////////

//Step 4

int main()
{

    auto float fRadius = 0.0f;
    auto float fArea  = 0.0f;
    

    printf("Enter Radius of circle: \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);
    printf("Area of circle is : %f\n",fArea);

    return 0;


}


//Step 5: Test Cases
/*
Input : Enter Radius of circle : 10.5
output : 346.184989

intput :Enter Radius of circle : -10.5
output : 346.184989

input : Enter Radius of circle : 10
output : 314.0000000

input : Enter Radius of circle : 5
output : 78.5000000

*/
