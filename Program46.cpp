
//Problems on digits :Display digits


#include<iostream>
using namespace std;


//Function to display digits 
void Display(int iNo)
{
    int iDigit = 0;
    
    iDigit = iNo % 10;
    printf("Digits is %d\n",iDigit); //1
    iNo = iNo / 10;  //27

    iDigit = iNo % 10;
    printf("Digits is %d\n",iDigit);//7
    iNo = iNo / 10; //2

    iDigit = iNo %  10;
    printf("Digits is %d\n",iDigit);//2
    iNo = iNo /10; //0


}

int main()
{
   
    int iValue =271; 
     Display(iValue);  //Function call
}