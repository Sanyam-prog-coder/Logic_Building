
import java.util.*;

class Number
{
    public long CalculateFactorial(int iNo)
    {
        int i = 0;
        long lFact = 1;             // Important

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        for(i = 1; i <= iNo; i++)
        {
            lFact = lFact * i;
        }
        return lFact;
    }
} // End of Number Class

class program88
{
    public static void main(String A[])
    {
        int iValue = 0;
        long lRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iValue = sobj.nextInt();
        
        Number nobj = new Number();
        lRet = nobj.CalculateFactorial(iValue);

        System.out.println("Factorial is : " +lRet);

        // Important
         
        sobj = null;
        nobj = null;

        System.gc();
    }
}