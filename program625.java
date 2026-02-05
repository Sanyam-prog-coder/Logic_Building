import java.util.Scanner;

class program625
{
    public static void main(String A[])
    {
        int iNo = 0, iMask = 0, iResult = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number : ");
        iNo = sobj.nextInt();        
        iMask = 4;
        iResult = 0;

        iResult = iNo & iMask;
        
        if(iResult == iMask)
        {
            System.out.println("3rd Byte is On");
        }
        else
        {
            System.out.println("3rd Byte is Off");
        }
    }
}