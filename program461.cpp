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
    float i = 0.0f, j = 0.0f;
    float Ret = 0.0f;

    cout<<"Enter First Number\n";
    cin>>i;

    cout<<"Enter Second Number\n";
    cin>>j;

    Ret = Addition(i,j);

    cout<<"Addition is : "<<Ret<<"\n";
    
    return 0;
}