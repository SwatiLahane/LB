 //Program Statement: Check Whether the number is Even Or Odd''

//concusion :  We are going to use mod Operator it gives us reminder


//Algorithm
/*

   START

   Accept number from user 
   Divide that number by 2
   If remainder is 0 then display Even 
   otherwise display Odd

    STOP

  */



   #include<stdio.h>
   #include<stdbool.h>

   ////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   //  Function Name  :   CheckEven
   //  Description    :   It is used to check number is Even or Odd
   //  Input          :   integer
   //  Output         :   integer
   //  Author Name    :   Swati vinayak Lahane
   //  Date           :   10 / 02 /2023
   ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
 
   bool CheckEven(int iNon)

   {
       
        if((iNon % 2) == 0)
        {
            return true;

        }
        else

        {
            return false;
        }

   }

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//
//                  Entry Point Function
//
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


  int main()

  {

      auto int ivalue = 0;
      bool bRet = false;

      printf("Enter number : \n");
      scanf("%d", &ivalue);

      bRet = CheckEven(ivalue);

      if(bRet == true)
      {
          printf("%d is an even number \n",ivalue);
      }
      else
      {
            printf("%d is an odd number \n",ivalue);
      }

      return 0; 


  }  

