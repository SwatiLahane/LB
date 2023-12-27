
    import java.util.*;



    class Arithematic 
    {
        public int Addition(int Brr[])
        {
            int iCnt =0;
            int iSum =0;
        
            for(iCnt =0; iCnt <Brr.length; iCnt++)
            {
                iSum = iSum + Brr[iCnt];
            }
        return iSum;
        
        }
        
    }

    class Program6
    {
        
        public static void main(String Args[])
        {
            Scanner sobj = new Scanner(System.in);
            Arithematic aobj = new Arithematic();

            int iSize =0;
            int iCnt =0,iRet = 0;

            System.out.println("Enter Number of elements :");
            iSize = sobj.nextInt();

            int Arr[] = new int[iSize];
            System.out.println("Enter Elements:");
            for(iCnt =0; iCnt < iSize; iCnt++)
            {
            Arr[iCnt] = sobj.nextInt();
            }

        
            iRet = aobj.Addition(Arr);
            System.out.println("Addition of Array Elements :"+iRet);

        }
    }