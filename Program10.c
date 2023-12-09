
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
// Function name   :   Calculate Area 
// Description     :  It is used to calculate area of circle
// Input           :  float
// Output          :  float
// Author Name     :  Swati Vinayak Lahane
// Date            :  02/10/2023
////////////////////////////////////////////////////////////////////////////////

#define PI 3.14

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;
    //auto const float PI = 3.14f;

   fAns = PI * fValue * fValue;

    return fAns;
}

//////////////////////////////////////////////////////////////////////////////
//
// Entry Point function
//
////////////////////////////////////////////////////////////////////////////////



int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;
    

    printf("Enter Radius of circle: \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);
    printf("Area of circle is : %f\n",fArea);

    return 0;


}