//Write a program to accept number from user and count digit in reverse order


#include<iostream>
using namespace std;

//Write a program to accept number from user and count digit in reverse order 
//example firstt 3 milale pahije nanter 32 milele pahije ani tya nanter 321 milele pahije 

int  Reverse(int iNo)
{
    int iDigit = 0;
    int rev = 0;
    
    while(iNo != 0)
    {
      iDigit = iNo % 10;
    
     rev = (rev * 10) + iDigit;
    
      iNo = iNo /10;
    }
    
   return rev;
}


int main()
{
  
  int iValue  = 0;
  
  int iRet = 0;
  cout<<"Enter the Number :";
  cin>>iValue;

   iRet =  Reverse(iValue);
   
   cout<<"Rverse number is :"<<iRet;

return 0;
}

//Inoput: 123
//Output: 321










