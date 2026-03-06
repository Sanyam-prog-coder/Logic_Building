import java.io.*;
import java.time.LocalDate;
import java.time.LocalDateTime;
import java.util.ArrayList;
import java.util.Scanner;

// Done 

//////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : StudyLog
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-March-2026
/// 
//////////////////////////////////////////////////////////////////////////////////

class StudyLog
{
    private LocalDate Date;
    private String Subject;
    private double Duration;
    private String Description;

    // Constructore
    public StudyLog(LocalDate a, String b, double c, String d)
    {
        this.Date = a;
        this.Subject = b;
        this.Duration = c;
        this.Description = d;
    }

    public LocalDate getDate()
    {
        return this.Date;
    }

    public String getSubject()
    {
        return this.Subject;
    }

    public double getDuration()
    {
        return this.Duration;
    }

    public String getDescription()
    {
        return this.Description;
    }

    @Override
    public String toString()
    {
        return Date+" | "+Subject+" | "+Duration+" | "+Description;
    }
}

//////////////////////////////////////////////////////////////////////////////////
/// 
/// Function    : StudyTracker
/// Author      : Ravne Sanyam Bhupendrakumar
/// Date        : 06-March-2026
/// 
//////////////////////////////////////////////////////////////////////////////////

class StudyTracker
{
    public ArrayList <StudyLog>Database = new ArrayList<StudyLog>();

    public void InsetLog()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("-------------------------------------------------------------");
        System.out.println("-------------- Enter Valid Details Of Your Study ------------");
        System.out.println("-------------------------------------------------------------");

        LocalDate Dateobj = LocalDate.now();

        System.out.println("Please Enter the Name of Subject like C/C++/Java/Python");
        String sub = sobj.nextLine();

        System.out.println("Enter The time period of Study in hours");
        double dur = sobj.nextDouble();

        System.out.println("Please Provide the Description of your Study");
        String desc = sobj.next();

        StudyLog studyobj = new StudyLog(Dateobj, sub, dur, desc);

        Database.add(studyobj);

        System.out.println("Study log gets stored succesfully");
        System.out.println("-------------------------------------------------------------");

    }

    public void DisplayLog()
    {
        System.out.println("-------------------------------------------------------------");

        if(Database.isEmpty())
        {
            System.out.println("------------------ Nothing to display -----------------------");
            System.out.println("-------------------------------------------------------------");
            return;
        }

        System.out.println("----------- Log report of marvellous study tracker ----------");
        System.out.println("-------------------------------------------------------------");

        for(StudyLog s : Database)
        {
            System.out.println(s);
        }

        System.out.println("-------------------------------------------------------------");
    }

    public void ExportCSV()
    {
        
    }
}

class program898
{
    public static void main(String A[])
    {
        StudyTracker stobj = new StudyTracker();

        //stobj.InsetLog();
        stobj.DisplayLog();

    }
}