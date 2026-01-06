#include<iostream>
using namespace std;

template <class T>
class Arithmatic
{
    public :
        T no1;
        T no2;

        Arithmatic(T a, T b);
        T Addition();
        T Substraction();
};

template <class T>
Arithmatic <T>:: Arithmatic(T a, T b)
{
    no1 = a;
    no2 = b;
}

template <class T>
T Arithmatic <T> :: Addition()
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}

template <class T>
T Arithmatic <T> :: Substraction()
{
    T Ans;
    Ans = no1 - no2;
    return Ans;
}

int main()
{
    //Arithmatic <int> iobj(11, 10);

    Arithmatic<int> *iobj = new Arithmatic<int>(11,10);

    cout<<"Addition is : "<<iobj->Addition()<<"\n";
    cout<<"Substraction is : "<<iobj->Substraction()<<"\n";

    // Arithmatic <double> dobj(11.4594, 10.4546);

    Arithmatic<double> *dobj = new Arithmatic<double>(11.549891, 15.48638);

    cout<<"Addition is : "<<dobj->Addition()<<"\n";
    cout<<"Substraction is : "<<dobj->Substraction()<<"\n";

    delete iobj;
    delete dobj;

    return 0;
}