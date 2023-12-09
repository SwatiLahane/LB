

//Calculate Percentage 

#include<iostream>
 using namespace std;

float CalculatePer(int iMarks,int iTotal)
    {   


       float Percentage = 0.0f;
        
        if((iMarks < 0 ) || (iTotal < 0) || (iMarks > iTotal))  //Filter
        {
            cout<<"Invalid Input \n";
            return Percentage;
        }

       Percentage = (((float)iMarks / (float)iTotal ) * 100);
        return Percentage;
    }
 

 int main()
 {
   int iValue1 = 0;
   int iValue2 = 0;
   float fRet = 0.0f; 

   cout<<"Enter Marks:";
   cin>>iValue1;
   
   cout<<"Enter Total Marks:";
   cin>>iValue2;

   fRet = CalculatePer(iValue1,iValue2);   
    
    cout<<"Percentage is : "<<fRet;
     return 0;
 }