

//check perfect number  only positive perfect
//perfect number is sum of factors of that is number is same  number (example jyachay factor chi sum toh number bhetato)
//example to check 6 is perfect or not factor of 6 is 1 2 3 =sum of factor is 6 so 6 is perfect num

#include<iostream>
using namespace std;
#include<stdbool.h>

bool checkPerfect(int iNo)
{
     int icnt = 0;
     int sum = 0;
     

     for(icnt =1; icnt <= (iNo/2); icnt++)
     {
         if((iNo % icnt)==0)
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
    bool bRet = false;

    cout<<"Enter Number :";
    cin>>iValue;

    bRet = checkPerfect(iValue);
    
    if(bRet == true)
    {
      cout<<iValue<<" is  Perfect Number "; 
    }
    else
    {
        cout<<iValue<<" is not perfect Number ";
    }


    return 0;
}