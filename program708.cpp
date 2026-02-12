// Input : 7891
// output : 25  

#include<iostream>
using namespace std;

int CountDigit(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;


    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        CountDigit(iNo);
    }
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = CountDigit(iValue);

    cout<<"Sum of all Digit : "<<iRet<<"\n";
    
    return 0;
}