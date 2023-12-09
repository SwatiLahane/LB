
#include<iostream>
using namespace std;

//calculate avergae of three numbers

float Average(int iNo1, int iNo2,int iNo3)
{    
    float Average = 0.0f;
    Average = ((float)iNo1 + iNo2 + iNo3) /3.0;
    return Average;
}

int main()
{
  int iValue1 = 0, iValue2 = 0, iValue3 = 0;
  float fRet = 0.0f;

 cout<<"Enter First number :\n";
 cin>>iValue1;

 cout<<"Enter second number :\n";
 cin>>iValue2;

cout<<"Enter third number :\n";
 cin>>iValue3;
 
 fRet = Average(iValue1,iValue2,iValue3);

 cout<<"Average of three Numbers is:"<<fRet;
 
 return 0;
}