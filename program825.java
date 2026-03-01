import java.util.Scanner;

/// Final Code
/// Advance Code
//////////////////////////////////////////////////////////////////
/// 
/// Description : Check weather Armstrong Number or Not
/// 
//////////////////////////////////////////////////////////////////

class program825
{
    public static void main(String A[]) 
    {
        Scanner sobj =  new Scanner(System.in);

        int iNo = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        int iCount = 0, iDigit = 0, iTemp = 0, iSum = 0, iPow = 0;

        iTemp = iNo;

        // Count Number of Digits
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;
            iNo = iNo / 10;
        }

        iNo = iTemp;

        // y = iCount
        // x = iDigit
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iPow = (int)Math.pow(iDigit, iCount);

            iSum = iSum + iPow;
            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            System.out.println(iTemp+ " Is a ArmStrong number");
        }
        else
        {
            System.out.println(iTemp+" Is not a ArmStrong number");
        }
        
        sobj.close();
    }
}