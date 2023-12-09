 

#include<stdlib.h> //For malloc and free
#include<stdio.h> //for printf and scanf


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                                 Name Of Function :Problems on N Numbers (Array)
//                                 Description      :Accept N Number from user and Display That Numbers 
//                                 Input Argument   :Integer 
//                                 Output Argument  :Integer 
//                                 Author           :Swati Vinayak Lahane
//                                 Date             :29 October 2023
//                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()

{
   
   auto int iCount = 0;
   int *ptr = NULL;
   int icnt = 0;
   printf("Enter the Number of element :\n");
   scanf("%d",&iCount);

  ptr = (int *)malloc(iCount * sizeof(int));  //Dynamic memory allocation

  printf("Enter the elements : \n");
  
  for(icnt = 0 ; icnt < iCount; icnt++)
  {
      scanf("%d", &ptr[icnt]);
  }
  
  printf("Your Entered element are : \n");
  for(icnt = 0 ; icnt < iCount; icnt++)
  {
     printf("%d\t", ptr[icnt]);
  }

  
      

 printf("\n");

    return 0;
}