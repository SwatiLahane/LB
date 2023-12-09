

//Problem statement :Accept radius from user and calculate the area of circle
 //Formula to calculate area of circle 3.14 * R* R 

#include<iostream>
using namespace std;
 
#define PI 3.14
 //Function Accept Radius from user and calculate area of circle 

float AreaOfCircle(float Radius)
{
   float fResult = 0.0f;
   fResult = PI * Radius * Radius ;
   
   return fResult;

}




////////////////////////////////////////////////////////////////////////////
//
//   Entry point function from where get started 
////////////////////////////////////////////////////////////////////////////

int main()
{  
   float iValue = 0.0f;
   float iAns = 0.0f;
   cout<<"Enter the radius :"<<endl;
   cin>>iValue;
   
   iAns = AreaOfCircle(iValue);
   cout<<"Radius of circle is :"<<iAns; 

    return 0;
}

//Step 5: Test Cases
/*
Input : Enter Radius of circle : 10.5
output : 346.185

intput :Enter Radius of circle : -10.5
output : 346.185

input : Enter Radius of circle : 10
output : 314

input : Enter Radius of circle : 5
output : 78.5

*/