
//Write a program which accept number from user and return its cube


#include<iostream>
using namespace std;


//Function which one number from user and calculate its cube 
long int CalculateCube(int iNo)
{
   int iAns = 0;
   iAns = iNo * iNo * iNo;
   
   return iAns;

}
///////////////////////////////////////////////////////////////////////////////////////////////////////////
/////
///   Entry point function from where execution get starts
//
////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number :");
   scanf("%d",&iValue);

   iRet = CalculateCube(iValue); //Function call
    
    printf("Cube is :%d ",iRet);


    return 0;
}
