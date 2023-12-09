

//accept n numbers from user and return even number of count 

#include<stdlib.h>
#include<iostream>
using namespace std;


int EvenCount(int Arr[],int ilength)
{
     int icnt = 0;
     int icount = 0;

    cout<<"\nEven Elements of the array are : \n";
    for(icnt = 0; icnt < ilength; icnt++)
    {
        if(Arr[icnt] % 2 == 0)
        {
           icount++;
        }
    }
   return icount; 

} 

int main()
{    
    int iSize = 0;
    int *ptr = NULL; 
    int icnt =0, iRet =0;
    cout<<"Enter number of elements :";
    cin>>iSize;

    ptr = new int[iSize];
    cout<<"Dynamic mempory allocated successfully for "<<iSize<<"elements"<<"\n";
    
    cout<<"Ententer Elements "<<iSize<<"\n";

    for(icnt = 0; icnt < iSize; icnt++)
    {
        cout<<"Enter Element "<<icnt + 1 <<":";
        cin>>ptr[icnt];
    }
    
    iRet = EvenCount(ptr, iSize);//function call
    
    cout<<"Even count are :"<<iRet<<endl;

    delete []ptr;//100
    cout<<"Dynamic memory deallocated successfully.....";
    

    
    return 0;
}

