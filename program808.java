
// Dynamic Programming

// 1st Memorisation  

import java.util.Scanner;

class program808
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of Cities : ");
        int N = sobj.nextInt();

        if(N <= 0)
        {
            System.out.println("Invalid Input !");
            return;
        }

        int Arr[][] = new int[N][7];
        int i = 0, j = 0, No = 0;

        System.out.println("Enter Electricity Consumption of Each Cities : ");
        
        for(i = 0; i < N; i++)
        {
            System.out.println("Enter Consumption of City : "+(i + 1));
            for(j = 0; j < 7; j++)
            {
                No = sobj.nextInt();
                if(No < 0)
                {
                    System.out.println("Invalid Input !");
                    return;
                }
                Arr[i][j] = No;
            }
        }

        int Weekly[] = new int[7];
        int HighestCity = 0;
        int MaxWeekly = 0;

        int PeekDay = 0;
        int MaxDayTotal = 0;

        int Sum = 0;

        // Weekly Consumtion + Hinghest Consumtion
        for(i = 0; i < N; i++)
        {
            Sum = 0;
            for(j = 0; j < 7; j++)
            {
                Sum = Sum + Arr[i][j];
            }
            Weekly[i] = Sum;

            if(Sum > MaxWeekly)
            {
                MaxWeekly = Sum;
                HighestCity = i;
            }
        }

        System.out.println("Highest Consumption : City"+ HighestCity);
        System.out.println("Highest Consumption : "+MaxWeekly);

        // Day With Maximum Consumption
        int DaySum = 0;
        int Day = 0;

        for(Day = 0; Day < 7; Day++)
        {
            DaySum = 0;
            for(i = 0; i < N; i++)
            {
                DaySum = DaySum + Arr[i][Day];
            }
            if(DaySum > MaxDayTotal)
            {
                MaxDayTotal = DaySum;
                PeekDay = Day;
            }
        }

        System.out.println("Peak Consumption Day : "+PeekDay);
        
        System.out.print("Weekly Consumption : ");
        for(i = 0; i < N; i++)
        {
            System.out.println("City : "+(i+1)+":"+Weekly[i]);
        }

        // Cities More than 500 Consumption
        System.out.println("City More than 500 units Consumption : ");

        for(i = 0; i < N; i++)
        {
            if(Weekly[i] > 500)
            {
                System.out.println("City : "+(i+1));
            }
        }
        sobj.close();
    }
}