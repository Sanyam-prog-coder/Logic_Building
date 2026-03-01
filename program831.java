import java.util.Scanner;

//////////////////////////////////////////////////////////////////
/// 
/// Description : Check weather Neon Number or Not
/// 
//////////////////////////////////////////////////////////////////

class program831
{
    public static void main(String A[]) 
    {
        Scanner sobj =  new Scanner(System.in);

        int iNo = 0, iDigit = 0, iTemp = 0, iRev = 0, iSum = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        iTemp = iNo;

        iNo = iNo * iNo;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }

        if(iSum == iTemp)
        {
            System.out.println(iTemp+" is Neon Number");
        }
        else
        {
            System.out.println(iTemp+" is not Neon Number");
        }

        sobj.close();
    }
}