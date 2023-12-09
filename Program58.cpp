

#include<stdlib.h>
#include<iostream>
using namespace std;


//void Display (int *Arr, int ilength) //Arr is pointer 

void Display(int Arr[], int ilength) //(100,6)
{
  int icnt = 0;
  
  cout<<"\nElements of Array are : \n";
  for(icnt =0; icnt < ilength; icnt++)
  {
      //cout<<Arr[icnt]<<"\n";
      cout<<Arr[icnt]<<"\t";
  }   
  cout<<"\n";

}


int main()
{
      int iCount = 0;
      int *ptr = NULL;
      int icnt =0;

    cout<<"Enter number of elements :"; 
    cin>>iCount;

    ptr = new int[iCount];

    cout<<"Dynamic memory gets allocated sucssefully for "<<iCount<<" elements\n";
    
    cout<<"Enter elements:"<<iCount<<"\n";
    for(icnt = 0; icnt < iCount; icnt++)
    {
        cout<<"Enter Element "<<icnt+1<<":";
        cin>>ptr[icnt];
    }
    
    Display(ptr, iCount);(100 , 4);
    
    delete []ptr; //to free the memory 
    cout<<"Dynamic memory gets deallocated successfully....";
 
    return 0;
}
