            //accept number and return Sum of digits



            ///////////////////////////////////////////////////////////////////////////////////////////////////////////
            //
            //                      Name Of Function :SumDigit
            //                      Description      :Accept Number from user and return sum of digits in that numbers
            //                      Input Argument   :Integer 
            //                      Output Argument  :Integer 
            //                      Author           :Swati Vinayak Lahane
            //                      Date             :24 October 2023
            ////////////////////////////////////////////////////////////////////////////////////////////////////////////

            #include<stdio.h>

            //Function to return Number sum of digits
            int SumDigit (int iNo)
            {
            int iSum = 0;
            //int iDigit = 0;


            while(iNo > 0)   
            {

               //iDigit = iNo % 10;
               iSum = iSum + (iNo % 10);
               iNo = iNo /10;

            }

            return iSum;

            }

            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
            //
            //            Entry Point Function from where execution get starts
            //
            ///////////////////////////////////////////////////////////////////////////////////////////////////////////////

            int main()

            {

            auto int iValue = 0;
            int iRet = 0;
            printf("Enter Number:");
            scanf("%d",&iValue);

            iRet = SumDigit(iValue); //Function

            printf("Sum of digits are : %d\n",iRet);

               return 0;

            }
            //Test steps
            /*
            inptut : 7521
            Output :15

            Input :234
            Output: 9
            */