import java.io.*;
import java.time.LocalDate;
import java.time.LocalDateTime;

class program893
{
    public static void main(String A[])
    {
        String FileName = "Marvellous.CSV";

        try(FileWriter fobj = new FileWriter(FileName))
        {
            fobj.write("Name,Mark\n");
            fobj.write("Sagar,90\n");
            fobj.write("Amit,80\n");
            fobj.write("Pooja,70\n");
        }
        catch(Exception eobj)
        {
            System.out.println("Exception occured");
        }
    }
}