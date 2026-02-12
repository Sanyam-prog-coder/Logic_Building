// Input : 5
// output : 5   4   3   2   1   

#include<iostream>
using namespace std;

void Display(int iNo)
{
    if(iNo >= 1)
    {
        cout<<iNo<<"\t";
        Display(--iNo);
    }
    else
    {
        cout<<"\n";
    }
}
int main()
{
    int iValue = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    Display(iValue);

    return 0;
}