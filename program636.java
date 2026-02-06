
// 14th Bit OFF

// 1111     1111    1111    1111    1101    1111    1111    1111
// f        f       f       f       d       f       f       f
// 0xfffffff7

import java.util.Scanner;

class program636
{
    public static void main(String A[])
    {
        int iNo = 0, iMask = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        iNo = sobj.nextInt();

        iMask = 0xffffdfff;

        iNo = iNo & iMask;

        System.out.println("Updated Number is : "+iNo);
    }
}
