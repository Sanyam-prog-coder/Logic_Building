// Input : 7891
// output : 4  

#include<iostream>
using namespace std;

int CountDigit(int iNo)
{
    static int iCount = 0;

    if(iNo != 0)
    {
        iCount++;
        CountDigit(iNo / 10);
    }
    return iCount;
}
int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = CountDigit(iValue);

    cout<<"Number of Digits are : "<<iRet<<"\n";
    
    return 0;
}