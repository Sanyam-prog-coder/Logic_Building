#include<iostream>
using namespace std;

double Addition(double no1, double no2)
{
    double Ans;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    double i = 0.0, j = 0.0;
    double Ret = 0.0;

    cout<<"Enter First Number\n";
    cin>>i;

    cout<<"Enter Second Number\n";
    cin>>j;

    Ret = Addition(i,j);

    cout<<"Addition is : "<<Ret<<"\n";
    
    return 0;
}