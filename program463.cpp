#include<iostream>
using namespace std;

class Arithmatic
{
    public :
        int no1;
        int no2;

        Arithmatic(int a, int b)
        {
            no1 = a;
            no2 = b;
        }

        int Addition()
        {
            int Ans;
            Ans = no1 + no2;
            return Ans;
        }
};

int main()
{
    // Atithmatic obj();
    Arithmatic obj(11, 10);

    cout<<"Addition is : "<<obj.Addition()<<"\n";
    return 0;
}