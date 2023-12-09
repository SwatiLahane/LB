

//Write a program check  perfect number
#include<stdbool.h>
#include<iostream>
using namespace std;


bool checkPerfect(int iNo)
{  
    int icnt = 0;
    int sum = 0;
   
   for(icnt = 1; icnt <= (iNo/2); icnt++)
   {
     if((iNo % icnt) == 0)
     {
       sum =sum + icnt;
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

///////////////////////////////////////////////////////////////////////////////////////////////
//
// 
//   Entry point Function
//
////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
  
   int iValue =0 ;
   bool bRet = false;


  cout<<"Enter Number:\n";
  cin>>iValue;

  bRet = checkPerfect(iValue); 
  
  if(bRet == true )
  {
    cout<<iValue<<" is"<<" perfect number"<<endl;
  }
  else
  {
     cout<<iValue<<" is"<<" not perfect number"<<endl;

  }
 

 return 0;
}