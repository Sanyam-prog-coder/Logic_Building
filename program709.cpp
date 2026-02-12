// Input : 7891
// output : 25  

#include<iostream>
using namespace std;

int SumDigit(int iNo)
{
    static int iSum = 0;

    if(iNo != 0)
    {
        iSum = iSum + (iNo % 10);
        SumDigit(iNo /10);
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = SumDigit(iValue);

    cout<<"Sum of all Digit : "<<iRet<<"\n";
    
    return 0;
}