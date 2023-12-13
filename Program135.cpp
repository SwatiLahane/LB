#include<iostream>
using namespace std;

class Array
{
   private:

   int *Arr;
   int iSize;

public:
    Array(int X) //Prameterised constructor 
    {
        iSize = X;
        Arr = new int[iSize];
    }
    ~Array() //Destructor
    {
        delete []Arr;
    }
    void Accept()  //Member functio
    {
   int iCnt = 0;
   cout<<"Please enter the elements: "<<endl;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
       cin>>Arr[iCnt];
   }

}
void Display()  //Member function
{
    cout<<"Elements of the Array are :"<<endl;
    int iCnt = 0;
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<endl;
}

 

};//end of class


int main()
{
  int iLength = 0;
  cout<<"Enter the number of elements that you want to store :"<<endl;
  cin>>iLength;

  Array aobj(iLength); //Static object creation

  aobj.Accept();
  aobj.Display();

    return 0;
}