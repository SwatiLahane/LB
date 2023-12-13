
    #include<iostream>
    using namespace std;
    #include<stdbool.h>

    #define TRUE 1
    #define FALSE 0

    typedef int BOOL;
    //Problems on Digit

        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        //              
        //             Function Name          :    Digit
        //             Description            :    Problems Digits int c++ (using oop)  
        //             Intput Argument        :    Integer,boolean
        //             Output Argument        :    Integer,boolean
        //             Author                 :    Swati Vinayak Lahane 
        //             Date                   :    21 November 2023
        //
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    class Digit
    {
        private :
        int iNo;

        public:
        Digit(int x)
        {
            iNo = x;
        }
    
    //1.Write a program which accept number from user and display its digts in reverse order
    
    //Input 2395
    /* Output
        5
        4
        3
        2
        1        */

    /*void Display()

    {
        int iDigit = 0;
        
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        while(iNo > 0)
        {
            iDigit = iNo % 10;
            cout<<"\n"<<iDigit;
            
            iNo = iNo / 10;

        }
    } */

    //Function to check wheather it contains zero or not 

    //intput  :2345 
    // output :Not Contains zero

    //Input : 9008
    //Output : Not contains zero

    /*BOOL Display()
    {
        int iDigit = 0;

        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        else
        {
            return FALSE;
        }

        iNo = iNo / 10;

    } */
    
    //Count frequency of 2 in given number 
    //Input : 2395
    //output :1
    //Input :1018
    //Output : 0

  /*  int Display()
    {

    int iDigit = 0;
    int Count = 0;
    iDigit = iNo % 10 ;
    
    while(iNo > 0)
    {
        
    iDigit = iNo % 10;
        
    if(iDigit == 2)
    {
        Count++;
    }
        
    iNo = iNo / 10;
        
    }
    return Count;
    }*/

/*int Display()
{
    int iDigit = 0;
    int Count = 0;

    while(iNo > 0)
    {
        
    iDigit = iNo % 10;
        
    if(iDigit < 6)
    {
        Count++;
    }
        
    iNo = iNo / 10;
        
    }
    return Count;
    
}*/

//Function to print count digit in reverse order ex 522 (reverse digit sholud be 225 )  
/*int Display()
{
  int iDigit = 0;
  int iRev = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
    iDigit = iNo % 10;
   
    iNo = iNo / 10;
    iRev = (iRev *10) + iDigit; 
 }
  return iRev;
}*/

//Count Even digit in Number 

  /*  int Display()
    {
       int iDigit = 0;
        int iCount = 0;

       while(iNo != 0)
       {
        
      iDigit = iNo % 10;
      if(iDigit % 2 == 0)
       {

        iCount++;
       
       }
    iNo = iNo / 10;
     
   }  
    return iCount++;
} */

// count  of odd Digit 
/*int Display()
    {
        int iDigit = 0;
        int iCount = 0;

       while(iNo != 0)
       {
        
      iDigit = iNo % 10;
      if(iDigit % 2 != 0)
       {

        iCount++;
       
       }
    iNo = iNo / 10;
     
   }  
    return iCount++;
} */

//Multiplication of all digits
int Display()
    {
       int iDigit = 0;
        int iMulti = 1;
        
       while(iNo != 0)
       {
        
      iDigit = iNo % 10;
       
      iMulti = iMulti * iDigit;
      iNo = iNo / 10;
     
   }  
    return iMulti;
}


};

    int main()
    {

        int iValue = 0, iRet = 0; 
        BOOL bRet = FALSE;

        cout<<"Enter the number : "<<endl;
        cin>>iValue;
        
        // Digit nobj(iValue);
        
        
        /*bRet = nobj.Display();
        
        if(bRet == TRUE)
        {
            cout<<"It contains Zero "<<endl;

        }
        else
        {
            cout<<"Not contains zero"<<endl;
        }
        */
        
        Digit nobj(iValue);
        iRet = nobj.Display();
         
       // cout<<"Even Count is :"<<iRet<<endl;
        //cout<<"Odd Count is :"<<iRet<<endl;
        cout<<"Multiplication of All digits: "<<iRet<<endl;
        
        return 0;
    }