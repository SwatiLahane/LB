

//Calculate Percentage 

#include<iostream>
 using namespace std;

float CalculatePer(int iMarks,int iTotal)
    {   


       float fAns = 0.0f;
        
         if((iMarks < 0) || (iTotal < 0))    //Filter
         {
             cout<<"Invalid Input \n";
             return fAns;
         }

         if(iMarks > iTotal)
         {
            return fAns;
         }

       fAns = (((float)iMarks / (float)iTotal ) * 100);
        return fAns;
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