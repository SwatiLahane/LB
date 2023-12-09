


//Problem statement 
//Display Digits and Numbers

#include<iostream>
using namespace std;

//Function to display digits and the value of nno
void Display(int iNo)
{
     int iDigit = 0;

     iDigit = iNo % 10;
     printf("Digits is :%d\n",iDigit);//1
     iNo = iNo / 10;
     printf("Value of no is :%d\n",iNo);//72

      iDigit = iNo % 10;
     printf("Digits is :%d\n",iDigit);//2
     iNo = iNo / 10;
     printf("Value of no is :%d\n",iNo);//7

      iDigit = iNo % 10;
     printf("Digits is :%d\n",iDigit);//7
     iNo = iNo / 10;
     printf("Value of no is :%d\n",iNo);//0

}

int main()
{

    int iValue = 721;

    Display(iValue); //Function call

    return 0;
}
