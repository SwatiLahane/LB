
//Display Numbers on screen 
#include<iostream>
using namespace std;

void Dispaly(int iNo)
{
     int icnt =0;
     for(icnt =1; icnt <=iNo; icnt++)
     {
         cout<<icnt<<endl;
     }
    

}

int main()
{
   int iValue = 0;

   cout<<"Enter HOw many number of times you want to enter the Hello word on screen: "; 
   cin>>iValue;
   
   Dispaly(iValue);
    return 0;
}