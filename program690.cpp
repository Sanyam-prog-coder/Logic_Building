// Input : 5
// output : 1   2   3   4   5   

#include<iostream>
using namespace std;

void Display(int iNo)
{
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        cout<<iCnt<<"\t";
        iCnt++;
        Display(iNo);
    }
    else                    // IMP
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