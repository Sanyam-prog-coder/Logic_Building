class Demo
{
    public void Display(int No)
    {
        if(No == 0)
        {
            return;
        }

        // Recursive Call
        Display(No - 1);
        System.out.println(No);
    }
}

class program999
{
    public static void main(String A[]) 
    {
        Demo dobj = new Demo();

        dobj.Display(5);

    }
}