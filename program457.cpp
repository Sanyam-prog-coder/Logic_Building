#include<iostream>
using namespace std;

int Addition(int no1, int no2)
{
    int Ans;
    Ans = no1 + no2;
    return Ans;
}

int main()
{
    int i = 0, j = 0;
    int Ret = 0;

    cout<<"Enter First Number\n";
    cin>>i;

    cout<<"Enter Second Number\n";
    cin>>j;

    Ret = Addition(i,j);

    cout<<"Addition is : "<<Ret<<"\n";
    
    return 0;
}