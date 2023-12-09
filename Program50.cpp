
//accept number from user and return sum of digits

#include<iostream>
using namespace std;


//Functm to s=display sum of  digits in C++
  int SumDigits(int iNo)
  {
        int iDigit = 0;
        int iSum = 0;
       
        while(iNo > 0)
        {
          iDigit = iNo % 10;
          iSum = iDigit + iSum;
          
          iNo = iNo / 10;

        }
     return iSum;
   
}


/////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Entry point function from where execution get starts
/////////////////////////////////////////////////////////////////////////////////////////////////
int main()

{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Number";
    cin>>iValue;

     iRet = SumDigits(iValue);
     
     cout<<"Sum of digits are : "<<iRet;
     return 0 ;
}