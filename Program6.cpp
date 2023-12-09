
//Write a program which accept two integers from user and return its addtion  type 2




#include<iostream>
using namespace std;

//Helper Function
int Addition(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;

    return iSum;
}

//////////////////////////////////////////////////////////////////////////////////////
//
//  ENtry point function from where execution get starts 
//
////////////////////////////////////////////////////////////////////////////////////////

int main() 
{
   int iValue1 = 0;  //Variable to store first value
   int iValue2 = 0; //variable to store second value
   int iAns = 0;  //Variable to store result
   
   cout<<"Enter First Number :"<<endl;
   cin>>iValue1;

   cout<<"Enter First Number :"<<endl;
   cin>>iValue2;


   iAns =  Addition(iValue1,iValue2); //Fucntion call Addition function
   cout<<"Addition is :"<<iAns;

    return 0;
}

//test Cases

//intput  10 20
//Output : 30

//intput  -10 -20
//Output : -30