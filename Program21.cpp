
//Write a program to display Maximum number 


#include<iostream>
using namespace std;



int Maximum(int iNo1, int iNo2)
{
    if(iNo1 > iNo2)
    {
        return iNo1;
    }
    else
    {
        return iNo2;
    }

}

int main()
{
   int iValue1 = 0;
   int iValue2 = 0;
   int iRet = 0;

   cout<<"Enter first Number :\n";
   cin>>iValue1;

   cout<<"Enter second Number :\n";
   cin>>iValue2;
   
   iRet = Maximum(iValue1, iValue2); 
    
   cout<<"Largest Number is :"<<iRet;     



    return 0;
}