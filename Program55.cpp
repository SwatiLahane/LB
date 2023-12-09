
//Problem on N Number in Array 

#include<iostream>
using namespace std;
#include<stdlib.h> //For malloc 

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Name Of Function :Problems on N Numbers (Array) in c++
//                                 Description      :Accept N Number from user and Display That Numbers 
//                                 Input Argument   :Integer 
//                                 Output Argument  :Integer 
//                                 Author           :Swati Vinayak Lahane
//                                 
//                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
    int iSize = 0;
    int *ptr = NULL; 
    int icnt = 0;

    cout<<"Enter the How many elements you want to enter number: ";
    cin>>iSize;
    
       
      //ptr =  new (iSize * sizeof(int)); 
       ptr = new int[iSize];  //Dynamic memory allocation  in c++

     
     for(icnt = 0; icnt < iSize; icnt++)
     {
       cout<<"Enter Number "<<icnt+1 <<":";
       cin>>ptr[icnt];

     }
     cout<<"your enter elements are \n";
       for(icnt = 0; icnt < iSize; icnt++)
       {
          cout<<ptr[icnt]<<"\n";
       }
    

  return 0;

}