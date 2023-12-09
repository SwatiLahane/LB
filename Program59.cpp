
//accept N number and print even number in elements of array

#include<stdlib.h>
#include<iostream>
using namespace std;

void DisplayEven(int *Arr,int ilenght)// (100,4)
{
     int iCnt =0;
     cout<<"\nEven elements of the Array:\n";
     for(iCnt =0 ; iCnt < ilenght; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
          {
              cout<<Arr[iCnt];
          }
          cout<<endl;
    }
}


int main()
{   

    int icount =0;
    int icnt =0;
    int *ptr = NULL;
    cout<<"Enter number of elements:";
    cin>>icount;

    ptr = new int[icount];
    cout<<"Dynamic memory gets allocated successfully for "<<icount<<"Elements"<<"\n";

    cout<<"Enter elements "<<icount<<"\n";

    for(icnt =0; icnt < icount; icnt++)
    {
        cout<<"Enter Element"<<icnt+1<<":";
        cin>>ptr[icnt];    
        
    }
    
    DisplayEven(ptr ,icount);//(100, 6)
    
    delete []ptr; //delete memory 
    cout<<"Dynamic memory gets deallocated successfully";

    return 0;
}