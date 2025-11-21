// Input : 6
// Output : #   *   #   *   #   *

import java.util.*;

class pattern
{
    public void Display(int iNo)
    {
        int iCnt = 0;
        
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        if((iCnt % 2) == 0)
        {
            System.out.print("*\t");
        }
        else
        {
            System.out.print("#\t");
        }
        System.out.println();
    }
}
class program155
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue = 0;

        System.out.println("Enter the frequency : ");
        iValue = sobj.nextInt();

        pattern pobj = new pattern();
        pobj.Display(iValue);
    }
}