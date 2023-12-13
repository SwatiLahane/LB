
//Problems on Numbers

#include<iostream>
using namespace std;


      /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      //             Function Name          :    Number 
      //             Description            :    Problems on Numbers   
      //             Intput Argument        :    Charracter ,float,Integer,boolean
      //             Output Argument        :    Character ,float,Integer,boolean
      //             Author                 :    Swati Vinayak Lahane 
      //             Date                   :    11 November 2023
      //
      ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


class Number
{

   private : 
    int iNO;
    int iMarks ,iTotal;
    public:
   
    Number(int x, int y)
    {
        iMarks = x;
        iTotal = y;
    }
    Number(int z)
    {
        iNO = z;
    }

    void DisplayFactor()
    {
        
    }
    //logic
   float CalculatePercentage()
   {
     float fResult = 0.0f;
     if(iMarks > iTotal || iMarks < 0 || iTotal < 0)
     {
         cout<<"Invalid Range"<<endl;
         return fResult;
     } 
     fResult = ((float)iMarks/(float)iTotal * 100);
     
    return fResult;

   }
   float AreaOfCircle()
   { 
      float PI = 3.14f;
      float fResult = 0.0f;
      fResult = PI * iNO * iNO; //PI *R*R
       
       return fResult;
   }
  
};

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iValue = 0;
    float fAns = 0.0f;
    float fAns1 = 0.0f;
    

    cout<<"Enter Maraks:"<<endl;
    cin>>iValue1;

    cout<<"Enter Total:"<<endl;
    cin>>iValue2;
   
   Number nobj1(iValue1,iValue2);
   fAns = nobj1.CalculatePercentage();
   cout<<"Percentage is :"<<fAns<<endl; 
   
   cout<<"____________________________________________"<<endl;
   
   cout<<"ENter Radius of circle :"<<endl;
   cin>>iValue;
   Number nobj2(iValue);

   fAns1 = nobj2.AreaOfCircle();
   cout<<"Area of circle is:"<<fAns1<<endl;



    return 0;
}