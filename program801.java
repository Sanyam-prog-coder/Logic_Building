import java.util.*;

//////////////////////////////////////////////////////////////////////////////////////////////
/// 
/// Description : 
/// Auther      : Ravne Sanyam Bhupendrakumar
/// Date        : 26-Feb-2026
/// 
//////////////////////////////////////////////////////////////////////////////////////////////


class program801
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Hours = 0;
        int Amount = 0;

        System.out.println("Enter ` the parking time : ");
        Hours = sobj.nextInt();

        // Validation
        if(Hours < 0)
        {
            System.out.println("Invalid Input !");
            return;
        }

        if(Hours <= 2)
        {
            Amount = 20;
        }
        else
        {
            Amount = 20 +(Hours - 2) * 10;
        }

        if(Hours > 10)
        {
            Amount = Amount + 50;
        }

        System.out.println("Total Parking Duration : "+Hours+"hr");
        System.out.println("Total Parking Fee : "+Amount);

        sobj.close();
    }
}
