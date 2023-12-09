

#include<iostream>
using namespace std;

//Accept numbers from user and display Numbers in Decresing oreders
void Dispaly(int iNo)
{
   int iCnt = 0;
   
   for(iCnt = iNo; iCnt >= 1; iCnt--)
   {
      cout<<iCnt<<endl;
   }

}

int main()
{
   int iValue = 0;
   
   cout<<"Enter How many times u want to display Numbers on screen:";
   cin>>iValue;

    Dispaly(iValue);
    return 0;
}