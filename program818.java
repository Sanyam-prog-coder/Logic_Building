import java.util.Scanner;

/// Final Code
//////////////////////////////////////////////////////////////////
/// 
/// Description : Check weather Strong Number or Not
/// 
//////////////////////////////////////////////////////////////////

class program818
{
    public static boolean CheckStrong(int iNo)
    {
        int iFact = 0, i = 0, iTemp = 0, iSum = 0, iDigit = 0;

        iTemp = iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;

            for(iFact = 1, i = 1; i <= iDigit; i++)
            {
                iFact = iFact * i;
            }

            iSum = iSum + iFact;

            iNo = iNo / 10;
        }

        return (iSum == iTemp);
        
    }

    public static void main(String A[]) 
    {
        Scanner sobj =  new Scanner(System.in);
        
        int iNo = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();
        
        boolean bRet = false;

        bRet = CheckStrong(iNo);

        if(bRet)
        {
            System.out.println(iNo + " is a strong number");
        }
        else
        {  
            System.out.println(iNo + " is not strong number");
        }

        sobj.close();
    }
}