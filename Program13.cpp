

//Program Statement: Check Whether the number is Even Or Odd''
#include<stdbool.h>
#include<iostream>
using namespace std;


bool CheckEvenOrOdd(int iNo)
{  
    int icnt = 0;
   if(iNo % 2 == 0)
   {
       return true;
   }
   else
   {
     return false;
   }
    

}
 
int main()
{
   int iValue = 0;
   bool bRet = false;

   cout<<"ENter Number :";
   cin>>iValue;

   bRet = CheckEvenOrOdd(iValue);
   
   if(bRet == true)
   {
       cout<<iValue<<" Is Even Number ";
   }
   else
   {
       cout<<iValue<<" Is Odd Number ";
   }

    return 0;
}