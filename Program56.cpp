

#include<stdlib.h>
#include<iostream>
using namespace std;
//Problems On n Numbers 
//Write a program to accept N Numbers and display Array Elements

void Display(int Arr[],int ilength)
{
    int icnt = 0;

    for(icnt = 0; icnt < ilength; icnt++)
    {
        cout<<Arr[icnt]<<"\t";
    }
   cout<<endl;
}


int main()
{
    
    int iSize = 0;
    int *ptr = NULL;
    int icnt = 0;

    cout<<"Enter number of elements :";
    cin>>iSize;

    ptr = new int[iSize];
    cout<<"Dynamic memory gets allocated successfully for "<<":" <<iSize <<"Elements"<<endl;

    cout<<"Enter Elements "<<iSize<<":"<<endl;
    
    for(icnt = 0; icnt < iSize; icnt++)
    {
        cout<<"Enter Element "<<icnt+1<<":";
        cin>>ptr[icnt];
 
    }
    
      Display(ptr,iSize);//function call

    return 0;
}