            
//Accept Number from user and display Sum Of factors of That Number

#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//            Name of Function            :SumFactors
//            Description                 :Accept number from user and display sum of all factors of that  
//            Input Argumenet             :Integer 
//            Output Argument             :Integer 
//            Author                      :Swati Vinayak Lahane
//            Date                        :10 Octombe 22023         
///////////////////////////////////////////////////////////////////////////////////////////////////////////////





//Function to calculate Sum of factors 
            int SumFactors(int iNo)
            {

            int iCnt = 0;
            int iSum = 0;


            for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
            {

                  if((iNo % iCnt) == 0)
                  
                  {
                     iSum = iSum + iCnt;

                  }
                     
                        

            }
                  return iSum;
            }
//////////////////////////////////////////////////////////////////////////////////
//
//           Entery point function
//
//////////////////////////////////////////////////////////////////////////////////////
            int main()
            {

               int iValue = 0;
               int iRet  = 0;

               printf("Enter the Number : \n");
               scanf("%d" ,&iValue);

               iRet = SumFactors(iValue);

               printf("Sum of factors are : %d \n",iRet);

               return 0;

            }

            //Time Complexity  : O(N/2)

         //Test Step
         /* 
         Input :10
         Output: 8
         
         Input :7
         Output:1

         Input :13  
         Output :1

         iNPUT : 12
         Output : 16

         Input : 8
         Outpu : 7 
         */ 