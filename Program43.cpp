
// check perfect only positive perfect


#include<iostream>
#include<stdbool.h>
using namespace std;

bool checkFactors(int iNo)
{ 
    int icnt = 0;
    int sum = 0;
    
    if(iNo < 0) //Updator
    {
        iNo = -iNo;
    }

    for(icnt =1; icnt <= (iNo/2); icnt++)
    {
        if((iNo % icnt) == 0)
        {
            sum = sum + icnt;
        }
    }
    
    if(sum == iNo)
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
   bool bRet = 0;

   cout<<"Enter number :";
   cin>>iValue;

   bRet = checkFactors(iValue);
   
   if(bRet == true)
   {
      cout<<iValue<<" is Perfect Number ";
   }
   else
   {
       cout<<iValue<<" is not a Perfect Number";
   }
  

    return 0;
}