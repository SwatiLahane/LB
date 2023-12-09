
#include<iostream>
using namespace std;

void DisplayFactors(int iNo)
{
    int iCnt =0;
     
     cout<<"Factor of "<<iNo<<endl;
     for(iCnt =1 ; iCnt <= (iNo/2); iCnt++)
     {
         if(iNo % iCnt == 0)
         {
             cout<<iCnt;
         }
     }


}

int main()
{
   int iValue =0;

   cout<<"Enter Number\n";
   cin>>iValue; 
   
   DisplayFactors(iValue);


    return 0;
}


//time complexity is O(n/2)