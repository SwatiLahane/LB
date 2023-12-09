
//Accpept number user and Display its factors


#include<iostream>
using namespace std;
 

 //Function to dispaly Factors of Number 
void DisplayFactors(int iNo)
 {
     int iCnt = 0;
     cout<<"Factors of\t"<<iNo<<endl;
     for(iCnt =1; iCnt < iNo; iCnt++)
     {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<"\t";
        }
     } 
 }
/////////////////////////////////////////////////////////////////////////////////////
//
//   ENtry point from where execution get starts
//  
//////////////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0; 
    
    cout<<"Enter Number to caluculate factors:";
    cin>>iValue;
    
    DisplayFactors(iValue); //Function call



    return 0;
}