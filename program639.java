/*

    iPos1 = 2
    iPos2 = 4

    iNo =   0   1   1   0

    iMask1 =    0   0   1   0
    iMask2 =    1   0   0   0

    iNo = iNo ^ iMask1;
    0   1   1   0
    0   0   1   0   ^
    --------------------------
    0   1   0   0   iNo


    iNo = iNo ^ iMask2;

    0   1   0   0
    1   0   0   0   ^
    --------------------------
    1   1   0   0   iNo


*/
import java.util.Scanner;

class program639
{
    public static void main(String A[])
    {
        int iNo = 0, iMask1 = 0, iMask2 = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        iNo = sobj.nextInt();

        iMask1 = 0x2;
        iMask2 = 0x8;

        iNo = iNo ^ iMask1;
        iNo = iNo ^ iMask2;

        System.out.println("Updated Number : "+iNo);
    }
}
