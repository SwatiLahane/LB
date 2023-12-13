
//Problems on patterns 

#include<iostream>
using namespace std;

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//             Function Name          :    Pattern
//             Description            :    Function to print different patterns in c++ programming Language using oop template
//             Intput Argument        :    Integer
//             Output Argument        :    Integer
//             Author                 :    Swati Vinayak Lahane 
//             Date                   :    16 November 2023
//             
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Patterns
{

 private :
 int iRow;
 int iCol; 
 int iNo;

 public:
 
 Patterns(int Z)
 {
     iNo = Z;
 }
 Patterns(int X,int Y)
 {
    iRow = X;
    iCol = Y;
 }

/*
   Input  : 5
   Output : A  B  C  D
*/
/*void Display()
{
   int iCnt1 = 0;
   char ch = '\0'; 
   //char ch ='a' //to print small charater
   for(iCnt1= 1,ch ='A' ; iCnt1 <= iNo; iCnt1++)
   { 
    cout<<"\t"<<ch;
    ch++;
   }
   cout<<endl;
} */

/*
   Input  : 5
   Output : 5 # 4 #  3 #  2  #  1  #

*/

/* void Display()
{
   int iCnt1 = 0;
   

   for(iCnt1= iNo; iCnt1 >= 1; iCnt1--)
   { 
    cout<<iCnt1<<"\t#\t"; 
   
   }
   cout<<endl;
}
*/

/*
   Input  : 8
   Output : 2  4  6  8  10  12  14  16 

*/
/*
void Display()
{
   int iCnt1 = 0;
   

   for(iCnt1= 1; iCnt1 <= iNo; iCnt1++)
   { 
    cout<<(iCnt1 * 2) <<"\t"; 
   
   }
   cout<<endl;
}  
*/
/*
   Input  : 5
   Output : 5 # 4 #  3 #  2  #  1  #



 void Display()
{
   int iCnt1 = 0;
   

   for(iCnt1= 1; iCnt1 <= iNo; iCnt1++)
   { 
    cout<<"*\t"<<iCnt1<<"\t#\t"; 
   
   }
   cout<<endl;
}    

*/

 /*  Input  : iRow = 4 iCol = 3
     Output :  *   *   *
               *   *   *
               *   *   *
               *   *   *

   
void Display()
{
   int iCnt1 = 0;
   int iCnt2 = 0;

   for(iCnt1= 1; iCnt1 <= iRow; iCnt1++)
   { 
    
    for(iCnt2= 1; iCnt2 <= iCol; iCnt2++)
     { 
       
       cout<<"*\t"; 
   
     }
   cout<<endl;

}   

}  */

/*  Input  : iRow = 4 iCol = 3
     Output :  1   2   3
               1   2   3
               1   2   3
               1   2   3

   
void Display()
{
   int iCnt1 = 0;
   int iCnt2 = 0;

   for(iCnt1= 1; iCnt1 <= iRow; iCnt1++)
   { 
    
    for(iCnt2= 1; iCnt2 <= iCol; iCnt2++)
     { 
       
       cout<<iCnt2<<"\t"; 
   
     }
    cout<<endl;

}   

}   */

/*  Input  : iRow = 3 iCol = 5
     Output :  5   4   3  2  1
               5   4   3  2  1
               5   4   3  2  1
               5   4   3  2  1


void Display()
{
   int iCnt1 = 0;
   int iCnt2 = 0;

   for(iCnt1= 1; iCnt1 <= iRow; iCnt1++)
   { 
    
    for(iCnt2= iCol; iCnt2 >= 1; iCnt2--)
     { 
       
       cout<<iCnt2<<"\t"; 
   
     }
    cout<<endl;

}   

} */

/*  Input  : iRow = 3 iCol = 5
     Output :  *   #   *  #
               *   #   *  #  
               *   #   *  #  
               *   #   *  #  
               
    */
/*
void Display()
{
   int iCnt1 = 0;
   int iCnt2 = 0;

   for(iCnt1= 1; iCnt1 <= iRow; iCnt1++)
   { 
    
    for(iCnt2= 1; iCnt2 <= iCol; iCnt2++)
     { 
       
       if(iCnt2 % 2 == 0 )
       {
          cout<<"*\t"; 
       }
      
       else
       {
           cout<<"#\t";
       }
     }
    cout<<endl;

}   

} */

/*  Input  : iRow = 4 iCol = 5
     Output :  *   *   *  *
               #   #   #  #  
               *   *   *  *  
               #   #   #  #  
               
    */
/*
void Display()
{
   int iCnt1 = 0;
   int iCnt2 = 0;

   for(iCnt1= 1; iCnt1 <= iRow; iCnt1++)
   { 
    
    for(iCnt2= 1; iCnt2 <= iCol; iCnt2++)
     { 
       
       if(iCnt1 % 2 == 0 )
       {
          cout<<"#\t"; 
       }
      
       else
       {
           cout<<"*\t";
       }
     }
    cout<<endl;

}   

}  */

/*
    iRow = 4
    iCol = 4

    1   1   1   1   
    *   *   *   *   
    3   3   3   3   
    *   *   *   *   

*/
/*

void Display()
{
   int iCnt1 = 0;
   int iCnt2 = 0;
   for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
   {
      for(iCnt2=1; iCnt2 <=iCol; iCnt2++)
      {
         if(iCnt1 % 2 == 0)
         {
            cout<<"\t"iCnt1;
         }
         else
         {
            cout<<"*\t" ;
         }
      }
      cout<<endl;
   }

}
/*
   Input :  iRow = 4   iCol = 4 
    
    Output :   A  B  C  D
               A  B  C  D
               A  B  C  D
               A  B  C  D

  */
/*
 void Display()
 { 
   int  iCnt1 = 0;
   int  iCnt2 = 0;
   char ch  = '\0';

   for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
   {
      for(iCnt2=1,ch = 'A'; iCnt2 <=iCol; iCnt2++,ch++)
      {
        cout<<"\t"<<ch;
      }
      cout<<endl;
   }
  
 }   */


/* void Display()
 { 
   int  iCnt1 = 0;
   int  iCnt2 = 0;
   char ch  = '\0';
   char ch1  = '\0';


   for(iCnt1 = 1; iCnt1 <= iRow; iCnt1++)
   {
      for(iCnt2=1,ch = 'A',ch1='a'; iCnt2 <=iCol; iCnt2++,ch++,ch1++)
      {
         if(iCnt1 % 2 == 0)
         {
          cout<<"\t"<<ch;
         }
         else
         cout<<"\t"<<ch1;
        
      }
      cout<<endl;
   }
  
 }   */


 /*
    Input :iRow = 3   iCol = 5
    output :  A  A  A  A  A  A
              B  B  B  B  B  B
              C  C  C  C  C  C

*/ 

/*
  void Display()
 { 
   int  iCnt1 = 0;
   int  iCnt2 = 0;
   char ch  = '\0';
   

   for(iCnt1 = 1,ch = 'A'; iCnt1 <= iRow; iCnt1++,ch++)
   {
      for(iCnt2=1; iCnt2 <=iCol; iCnt2++)
      {
        
         cout<<"\t"<<ch;
      }
        
       cout<<endl;
      }
     
   }    */
  
  /*
     Input:   iRow = 4     iCol = 5

     Output :    4  4  4  4  4
                 3  3  3  3  3
                 2  2  2  2  2
                 1  1  1  1  1
  */

 /*  void Display()
 { 
   int  iCnt1 = 0;
   int  iCnt2 = 0;

   

   for(iCnt1 = iRow; iCnt1 >=1; iCnt1--)
   {
      for(iCnt2=1; iCnt2 <=iCol; iCnt2++)
      {
        
         cout<<"\t"<<iCnt1;
      }
        
       cout<<endl;
      }
     
   }     */
  
  /*
      1  2   3   4  
      5  6   7   8 
      9  10  11  12
      
  */
 
 /* void Display()
 { 
   int  iCnt1 = 0;
   int  iCnt2 = 0;
   int iNo = 1;

   for(iCnt1 = iRow; iCnt1 >=1; iCnt1--)
   {
      for(iCnt2=1; iCnt2 <=iCol; iCnt2++)
      {
        
         cout<<"\t"<<iNo;
         iNo++;
      }
        
       cout<<endl;
      }
     
   }    
   */


 /* Input : iRow = 5 iCol = 5
  Output :  
            a  b  c  d  e 
            1  2  3  4  5
            a  b  c  d  e
            1  2  3  4  5

  */ 
 /* void Display()

 { 
   int  iCnt1 = 0;
   int  iCnt2 = 0;
   
   char ch = '\0';

   for(iCnt1 = 1; iCnt1 <=iRow; iCnt1++ )
   {
      for(iCnt2=1,ch= 'a'; iCnt2 <=iCol; iCnt2++,ch++)
      {
          if(iCnt1 % 2 != 0)

          {
             cout<<"\t"<<ch;
          }
          else
          {
             cout<<"\t"<<iCnt2;
           
           }
          
         
      }
        
       cout<<endl;
      }
     
   }
 */

 /*
    Input :iRow = 3   iCol = 5
    output :  A  A  A  A  A  A
              B  B  B  B  B  B
              C  C  C  C  C  C

*/ 

/*
  void Display()
 { 
   int  iCnt1 = 0;
   int  iCnt2 = 0;
   char ch  = '\0';
   

   for(iCnt1 = 1,ch = 'A'; iCnt1 <= iRow; iCnt1++,ch++)
   {
      for(iCnt2=1; iCnt2 <=iCol; iCnt2++)
      {
        
         cout<<"\t"<<ch;
      }
        
       cout<<endl;
      }
     
   }  */

/*  
    Input : iRow = 4  ,  iCol = 4
    *
    *  *
    *  *   *
    *  *   *   *
 */

/*  
  Input : iRow = 4   iCol = 4
  Ouptut
      j

    $  &  $  &
i   $  &  $  &
    $  &  $  &
    $  &  $  &

*/

/*
 void Display()
 {
    int iCnt1 = 0;
    int iCnt2 = 0; 

    for(iCnt1= 1; iCnt1 <= iRow; iCnt1++)
   {
      for(iCnt2= 1; iCnt2 <=iCol; iCnt2++)
        {
           if(iCnt2 % 2 == 0)
           {
             cout<<"&\t";
           }
           else
           {
              cout<<"$\t";
           }
        }
       cout<<endl<<endl;
    }
}    
*/
 
 /*  
  Input : iRow = 4   iCol = 4
  Ouptut
      j

    1  1  1  1
i   1  1  1  1
    1  1  1  1
    1  1  1  1

*/

/*
 void Display()
 {
    int iCnt1 = 0;
    int iCnt2 = 0; 
   
    for(iCnt1= 1; iCnt1 <= iRow; iCnt1++)
   {
      for(iCnt2= 1; iCnt2 <=iCol; iCnt2++)
        {
          cout<<"1\t";
        
        }  
       cout<<endl<<endl;
    }
}  

*/

/*  
  Input : iRow = 4   iCol = 4
  Ouptut
      j

    1  *  *  *
i   *  2  *  *
    *  *  3  *
    *  *  *  4

*/
/*
void Display()
 {
    int iCnt1 = 0;
    int iCnt2 = 0; 
   
    for(iCnt1= 1; iCnt1 <= iRow; iCnt1++)
   {
      for(iCnt2= 1; iCnt2 <=iCol; iCnt2++)
        {
          if(iCnt1 == iCnt2)
          {
             cout<<iCnt1<<"\t";
          }
          else
          {
             cout<<"*\t";
          }
        
        }  
       cout<<endl<<endl;
    }
}   */    

/*
Input  : iRow = 4   iCol = 4
Ouptut :

    *  *  *  1
i   *  *  2  *
    *  3  *  *
    4  *  *  *

*/
   
/*
void Display()
 {
    int i = 0;
    int j = 0; 
   
    for(i =1; i<=iRow; i++)  //Inner loop
   {
       for(j =1; j <=iCol; j++) //Outer loop
       {

         if( j == iRow + 1-i) //(5-i)
         {
             cout<<i<<"\t";
          }
          else
          {
             cout<<"*\t";
          }
        
        }  
       cout<<endl<<endl;
    }
}  
*/

/*
Input  : iRow = 4   iCol = 4
Ouptut :

    *  *  *  #
i   *  *  #  *
    *  #  *  *
    #  *  *  *

*/
/* void Display()
{
   int i = 0;
   int j = 0;
   for(i =1; i<=iRow; i++)  //Inner loop
   {
       for(j =1; j <=iCol; j++) //Outer loop
       {

         if( j == iRow + 1-i) //(5-i)
    
        {
           printf("#\t");
        }
        else 
        {
            printf("*\t");
        } 
        
      }
       printf("\n\n");
   
    }
}  */


/*
Input  : iRow = 4   iCol = 4
Ouptut :

    *  *  *  #
i   *  *  #  *
    *  #  *  *
    #  *  *  *

*/

/*
 void Display()
{
   int i = 0;
   int j = 0;
   for(i =1; i<=iRow; i++)  //Inner loop
   {
       for(j =1; j <=iCol; j++) //Outer loop
       {

         if(i==1 || j==iRow || j==1 || iCol == i) 
    
        {
           printf("#\t");
        }
        else 
        {
            printf("$\t");
        } 
        
      }
       printf("\n\n");
   
    }
}  */

/*  
  Input : iRow = 4   iCol = 4
  Ouptut
      j

    1  *  *  *
i   *  2  *  *
    *  *  3  *
    *  *  *  4

*/

void Display()
 {
    int i = 0;
    int j = 0; 
   
    for(i= 1; i <= iRow; i++)
   {
      for(j = 1; j <=iCol; j++)
        {
          if(i==j)
          {
             cout<<"#\t";
          }
          else if(i<j)
          {
             cout<<"$\t";
          }
          else 
          {
             cout<<"*\t";
          }
        }  
       cout<<endl<<endl;
    }
}   

 };

int main()
{
  
  int iValue1 = 0 ;
   int iValue=0;
  int iValue2 = 0;
  
  // cout<<"Enter Number Of Elements"<<endl;
   //cin>>iValue;

  cout<<"Enter Number of Row"<<endl;
  cin>>iValue1;

  cout<<"Enter Number of Columns"<<endl;
  cin>>iValue2;
  
  
  //Dynamic object creation
   
   //Patterns *pobj = new Patterns(iValue);
   //pobj->Display();

  //delete pobj; //to free the memory


  Patterns *pobj1 = new Patterns(iValue1,iValue2);
  pobj1->Display();

    return 0;
}