

#include<stdlib.h>//malloc calloc 
#include<iostream>
using namespace std;


void Display(int *Arr,int ilength)
{
      int icnt =0;
      for(icnt = 0; icnt < ilength; icnt++)
      {
          cout<<Arr[icnt]<<"\t";
      }
      cout<<"\n";
}    


int main()
{
     int icnt = 0;
     int iSize = 0;
     int *ptr = NULL;

     
     cout<<"Enter number of elements :";
     cin>>iSize;

    ptr = new int[iSize];  
    cout<<"Dynamic memory gets allocated successfully for "<<iSize<<" elements" ;
    
    cout<<"Enter elements :\n";

    for(icnt =0; icnt < iSize; icnt++)
    {
        cout<<"Enter Element "<<icnt+1<<":";
        cin>>ptr[icnt];
    } 
     Display(ptr,iSize);
     delete ptr;//
    

    return 0;

}