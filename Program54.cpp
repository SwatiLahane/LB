//Write a program to accept number from user and check palindrome

#include<stdbool.h>
#include<iostream>
using namespace std;

//Input : 111  
//Is palindrome 
//Input 3456
//Output : not palindrome
//Input : 141 
//Output :is palindrome 

bool checkPalindrome(int iNo)
{
   int icopy = iNo;
   int iDigit = 0;
   int iRev = 0;
    
    //joparient ino zero hot toparient phira 
   while(iNo != 0)
   {
     iDigit = iNo % 10;
     iNo = iNo /10;
     iRev = (iRev * 10) + iDigit;
   
   }
   
   return(iRev == icopy);

}


int main()
{

   int iValue = 0;
   bool bRet = false;

   cout<<"Enter Number :";
   cin>>iValue;
   
   bRet = checkPalindrome(iValue);

   if(bRet == true)
   {
      cout<<iValue <<" Is Palindrome Number"; 
   } 
   else
   {
       cout<<"Is Not Palindrome Number ";
   }
    return 0;

}