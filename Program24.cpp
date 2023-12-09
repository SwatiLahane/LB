


//Accept three numbers from user and Find  maximum betten three

#include<iostream>
using namespace std;

int Maximum(int iNo1, int iNo2, int iNo3)
{

    if((iNo1 >= iNo2) && (iNo1 >= iNo3))
    {
        return iNo1;

    }
    


   else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
     {

     return iNo2;

     }

else 
     {

      return iNo3;

     }

}
/////////////////////////////////////////////////////////////////////////////////////////////////////
//
//  ENtry point function from where execution gets starts 
//
/////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0,iRet = 0;

    cout<<"Enter first number :"<<endl;
    cin>>iValue1;

    cout<<"Enter second number:"<<endl;
    cin>>iValue2;
    
    cout<<"ENter third Number :"<<endl;
    cin>>iValue3;

    iRet =  Maximum(iValue1, iValue2, iValue3);
     
     cout<<"Largest number is : "<<iRet;




    return 0;
}