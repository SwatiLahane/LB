
//Write a program which accept two integers from user and return its addition

#include<iostream>
using namespace std;
 

////////////////////////////////////////////////////////////////////////////////////////////////
//
//   Entry point function from where execution gets starts
///////////////////////////////////////////////////////////////////////////////////////////////
int main()
{  

    int iValue1 = 0; 
    int iValue2 = 0;
    int iAns = 0;

    cout<<"Enter First Number :"<<endl;
    cin>>iValue1;

    cout<<"Enter Second Number :"<<endl;
    cin>>iValue2; 
    
    iAns = iValue1 + iValue2;
    cout<<"Addition of Two Numbers :"<<iAns;
    return 0;


}