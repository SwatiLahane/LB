
        //Problems on digit 

        //Problem Statement :  to Display digits

        #include<stdio.h>

        void Display(int iNo)
        {
            int iDigit = 0;

            //joparient iNo 0 peksha motha ahe
            //toparient fira
            while(iNo > 0)
            {
                printf("-----------------------------------\n");
                iDigit = iNo % 10;
                printf("Digit is : %d\n",iDigit);
                iNo = iNo / 10;
                printf("Number is : %d\n",iNo);
                

            }
            
        }

        //////////////////////////////////////////////////////////////////////////////
        //  
        //            Name of Function          : Display 
        //            Description               : Display Digits 
        //            Input Argument            : Integer
        //            Output Argument           : Integer
        //            Author                    : Swati Vinayak Lahane
        //            Date                      : 24 October 2023   
        //////////////////////////////////////////////////////////////////////////////

        //////////////////////////////////////////////////////////////////////////////
        //        
        //        Entry Point Function from where execution get  starts               
        //
        //////////////////////////////////////////////////////////////////////////////

        int main()

        {
        auto int iValue = 0;
        printf("Enter Number:");
        scanf("%d",&iValue);

        Display(iValue); //Function Call

        return 0;

        }

