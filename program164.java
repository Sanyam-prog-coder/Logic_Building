/*
    iRow : 3
    iCOl : 4
    *   *   *   *
    *   *   *   *
    *   *   *   *   
 */

import java.util.*;

class pattern
{
    public void Display(int iRow, int iCOl)
    {
        int i = 0, j = 0;

        for(i = 1; i<= iRow; i++)
        {
            for(j = 1; j <= iCOl; j++)
            {
                System.out.print(("*\t"));
            }
            System.out.println();
        }    
    }
}
class program164
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);
        int iValue1 = 0, iValue2 = 0;

        System.out.println("Enter the Row : ");
        iValue1 = sobj.nextInt();

        System.out.println("Enter the coloumns :");
        iValue2 = sobj.nextInt();

        pattern pobj = new pattern();
        pobj.Display(iValue1, iValue2);
    }
}