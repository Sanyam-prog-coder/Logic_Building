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
        iNo = iNo / 10;
        CountDigit(iNo);
    }
    return iCount;
}
int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter Number : ";
    cin>>iValue;

    iRet = CountDigit(iValue);

    cout<<iRet<<"\n";
    
    return 0;
}