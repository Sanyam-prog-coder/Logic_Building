import java.util.Scanner;

//////////////////////////////////////////////////////////////////
/// 
/// Description : Check weather Armstrong Number or Not
/// 
//////////////////////////////////////////////////////////////////

class program822
{
    public static void main(String A[]) 
    {
        Scanner sobj =  new Scanner(System.in);

        int x = 0, y = 0, iPow = 0;

        System.out.println("Enter Base : ");
        x = sobj.nextInt();

        System.out.println("Ente Power : ");
        y = sobj.nextInt();

        iPow = 1;
        while(y != 0)
        {
            iPow = iPow * x;
            y--;
        }

        System.out.println(iPow);
        
        sobj.close();
    }
}