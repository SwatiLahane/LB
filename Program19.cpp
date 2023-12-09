
#include<iostream>
using namespace std;

void DisplayExamTime(int istandard)
{
    switch(istandard)
    {
     case 1 :
        cout<<"Your Exam is at 8AM\n";
        break;

        case 2 :
        cout<<"Your Exam is at 9AM\n";
        break;

        case 3: 
        cout<<"your exam is at 10 AM\n";
         break;
        case 4:
        cout<<"Your exam is at 11 AM\n";
        break;
        
        case 5:
        cout<<"your exam is at 12 AM\n";
        break;

        default:
        cout<<"Wrong Input ";

    }


}




int main()
{ 

   int iValue = 0;

   cout<<"Enter your Standard :";
   cin>>iValue;
   
   DisplayExamTime(iValue);
 return 0;
}
