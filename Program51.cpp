


//Write a program to accept number from user and display digits in reverse order 

#include<iostream>
using namespace std;

void ReverseDigit(int iNo)

{      
       int iDigit = 0;
       int rev = 0;
       
       while(iNo > 0)
       {
        iDigit  = iNo % 10;
        //iDigit;
       cout <<iDigit<<"\n";

       iNo = iNo /10;
       }
       
}


int main()
{
    int iValue = 0;

    cout<<"Enter the Number :";
    cin>>iValue;


   ReverseDigit(iValue);


}