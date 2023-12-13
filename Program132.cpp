//problems on number//Accept number from user and find factorial of number
#include<iostream>
using namespace std;

class Number 
{
   private:
    int iNo;

    public:
      Number(int x)
      {
          iNo = x;
      }
      //logic
};


int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"ENter the number :"<<endl;
    cin>>iValue;

   Number nobj(iValue);
    return 0;
}