
    //Problems on digit 

    //Problem Statement :  to Display digits

    #include<stdio.h>

    void Display(int iNo)
    {
    int iDigit = 0;
    
    iDigit = iNo % 10 ; 
    printf("%d\n",iDigit); //1
    iNo =  iNo / 10; //72
    
    iDigit = iNo % 10 ; 
    printf("%d\n",iDigit); //2
    iNo =  iNo / 10; //7
    
    iDigit = iNo % 10 ; 
    printf("%d\n",iDigit); //7
    iNo =  iNo / 10; //0
    

    }

    ////////////////////////////////////////////////////////////////////////////////////
    //  
    //            Name of Function :
    //            Description      :
    //            Input Argument   :
     //           
    //
    ///////////////////////////////////////////////////////////////////////////////////

    ////////////////////////////////////////////////////////////////////////////////////
    //        
    //                    Entry Point Function                  
    //
    ////////////////////////////////////////////////////////////////////////////////////
   
    int main()

    {
    auto int iValue = 721;
    //printf("Enter Number:");
    //scanf("%d",&iValue);

      Display(iValue); //Function

    return 0;
    }

