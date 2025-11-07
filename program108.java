// Object Oriented program (oop) Design
import java.util.*;                                             // Package 

//////////////////////////////////////////////////////////////////////////////////////////////
//
// Function     : Average
// Description  : To Accept the N number and find Average
// Auther       : Sanyam BhupendraKumar Ravne
// Date         : 07/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////

class ArrayX
{
    private int Arr[];                                          // Access Specifier
    private int iSize;                                          // Access Specifier

    public ArrayX(int no)                                       // Method
    {
        System.out.println("Inside Constructor");
        
        iSize = no;
        Arr = new int[iSize];
    }

    public void Accept()                                        // Method
    {
        Scanner sobj = new Scanner(System.in);                  // Non Buffered Way
        int i = 0;

        System.out.println("Enetr the Elements of array : ");

        for(i = 0; i < Arr.length; i++)                         // Iteration For loop
        {
            Arr[i] = sobj.nextInt();                            // Logic Accept
        }
    }

    public void Display()                                       // Method
    {
        System.out.println("Elements of the array are :");

        int i = 0;                                              // Loop Counter

        for(i = 0; i < Arr.length; i++)                         // Iteration For loop
        {
            System.out.println(Arr[i]);
        }
    }

    public float Average()                                      // Method
    {
        int i =0;                                               // Loop Counter
        int iSum = 0;                                           

        for(i = 0; i < Arr.length; i++)
        {
            iSum = iSum + Arr[i];                               // Logic Average
        }
        return (iSum / iSize);
    }
}                                                               // End of ArrayX class

class program108
{
    public static void main(String A[])                         // Main Method
    {
        float fRet = 0.0f;                                      // Local Variable

        ArrayX aobj1 = new ArrayX(5);                           // Class object
        aobj1.Accept();                                         // Accept Method
        aobj1.Display();                                        // Display Method

        fRet = aobj1.Average();                                 // Method Calling

        System.out.println("Average is : " +fRet);
    }
}
//////////////////////////////////////////////////////////////////////////////////////////////
//
// Input    : 10   20  30  40  50       Output : 30.0
//
//////////////////////////////////////////////////////////////////////////////////////////////