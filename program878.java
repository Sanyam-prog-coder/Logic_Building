import java.util.HashMap;
import java.util.Scanner;

class program878
{
    public static void main(String A[]) 
    {
        Scanner sobj =  new Scanner(System.in);

        System.out.println("Enter String");
        String str = sobj.nextLine();

        int iMax = 0;
        char cMax = '\0';
        
        char Arr[] = str.toCharArray();

        HashMap <Character, Integer>hobj = new HashMap<Character, Integer>();

        int old = 0;

        for(char ch : Arr)
        {
            if(hobj.containsKey(ch))
            {
                old = hobj.get(ch);
                hobj.put(ch, old + 1);
            }
            else
            {
                hobj.put(ch, 1);
            }
        }

        for(char ch : hobj.keySet())
        {
            if(hobj.get(ch) > iMax)
            {
                iMax = hobj.get(ch);
                cMax = ch;
            }
        }

        System.out.println("Maximum times occured character is : "+cMax+" with frequency : "+iMax);

        sobj.close();
    }
}
