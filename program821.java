import java.util.Scanner;

//////////////////////////////////////////////////////////////////
/// 
/// Description : Check weather Armstrong Number or Not
/// 
//////////////////////////////////////////////////////////////////

class program821
{
    public static void main(String A[]) 
    {
        Scanner sobj =  new Scanner(System.in);

        int x = 0, y = 0, i = 0, iPow = 0;

        System.out.println("Enter Base : ");
        x = sobj.nextInt();

        System.out.println("Ente Power : ");
        y = sobj.nextInt();

        for(iPow = 1,i = 1; i <= y; i++)
        {
            iPow = iPow * x;
        }

        System.out.println(iPow);
        
        sobj.close();
    }
}