
//Display exam time using if else condition 

#include<iostream>
using namespace std;


void DisplayExamTime(int iStandard)

{

      if(iStandard == 1)
      {
       cout<<"Your exam is at 8 AM";
      }

      else if(iStandard == 2)
      {
          cout<<"Your exam is at 9 AM";
      }
      else if(iStandard == 3)
      {
          cout<<"your exam is at 10 am";

      }
      else if(iStandard == 4)
      {
          cout<<"your exam is at 11 AM";
      }
      else if(iStandard == 5)
      {
          cout<<"your exam is at 12 NOON";
      }

     else
     {
         cout<<"Default Input";
     }
 
 }




int main()
{
    int iValue = 0;

    cout<<"Enter your ExamTime :";
    cin>>iValue;
  
   DisplayExamTime(iValue);



    return 0;
}
