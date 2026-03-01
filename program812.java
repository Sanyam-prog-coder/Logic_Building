
// Dynamic Programming

// 1st Memorisation  

import java.util.Scanner;

class program812
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number of Row In theatre : ");
        int R = sobj.nextInt();

        System.out.println("Enter Number of Column in Theatre : ");
        int C = sobj.nextInt();

        if(R <= 0 || C <= 0)
        {
            System.out.println("Invalid Input !");
            return;
        }

        int Seats[][] = new int[R][C];
        int i = 0, j = 0;

        System.out.println("Enter Booking Details (0/1) : ");

        for(i = 0; i < R; i++)
        {
            System.out.println("Enter details of Row : "+(i + 1));
            for(j = 0; j < C; j++)
            {
                Seats[i][j] = sobj.nextInt();
                
                if(Seats[i][j] != 0 && Seats[i][j] != 1)
                {
                    System.out.println("Invalid Input !");
                    return;
                }
            }
        }

        int TotalBooked = 0;
        int MaxBookedInRow = 0;
        int RowWithMax = 0;
        int RowBooked = 0;
        boolean FullRowExist = false;

        for(i = 0; i < R; i++)
        {
            RowBooked = 0;
            for(j = 0; j < C; j++)
            {
                if(Seats[i][j] == 1)
                {
                    TotalBooked++;
                }

                RowBooked = RowBooked + Seats[i][j];
            }

            if(RowBooked > MaxBookedInRow)
            {
                MaxBookedInRow = RowBooked;
                RowWithMax = i;
            }

            if(RowBooked == C)
            {
                FullRowExist = true;
            }
        }

        System.out.println("Total Booked Seat : "+TotalBooked);
        System.out.println("Row With Maximum Booking : "+(RowWithMax + 1));
        
        System.out.println("Full Row Exist : "+(FullRowExist ? "Yes" : "No"));
        

        sobj.close();
    }
}