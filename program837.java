import java.util.Scanner;

//////////////////////////////////////////////////////////////////
/// 
/// Description : Check weather Trimorphic Number or Not
/// 
//////////////////////////////////////////////////////////////////

class program837
{
    public static void main(String A[]) 
    {
        Scanner sobj =  new Scanner(System.in);

        int iNo = 0, iTemp = 0, iCube = 0, iCount = 0, iDeno = 0;

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();

        iTemp = iNo;

        iCube = iNo * iNo * iNo;
        
        while(iNo != 0)
        {
            iCount++;
            iNo = iNo / 10;
        }

        iDeno = (int)Math.pow(10, iCount);

        if(iCube % iDeno == iTemp)
        {
            System.out.println(iTemp+ " is Trimorphic Number");
        }
        else
        {
            System.out.println(iTemp+ " is not Trimorphi Number");
        }
        
        sobj.close();
    }
}