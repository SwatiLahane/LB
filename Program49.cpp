
//Accept number from user and count how many digit in that number 

#include<iostream>
using namespace std;

int Display(int iNo)

{
    int iDigit = 0;
    int count = 0;
   
    while(iNo > 0)
    {
       // iDigit = iNo % 10;
      
        iNo = iNo / 10;
          count++;
    } 
    
      return count;
}

int main()
{
    int iValue =0;
    int  iRet = 0;
    cout<<"Enter the Number:";
    cin>>iValue;
    
    iRet = Display(iValue);
    cout<<"Count of digits is "<<iRet ;
    return 0;
}