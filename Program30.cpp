
#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 0; iCnt <=iNo; iCnt++)
    {
     cout<<"Jay Ganesh......."<<endl;
    }
}


int main()
{
   
   int iValue = 0;
   
   cout<<"Enter how many number of times u want to enter Jay ganesh on screen:";
   cin>>iValue;

   Display(iValue); 

    return 0;
}