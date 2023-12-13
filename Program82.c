//Input : 6
//Output A B C D E F

//Write a program which accept character and print character till the number count 
#include<stdio.h>//For scanf and printf 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                      Name Of Function :Display (Linear Pattern)
//                      Description      :Accept  Number from user and Display Pattern
//                      Input Argument   :Integer 
//                      Output Argument  :Integer 
//                      Author           :Swati Vinayak Lahane
//                      Date             :31 October 2023
//                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//Function to print character 
void Display(int iNo)

{

 register int iCnt = 0;  //Variable for initialise counter 
 register char ch ='\0'; //Variable to character
 
 for(iCnt = 1, ch ='A'; iCnt <= iNo; iCnt++, ch++)
 {   
     
     printf("%c\t",ch);    //TO print character on console
     
 }
  printf("\n"); //for Next line
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                          Entry Point Function from where execution get starts 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{ 
    int iValue = 0; 
     
    printf("Enter the number of count:\n"); 
    scanf("%d",&iValue);
    Display(iValue); //Function call

     return 0; //Return Zero to the OS it indicate program successfully get executed

}
//time complexity :n