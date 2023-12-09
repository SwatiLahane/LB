
//Check prime 

#include<iostream>
#include<stdbool.h>
using namespace std;

bool CheckPrime(int iNo)
{

     int icnt = 0;
     if(iNo < 0) //updater
     {
         iNo = -iNo;
     }

     for(icnt = 2; icnt <= iNo; icnt++)
     {
        if((iNo % icnt) == 0)
        {
          return false;
        }  
       
       else
       {
           return true;
       }

     }  


}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number :";
    cin>>iValue;
    
    bRet =CheckPrime(iValue);

    if(bRet == true)
    {
        cout<<iValue<<" Is prime number";
    }
   
    else
    {
        cout<<iValue<<" Is Not a prime Number";
    }

   
    return 0;
}