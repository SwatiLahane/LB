

#include<iostream>
using namespace std;

//Accept two integer numbers from user and display smallest number between two numbers 

int Smallest(int iNo1 , int iNo2)
{
   if(iNo1 < iNo2)
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
    cout<<"Enter First Number :";
    cin>>iValue1;

    cout<<"Enter Second Number :";
    cin>>iValue2;

    iRet = Smallest(iValue1, iValue2);
    cout<<"Smallest Number is "<<iRet;
    return 0;
}

//Test casese
//Input : 10 20
//input 20 is smallest 

//INput -10 -5
//Output smallest number is -10
