#include<stdio.h>

void Display(int iNo)
{

   auto int iCnt = 0;
    
    
  //      1            2        3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("Jay Ganesh...\n");  //4
    }
    
}


int main()
{  
    auto int iValue = 0;
    printf("Enter Number of times you want to dispaly jay Ganesh on screen\n");
    scanf("%d",&iValue);
    
    Display(iValue);
    //Display(8);

    return 0;
}