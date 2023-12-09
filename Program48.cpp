
//Problems on digit

//Accept number from user and Display Digits 

#include<iostream>
using namespace std;


void Display(int iNo)
{
    int iDigit = 0;
     
     //joparient ino zero pekshamotha aahe to parient phira  
   
    while(iNo > 0)
    {
       cout<<"-----------------------------------\n";
       iDigit = iNo % 10;
       cout<<"digt is \n"<<iDigit<<"\n";
       iNo = iNo / 10;
       cout<<"Number is \n"<<iNo<<"\n";

    }

}   

int main()
{
    int iValue = 0;

     cout<<"Enter the number:";
     cin>>iValue;

     Display(iValue);//Function call

    return 0;
}
