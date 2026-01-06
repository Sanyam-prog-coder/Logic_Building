#include<iostream>
using namespace std;

template<class T>
T Addition(T no1, T no2)
{
    T Ans;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    cout<<"Addition of Characters : "<<Addition('a','b')<<"\n";
    cout<<"Addition of integer : "<<Addition(11, 10)<<"\n";
    cout<<"Addition of float : "<<Addition(90.3f, 78.5f)<<"\n";
    cout<<"Addition of doubles : "<<Addition(78.549646, 45.15658)<<"\n";
    
    return 0;
}