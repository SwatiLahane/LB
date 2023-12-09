
#include<iostream>
using namespace std;

//Accept number from user and Display that number of times stars on screen

void Display(int iNo)
{
    int icnt =0;
    for(icnt = 1; icnt <= iNo; icnt++)
    {
        cout<<"*\t";
    }
}

int main()
{
    int iValue = 0;
    
    cout<<"Enter Number of times u want to display stars on screen:";
    cin>>iValue;
    
    Display(iValue);
    return 0;
}