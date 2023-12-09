
//Problem statement :Accept radius from user and calculate the area of circle

//Step1 : Understand the problem statement 
//Conclusion : We are going to use the formula PI * R * R

//Step 2 :Algorithm
/* 
START
   Accept radius from user and store into RADIUS
   Create variable as PI and store Value 3.14
   Calculate Area PI * Radius *Radius
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


//CalculateArea is function which Accepts one parameter as a float and Caluculate the area of circle

float CalculateArea(float fValue)

{
    auto float fAns = 0.0f;
    auto float PI = 3.14f; //const Value Of PI 

    fAns = PI * fValue * fValue;

    return fAns;
}

///////////////////////////////////////////////////////////////////////////////////////
//
// Entry Point function 
//
///////////////////////////////////////////////////////////////////////////////////////



int main()


    auto float fRadius = 0.0f; //Variable to store Radius 
    auto float fArea  = 0.0f; //Variable to store result
    

    printf("Enter Radius of circle: \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius); //Function call to calculate Area of circle
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