          //problems on numbers

          #include<iostream>
          using namespace std;
          #include<stdbool.h>

          #define TRUE 1
          #define FALSE 0
          typedef int BOOL;

      /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
      //
      //             Function Name          :    Number 
      //             Description            :    Problems on Numbers   
      //             Intput Argument        :    float,Integer,boolean
      //             Output Argument        :    float,Integer,boolean
      //             Author                 :    Swati Vinayak Lahane 
      //             Date                   :    11 November 2023
      //
      ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

          class Number 
          {
          private:
          int iNo;
          int iNo1;
          int iNo2 ;
          
          
          int iMarks ,iTotal;

          public:

          
          Number(int x)
          {
          iNo = x;

          } 
          Number(int y,int z)
          {

          iNo1 = y;
          iNo2 = z;
            
          }
          Number(int a ,int b,int c)
          {
            iNo =a;
            iNo1 =b;
            iNo2 =c;
          }
          
          int Multi()
          {
            
            int iResult = 0;
            iResult = iNo * iNo1 * iNo2;

            return iResult;
          }

          BOOL checkEqual()
          {
              if(iNo1 == iNo2)
              {
                return TRUE;
              }
              else
              {
                return FALSE;
              }

          }  
          BOOL CheckGreater()
          {
              if(iNo1 > iNo2)
              {
                return TRUE;

              }
              else
              {
                return FALSE;
              }

          }   
          BOOL CheckEven()
          {
            if(iNo % 2 == 0)
            {
              return TRUE;
            }
            else
            {
              return FALSE;   
            }
            
          }
        
          long int CalculateCube()
          {
            long int iCube = 0;
            iCube = iNo * iNo * iNo;
            return iCube;

          }

          long int Factorial()
          {
          int iCnt = 0;
          long int iFact = 1;

          for (iCnt = 1; iCnt <= iNo; iCnt++)
          {
              iFact = iFact * iCnt;
          }
          return iFact;
          }


          int Addition()
          {  
          int iSum = 0 ;

          iSum = iNo1 + iNo2; 
          return iSum;
          }

          int Multiplication()
          {
          int iResult =0 ;
          iResult = (iNo1 * iNo2); 
          return iResult;
          }

          int Division()
          {
            int Div = 0;
            Div = (iNo1 / iNo2);
            return Div;
          }
          
          int Max()
          {
            int iLarge = 0;
            if(iNo1 > iNo2 )
            {
              return iNo1;
            }
            else
            {
              return iNo2;
            }

          }
          
          int Min()
          {
            if(iNo1 < iNo2)
            {
              return iNo1;
            }
            else
            {
            return iNo2;
            }
          
          }

      };

    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    //
    //             Entry Point Function from where execution get starts
    // 
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


          int main()
          {

          int iValue = 0,iValue1 = 0,iValue2 = 0;
          BOOL bRet = FALSE;
          long int iRet = 0 ; int iRet2 = 0;
          int iRet1 = 0;
          long int iAns = 0; 
          
          

          cout<<"Enter the number :"<<endl;
          cin>>iValue;

          /* Number nobj(iValue); //Static object creation
          iRet = nobj.Factorial();
          cout<<"Factorial is :"<<iRet<<endl;*/
        
          cout<<"---------------------------------------"<<endl;
          
          cout<<"Enter First Number : "<<endl;
          cin>>iValue1;
          cout<<"Enter Second Number :"<<endl;
          cin>>iValue2; 
          
          /* 
          Number nobj2(iValue1,iValue2);
          iAns = nobj2.Addition(); 
          cout<<"Sum is :"<<iAns<<endl;

            Number nobj3(iValue1,iValue2);
          iAns = nobj3.Multiplication();

          cout<<"Multiplication is:"<<iAns<<endl;
          
          cout<<"---------------------------------------"<<endl;
          
          Number nobj4(iValue1,iValue2);
          iAns = nobj4.Division();
          cout<<"Division is:"<<iAns<<endl;

        
          cout<<"---------------------------------------"<<endl;

          Number nobj5(iValue);
          iAns = nobj5.CalculateCube(); 
          cout<<"Cube is :"<<iAns<<endl;
          
          cout<<"---------------------------------------"<<endl;
          
          Number *nEven = new Number(iValue);
            bRet = nEven->CheckEven();
          if(bRet == TRUE)

          {
            cout<<"Even Number\n"<<endl;
          }

          else
          {
            cout<<"Odd Number\n"<<endl;
          }

          delete nEven;

          cout<<"---------------------------------------"<<endl;
          Number *nMax = new Number(iValue1,iValue2);
          iAns = nMax->Max();
          
          cout<<"Largest Number is :"<<iAns<<endl;
          delete []nMax;

          cout<<"---------------------------------------"<<endl;
          Number *nptr = new Number(iValue1,iValue2);
          iAns = nptr->Min();
          
          cout<<"Smallest Number is :"<<iAns<<endl;
          delete nptr; 
        
          cout<<"---------------------------------------"<<endl;
          
          //Dynamic object creation
          Number *nptr1 = new Number(iValue);
          bRet = nptr1 -> CheckGreater(); 
          
          if(bRet == TRUE)
          {
              cout<<"Greate\n";
          } 
          else
          {

          cout<<"Greate\n";

          }
          delete nptr1;
        */
          cout<<"---------------------------------------"<<endl;
          //Dynamic Object Creation  of Check Equal
          
          Number  *nptr2  = new Number(iValue1,iValue2);
          bRet = nptr2 -> checkEqual();
          if(bRet == TRUE)
          {
              cout<<"Number is equal"<<endl;
          }  
          else
          {
            cout<<"Number is not equal"<<endl;
          }
          
          
          cout<<"---------------------------------------"<<endl; 
          
          Number *nptr3 = new Number(iValue,iValue1,iValue2);
          iRet = nptr3 -> Multi();
          cout<<"Multiplication is:"<<iRet<<endl;
            
          return 0;

          }