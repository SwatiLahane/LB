      //Input :6
      //Output : a b c d e f 

      //Print character int Small letter 

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//                      Name Of Function :Display
//                      Description      :Accept  Number from user and Display Pattern
//                      Input Argument   :Integer 
//                      Output Argument  :Integer 
//                      Author           :Swati Vinayak Lahane
//                      Date             :31 October 2023
//                              
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
      #include<stdio.h>//For scanf and printf 

      void Display(int iNo)
      {
      register int iCnt = 0;  //Variable for initialise counter 
      register char ch ='\0'; //Variable to character
      
      //                1          2              3
      for(iCnt = 1, ch ='a';iCnt <= iNo; iCnt++, ch++;)  // logic 
      {   
          
          printf("%c\t",ch);  //4
          

      }
      printf("\n"); //For next line

      }

  //////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  //
  //                              Entry Point Function from where execution get starts 
  //////////////////////////////////////////////////////////////////////////////////////////////////////////////////

      int main()
      { 
          int iValue = 0;
          
        printf("Enter the number of count:\n");
        scanf("%d",&iValue);
        Display(iValue); //Function call
          return 0;

      }
      //time complexity :n