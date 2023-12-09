
//Accept number from user and display su,m of factors that numnber

#include<iostream>
using namespace std;

int SumOfFactors(int iNo)
{    
    int iCnt =0;
    int iSum =0;

    for(iCnt =1; iCnt <= (iNo/2); iCnt++)
    {
      if(iNo % iCnt == 0)
      {
          iSum = iSum + iCnt;
      } 
       
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0; 
    
    cout<<"Enter Number :";
    cin>>iValue;

     iRet = SumOfFactors(iValue);  //Function call
     cout<<"Sum of Factors is :"<<iRet;

    return 0;
}
