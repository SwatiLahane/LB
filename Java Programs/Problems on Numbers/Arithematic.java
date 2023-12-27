package Marvellous;

public class Arithematic
{
    public int iValue1;
    public int iValue2;

public Arithematic(int A ,int B)
{
    this.iValue1 = A;  //this.value1 means we can identify it is a characteristic of class
    this.iValue2 =B; 

}

 public int Addition()
 {
     int iSum =0;
     iSum = this.iValue1 + this.iValue2;
     return iSum;
 }

}