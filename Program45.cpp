

#include<iostream>
using namespace std;

bool checkPrime(int iNo)
{
    int icnt =0;
    bool bFlag = true;

    if(iNo < 0) //Updater
    {
        iNo = -iNo;
    }
    //    1          2              3       
    for(icnt = 2; icnt <= (iNo/2); icnt++) 
    {
        if((iNo % icnt)== 0) //4
        {
           bFlag = false;
           break;
        }
       return bFlag;
    
    }
}



int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"Enter number :" ;
    cin>>iValue;


    bRet = checkPrime(iValue);
    if(bRet == true)
    {
        cout<<iValue<<" Number is prime";
    }
    
    else
    {
        cout<<iValue<<" Number is not prime";
    }

    return 0;
}
