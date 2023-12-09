
//Write a program which accept two integers from user and return its addtion  type 2




#include<iostream>
using namespace std;

//Helper Function
int Add(int iNo1, int iNo2)
{
    int iResult = 0;
    iResult = iNo1 + iNo2;

    return iResult;
}

//////////////////////////////////////////////////////////////////////////////////////
//
//  ENtry point function from where execution get starts 
//
////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
   int iValue1 = 0;
   int iValue2 = 0; 
   int iAns = 0;
   
   cout<<"Enter First Number :"<<endl;
   cin>>iValue1;

   cout<<"Enter First Number :"<<endl;
   cin>>iValue2;


   iAns =  Add(iValue1,iValue2); //Fucntion call
   cout<<"Addition is :"<<iAns;

    return 0;
}