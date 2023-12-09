
    //Problems on digit 

    //Problem Statement :  to Display digits and value of No 

    #include<stdio.h>

    void Display(int iNo)
    {
    int iDigit = 0;
    
    printf("Value of ino is : %d\n",iNo);

    iDigit = iNo % 10 ; 
    printf("Digit is : %d\n",iDigit);//1
   
    iNo = iNo / 10; //72
     printf("Value of ino is : %d\n",iNo);

    iDigit = iNo % 10 ; 
    printf("Digit is :%d\n",iDigit); //2
    iNo =  iNo / 10; //7
    printf("Value of ino is : %d\n",iNo);

    iDigit = iNo % 10 ; 
    printf("Digit is :%d\n",iDigit); //7
    iNo =  iNo / 10; //0
    printf("Value of ino is : %d\n",iNo);

    }

    //////////////////////////////////////////////////////////////////////////////
    //  
    //            Name of Function : Dispaly 
    //            Description      : Dispaly Digit  
    //            Input Argument   : Integer 
    //            Output Argument  :Integer
    //            Author           :Swati Vinayak Lahane
    //            Date             : 24 Oct 2023
    //////////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////////
    //        
    //       Entry Point Function from where execution get starts                 
    //
    //////////////////////////////////////////////////////////////////////////////

    int main()

    {
    auto int iValue = 721; //Hard Coaded Value 
    //printf("Enter Number:");
    //scanf("%d",&iValue);

      Display(iValue); //Function

    return 0;
    }

