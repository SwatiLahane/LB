
package Marvellous1;

public class Arithematic1
{
  public int iValue;

  public Arithematic1(int A)
  {
      this.iValue = A;
  }
   
  public int Factorial()
  {
      int iFact =0;
      int iCnt =0;

      for(iCnt =1; iCnt <= iValue;iCnt++)
      {
          iFact = iFact * iCnt;
      }
      return iFact;
  }

}