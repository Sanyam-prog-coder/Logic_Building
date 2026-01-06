#include<iostream>
using namespace std;

template <class T>
class Arithmatic
{
    public :
        T no1;
        T no2;

        Arithmatic(T a, T b)
        {
            no1 = a;
            no2 = b;
        }

        T Addition()
        {
            T Ans;
            Ans = no1 + no2;
            return Ans;
        }

        T Substraction()
        {
            T Ans;
            Ans = no1 - no2;
            return Ans;
        }
};

int main()
{
    Arithmatic <int> obj(11, 10);

    cout<<"Addition is : "<<obj.Addition()<<"\n";
    cout<<"Substraction is : "<<obj.Substraction()<<"\n";

    return 0;
}