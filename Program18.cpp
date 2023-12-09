
//marks is greater than or equal to zero and less than 35 your are fail
//problem statement if your marks is greater than 35 and less 50 (third class or pass class) if your marks is greater than 50 and less 60(second class)
//your marks is greater than 60 and less 75 (First class) and your marks is greater than or equal 75 and  than 100   distingsion


#include<iostream>
using namespace std;

void Displayclass(float fMarks)
{
   
   if((fMarks < 0.0f) || (fMarks >=100.0))
   {
       cout<<"Invalid Input";
   }

   if((fMarks >= 0.0) && (fMarks < 35.0))
   {
       cout<<"you are fail";
   }
   else if((fMarks >= 35.0) && (fMarks < 50.0))
   {
       cout<<"your class is pass class";
   }
   
   else if((fMarks >= 50.0) && (fMarks < 60.0))
   {
      cout<<"second class"; 
   }

   else if((fMarks >= 60.0) && (fMarks < 75.0))
   {
       cout<<"First class";
   }
   else((fMarks >= 75.0) && (fMarks < 100.0))
   {
       cout<<"Distingsion";
   }
}



int main()
{
   float iValue = 0.0f;

   cout<<"Your Percentage is :";
   cin>>iValue;
   
   Displayclass(iValue);

    return 0;
}